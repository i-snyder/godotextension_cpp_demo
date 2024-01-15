#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/classes/thread.hpp>

namespace godot {

	class HelloWorld : public Sprite2D {
		GDCLASS(HelloWorld, Sprite2D)

	private:
		double time_passed;
		double time_emit;
		double amplitude;
		double speed;

		Ref<Thread> worker1;
		Ref<Thread> worker2;

	protected:
		static void _bind_methods();
		void _notification(int p_what);

	public:
		HelloWorld();
		~HelloWorld();

		void _process(double delta) override;

		void set_speed(const double p_speed);
		double get_speed() const;

		void set_amplitude(const double p_amplitude);
		double get_amplitude() const;

		void threaded_function_1();
		void threaded_function_2();
	};

}

#endif // HELLO_WORLD_HPP