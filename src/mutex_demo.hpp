#ifndef MUTEX_DEMO_HPP
#define MUTEX_DEMO_HPP

#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/thread.hpp>

namespace godot {
    class MutexDemo : public Node {
        GDCLASS(MutexDemo, Node);

    private:
        int counter = 0;
        Ref<Mutex> mutex;
        Ref<Thread> thread;

    protected:
        static void _bind_methods();
        void _notification(int p_what);

    public:
        MutexDemo();
        ~MutexDemo();

        void thread_function();
    };
}

#endif // MUTEX_DEMO_HPP