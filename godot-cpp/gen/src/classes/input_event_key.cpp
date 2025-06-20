/**************************************************************************/
/*  input_event_key.cpp                                                   */
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

#include <godot_cpp/classes/input_event_key.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void InputEventKey::set_pressed(bool pressed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_pressed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pressed_encoded;
	PtrToArg<bool>::encode(pressed, &pressed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressed_encoded);
}

void InputEventKey::set_keycode(Key keycode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_keycode")._native_ptr(), 888074362);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &keycode);
}

Key InputEventKey::get_keycode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_keycode")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventKey::set_physical_keycode(Key physical_keycode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_physical_keycode")._native_ptr(), 888074362);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &physical_keycode);
}

Key InputEventKey::get_physical_keycode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_physical_keycode")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventKey::set_key_label(Key key_label) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_key_label")._native_ptr(), 888074362);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &key_label);
}

Key InputEventKey::get_key_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_key_label")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventKey::set_unicode(int64_t unicode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_unicode")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t unicode_encoded;
	PtrToArg<int64_t>::encode(unicode, &unicode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &unicode_encoded);
}

int64_t InputEventKey::get_unicode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_unicode")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void InputEventKey::set_echo(bool echo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("set_echo")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t echo_encoded;
	PtrToArg<bool>::encode(echo, &echo_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &echo_encoded);
}

Key InputEventKey::get_keycode_with_modifiers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_keycode_with_modifiers")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Key InputEventKey::get_physical_keycode_with_modifiers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_physical_keycode_with_modifiers")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Key InputEventKey::get_key_label_with_modifiers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("get_key_label_with_modifiers")._native_ptr(), 1585896689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String InputEventKey::as_text_keycode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("as_text_keycode")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String InputEventKey::as_text_physical_keycode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("as_text_physical_keycode")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String InputEventKey::as_text_key_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(InputEventKey::get_class_static()._native_ptr(), StringName("as_text_key_label")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}


} // namespace godot 