#ifndef SEMAPHORE_DEMO_HPP
#define SEMAPHORE_DEMO_HPP

#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/semaphore.hpp>
#include <godot_cpp/classes/thread.hpp>

namespace godot {
    class SemaphoreDemo : public Node {
        GDCLASS(SemaphoreDemo, Node);

    private:
        int counter = 0;
        Ref<Mutex> mutex;
        Ref<Semaphore> semaphore;
        Ref<Thread> thread;
        bool exit_thread = false;

    protected:
        static void _bind_methods();
        void _notification(int p_what);

    public:
        SemaphoreDemo();
        ~SemaphoreDemo();

        void thread_function();
        void increment_counter();
        int get_counter();
    };
}

#endif // SEMAPHORE_DEMO_HPP