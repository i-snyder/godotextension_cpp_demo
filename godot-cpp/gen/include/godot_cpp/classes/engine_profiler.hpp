/**************************************************************************/
/*  engine_profiler.hpp                                                   */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_ENGINE_PROFILER_HPP
#define GODOT_CPP_ENGINE_PROFILER_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Array;

class EngineProfiler : public RefCounted {
	GDEXTENSION_CLASS(EngineProfiler, RefCounted)

public:

	virtual void _toggle(bool enable, const Array &options);
	virtual void _add_frame(const Array &data);
	virtual void _tick(double frame_time, double process_time, double physics_time, double physics_frame_time);
protected:
	template <class T, class B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_toggle),decltype(&T::_toggle)>) {
			BIND_VIRTUAL_METHOD(T, _toggle);
		}
		if constexpr (!std::is_same_v<decltype(&B::_add_frame),decltype(&T::_add_frame)>) {
			BIND_VIRTUAL_METHOD(T, _add_frame);
		}
		if constexpr (!std::is_same_v<decltype(&B::_tick),decltype(&T::_tick)>) {
			BIND_VIRTUAL_METHOD(T, _tick);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_ENGINE_PROFILER_HPP