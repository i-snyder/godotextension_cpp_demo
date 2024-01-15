#include "multithreading_demo.hpp"

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void MultithreadingDemo::_bind_methods() {
    // THREADING
    ClassDB::bind_method(D_METHOD("threaded_function"), &MultithreadingDemo::demo_threaded_function);
}

void MultithreadingDemo::_notification(int p_what) {
    // Prevents this from running in the editor, only during game mode.
    if (Engine::get_singleton()->is_editor_hint()) {
        return;
    }

    switch (p_what) {
        case NOTIFICATION_READY: {
            worker.instantiate();
            worker->start(callable_mp(this, &MultithreadingDemo::demo_threaded_function), Thread::PRIORITY_NORMAL);
        } break;
        case NOTIFICATION_EXIT_TREE: { // Thread must be disposed (or "joined"), for portability.
            // Wait until it exits.
            if (worker.is_valid()) {
                worker->wait_to_finish();
            }

            worker.unref();
        } break;
    }
}

MultithreadingDemo::MultithreadingDemo() {
    // Initialize any variables here.
}

MultithreadingDemo::~MultithreadingDemo() {
    // Add your cleanup here.
}

void MultithreadingDemo::demo_threaded_function() {
    UtilityFunctions::print("demo_threaded_function started!");
    int i = 0;
    uint64_t start = Time::get_singleton()->get_ticks_msec();
    while (Time::get_singleton()->get_ticks_msec() - start < 5000) {
        OS::get_singleton()->delay_msec(10);
        i++;
    }

    UtilityFunctions::print("demo_threaded_function counted to: ", i, ".");
}