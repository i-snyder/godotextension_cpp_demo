/**************************************************************************/
/*  link_button.cpp                                                       */
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

#include <godot_cpp/classes/link_button.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void LinkButton::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String LinkButton::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LinkButton::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection LinkButton::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LinkButton::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String LinkButton::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LinkButton::set_uri(const String &uri) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_uri")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &uri);
}

String LinkButton::get_uri() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_uri")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void LinkButton::set_underline_mode(LinkButton::UnderlineMode underline_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_underline_mode")._native_ptr(), 4032947085);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &underline_mode);
}

LinkButton::UnderlineMode LinkButton::get_underline_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_underline_mode")._native_ptr(), 568343738);
	CHECK_METHOD_BIND_RET(_gde_method_bind, LinkButton::UnderlineMode(0));
	return (LinkButton::UnderlineMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LinkButton::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser LinkButton::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LinkButton::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array LinkButton::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(LinkButton::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}


} // namespace godot 