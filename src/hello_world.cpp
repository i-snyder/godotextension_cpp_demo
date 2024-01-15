#include "hello_world.hpp"

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void HelloWorld::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_amplitude"), &HelloWorld::get_amplitude);
	ClassDB::bind_method(D_METHOD("set_amplitude", "p_amplitude"), &HelloWorld::set_amplitude);
	ClassDB::add_property("HelloWorld", PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude", "get_amplitude");

	ClassDB::bind_method(D_METHOD("get_speed"), &HelloWorld::get_speed);
	ClassDB::bind_method(D_METHOD("set_speed", "p_speed"), &HelloWorld::set_speed);
	ClassDB::add_property("HelloWorld", PropertyInfo(Variant::FLOAT, "speed", PROPERTY_HINT_RANGE, "0,20,0.01"), "set_speed", "get_speed");

	// THREADING
	ClassDB::bind_method(D_METHOD("threaded_function_1"), &HelloWorld::threaded_function_1);
	ClassDB::bind_method(D_METHOD("threaded_function_2"), &HelloWorld::threaded_function_2);

	ADD_SIGNAL(MethodInfo("position_changed", PropertyInfo(Variant::OBJECT, "node"), PropertyInfo(Variant::VECTOR2, "new_pos")));

}

void HelloWorld::_notification(int p_what)
{
	// Don't run if we're in the editor
	if (Engine::get_singleton()->is_editor_hint()) {
		return;
	}

	switch (p_what) {
	case NOTIFICATION_READY: {
		worker1.instantiate();
		worker1->start(callable_mp(this, &HelloWorld::threaded_function_1), Thread::PRIORITY_NORMAL);
		worker2.instantiate();
		worker2->start(callable_mp(this, &HelloWorld::threaded_function_2), Thread::PRIORITY_NORMAL);
	} break;
	case NOTIFICATION_WM_CLOSE_REQUEST: {
		if (worker1.is_valid()) {
			worker1->wait_to_finish();
		}
		if (worker2.is_valid()) {
			worker2->wait_to_finish();
		}

		worker1.unref();
		worker2.unref();
	};
	}
}

HelloWorld::HelloWorld() {
	// Initialize any variables here.
	time_passed = 0.0;
	amplitude = 10.0;
	speed = 1.0;
	time_emit = 0.0;
}

HelloWorld::~HelloWorld() {
	// Add your cleanup here.
}

void HelloWorld::_process(double delta) {
	// Keeps this from running in the editor, only during game mode
	if (Engine::get_singleton()->is_editor_hint()) {
		return;
	}

	time_passed += speed * delta;

	Vector2 new_position = Vector2(
		amplitude + (amplitude * sin(time_passed * 2.0)),
		amplitude + (amplitude * cos(time_passed * 1.5))
	);

	set_position(new_position);

	time_emit += delta;
	if (time_emit > 1.0) {
		emit_signal("position_changed", this, new_position);
		time_emit = 0.0;
	}
}

void HelloWorld::threaded_function_1() {
	int i = 0;
	uint64_t start = Time::get_singleton()->get_ticks_msec();
	while (Time::get_singleton()->get_ticks_msec() - start < 5000) {
		OS::get_singleton()->delay_msec(15);
		i++;
	}

	UtilityFunctions::print("threaded_function_1 counted to: ", i, ".");
}

void HelloWorld::threaded_function_2() {
	int i = 0;
	uint64_t start = Time::get_singleton()->get_ticks_msec();
	while (Time::get_singleton()->get_ticks_msec() - start < 5000) {
		OS::get_singleton()->delay_msec(10);
		i++;
	}

	UtilityFunctions::print("threaded_function_2 counted to: ", i, ".");
}

void HelloWorld::set_amplitude(const double p_amplitude) {
	amplitude = p_amplitude;
}

double HelloWorld::get_amplitude() const {
	return amplitude;
}

void HelloWorld::set_speed(const double p_speed) {
	speed = p_speed;
}

double HelloWorld::get_speed() const {
	return speed;
}