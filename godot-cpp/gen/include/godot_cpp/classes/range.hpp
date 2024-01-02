/**************************************************************************/
/*  range.hpp                                                             */
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

#ifndef GODOT_CPP_RANGE_HPP
#define GODOT_CPP_RANGE_HPP

#include <godot_cpp/classes/control.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Node;

class Range : public Control {
	GDEXTENSION_CLASS(Range, Control)

public:

	double get_value() const;
	double get_min() const;
	double get_max() const;
	double get_step() const;
	double get_page() const;
	double get_as_ratio() const;
	void set_value(double value);
	void set_value_no_signal(double value);
	void set_min(double minimum);
	void set_max(double maximum);
	void set_step(double step);
	void set_page(double pagesize);
	void set_as_ratio(double value);
	void set_use_rounded_values(bool enabled);
	bool is_using_rounded_values() const;
	void set_exp_ratio(bool enabled);
	bool is_ratio_exp() const;
	void set_allow_greater(bool allow);
	bool is_greater_allowed() const;
	void set_allow_lesser(bool allow);
	bool is_lesser_allowed() const;
	void share(Node *with);
	void unshare();
	virtual void _value_changed(double new_value);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_value_changed),decltype(&T::_value_changed)>) {
			BIND_VIRTUAL_METHOD(T, _value_changed);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_RANGE_HPP