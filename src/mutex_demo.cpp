#include "mutex_demo.hpp"

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void MutexDemo::_bind_methods() {
    ClassDB::bind_method(D_METHOD("thread_function"), &MutexDemo::thread_function);
}

void MutexDemo::_notification(int p_what) {
    // Prevents this from running in the editor, only during game mode.
    if (Engine::get_singleton()->is_editor_hint()) {
        return;
    }

    switch (p_what) {
        case NOTIFICATION_READY: {
            UtilityFunctions::print("Mutex Demo Counter is starting at: ", counter);
            mutex.instantiate();
            thread.instantiate();
            thread->start(callable_mp(this, &MutexDemo::thread_function), Thread::PRIORITY_NORMAL);

            // Increase value, protect it with Mutex.
            mutex->lock();
            counter += 1;
            UtilityFunctions::print("Mutex Demo Counter is ", counter, " after adding with Mutex protection.");
            mutex->unlock();
        } break;
        case NOTIFICATION_EXIT_TREE: { // Thread must be disposed (or "joined"), for portability.
            // Wait until it exits.
            if (thread.is_valid()) {
                thread->wait_to_finish();
            }
            thread.unref();

            UtilityFunctions::print("Mutex Demo Counter is ", counter, " at EXIT_TREE."); // Should be 2.
        } break;
    }
}

MutexDemo::MutexDemo() {
    // Initialize any variables here.
}

MutexDemo::~MutexDemo() {
    // Add your cleanup here.
}

// Increment the value from the thread, too.
void MutexDemo::thread_function() {
    mutex->lock();
    counter += 1;
    mutex->unlock();
}