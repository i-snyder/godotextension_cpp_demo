#include "semaphore_demo.hpp"

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void SemaphoreDemo::_bind_methods() {
    ClassDB::bind_method(D_METHOD("thread_function"), &SemaphoreDemo::thread_function);
}

void SemaphoreDemo::_notification(int p_what) {
    // Prevents this from running in the editor, only during game mode.
    if (Engine::get_singleton()->is_editor_hint()) {
        return;
    }

    switch (p_what) {
        case NOTIFICATION_READY: {
            UtilityFunctions::print("Semaphore Demo Counter is starting at: ", counter);
            mutex.instantiate();
            semaphore.instantiate();
            exit_thread = false;

            thread.instantiate();
            thread->start(callable_mp(this, &SemaphoreDemo::thread_function), Thread::PRIORITY_NORMAL);

            increment_counter(); // Call increment counter to test.
        } break;
        case NOTIFICATION_EXIT_TREE: { // Thread must be disposed (or "joined"), for portability.
            // Set exit condition to true.
            mutex->lock();
            exit_thread = true; // Protect with Mutex.
            mutex->unlock();

            // Unblock by posting.
            semaphore->post();

            // Wait until it exits.
            if (thread.is_valid()) {
                thread->wait_to_finish();
            }
            thread.unref();

            // Print the counter.
            UtilityFunctions::print("Semaphore Demo Counter is ", get_counter(),  " at EXIT_TREE.");
        } break;
    }
}

SemaphoreDemo::SemaphoreDemo() {
    // Initialize any variables here.
}

SemaphoreDemo::~SemaphoreDemo() {
    // Add your cleanup here.
}

// Increment the value from the thread, too.
void SemaphoreDemo::thread_function() {
    while (true) {
        semaphore->wait(); // Wait until posted.

        mutex->lock();
        bool should_exit = exit_thread; // Protect with Mutex.
        mutex->unlock();

        if (should_exit) {
            break;
        }

        mutex->lock();
        counter += 1; // Increment counter, protect with Mutex.
        mutex->unlock();
    }
}

void SemaphoreDemo::increment_counter() {
    semaphore->post(); // Make the thread process.
}

int SemaphoreDemo::get_counter() {
    mutex->lock();
    // Copy counter, protect with Mutex.
    int counter_value = counter;
    mutex->unlock();
    return counter_value;
}