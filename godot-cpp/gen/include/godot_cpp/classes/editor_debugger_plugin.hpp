/**************************************************************************/
/*  editor_debugger_plugin.hpp                                            */
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

#ifndef GODOT_CPP_EDITOR_DEBUGGER_PLUGIN_HPP
#define GODOT_CPP_EDITOR_DEBUGGER_PLUGIN_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class EditorDebuggerSession;
class String;

class EditorDebuggerPlugin : public RefCounted {
	GDEXTENSION_CLASS(EditorDebuggerPlugin, RefCounted)

public:

	Ref<EditorDebuggerSession> get_session(int32_t id);
	Array get_sessions();
	virtual void _setup_session(int32_t session_id);
	virtual bool _has_capture(const String &capture) const;
	virtual bool _capture(const String &message, const Array &data, int32_t session_id);
protected:
	template <class T, class B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_setup_session),decltype(&T::_setup_session)>) {
			BIND_VIRTUAL_METHOD(T, _setup_session);
		}
		if constexpr (!std::is_same_v<decltype(&B::_has_capture),decltype(&T::_has_capture)>) {
			BIND_VIRTUAL_METHOD(T, _has_capture);
		}
		if constexpr (!std::is_same_v<decltype(&B::_capture),decltype(&T::_capture)>) {
			BIND_VIRTUAL_METHOD(T, _capture);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_EDITOR_DEBUGGER_PLUGIN_HPP