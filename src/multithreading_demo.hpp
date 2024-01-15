#ifndef MULTITHREADING_DEMO_HPP
#define MULTITHREADING_DEMO_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/thread.hpp>

namespace godot {
    class MultithreadingDemo : public Node {
        GDCLASS(MultithreadingDemo, Node);

    private:
        Ref<Thread> worker;

    protected:
        static void _bind_methods();
        void _notification(int p_what);

    public:
        MultithreadingDemo();
        ~MultithreadingDemo();

        void demo_threaded_function();
    };
}

#endif // MULTITHREADING_DEMO_HPP