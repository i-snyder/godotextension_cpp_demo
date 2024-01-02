/**************************************************************************/
/*  editor_inspector_plugin.cpp                                           */
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

#include <godot_cpp/classes/editor_inspector_plugin.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

void EditorInspectorPlugin::add_custom_control(Control *control) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInspectorPlugin::get_class_static()._native_ptr(), StringName("add_custom_control")._native_ptr(), 1496901182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (control != nullptr ? &control->_owner : nullptr));
}

void EditorInspectorPlugin::add_property_editor(const String &property, Control *editor, bool add_to_end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInspectorPlugin::get_class_static()._native_ptr(), StringName("add_property_editor")._native_ptr(), 3406284123);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t add_to_end_encoded;
	PtrToArg<bool>::encode(add_to_end, &add_to_end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, (editor != nullptr ? &editor->_owner : nullptr), &add_to_end_encoded);
}

void EditorInspectorPlugin::add_property_editor_for_multiple_properties(const String &label, const PackedStringArray &properties, Control *editor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorInspectorPlugin::get_class_static()._native_ptr(), StringName("add_property_editor_for_multiple_properties")._native_ptr(), 788598683);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &properties, (editor != nullptr ? &editor->_owner : nullptr));
}

bool EditorInspectorPlugin::_can_handle(Object *object) const {
	return false;
}

void EditorInspectorPlugin::_parse_begin(Object *object) {}

void EditorInspectorPlugin::_parse_category(Object *object, const String &category) {}

void EditorInspectorPlugin::_parse_group(Object *object, const String &group) {}

bool EditorInspectorPlugin::_parse_property(Object *object, Variant::Type type, const String &name, PropertyHint hint_type, const String &hint_string, BitField<PropertyUsageFlags> usage_flags, bool wide) {
	return false;
}

void EditorInspectorPlugin::_parse_end(Object *object) {}


} // namespace godot 