/**************************************************************************/
/*  script_editor.cpp                                                     */
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

#include <godot_cpp/classes/script_editor.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

ScriptEditorBase *ScriptEditor::get_current_editor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("get_current_editor")._native_ptr(), 1906266726);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<ScriptEditorBase>(_gde_method_bind, _owner);
}

TypedArray<ScriptEditorBase> ScriptEditor::get_open_script_editors() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("get_open_script_editors")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<ScriptEditorBase>());
	return internal::_call_native_mb_ret<TypedArray<ScriptEditorBase>>(_gde_method_bind, _owner);
}

void ScriptEditor::register_syntax_highlighter(const Ref<EditorSyntaxHighlighter> &syntax_highlighter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("register_syntax_highlighter")._native_ptr(), 1092774468);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (syntax_highlighter != nullptr ? &syntax_highlighter->_owner : nullptr));
}

void ScriptEditor::unregister_syntax_highlighter(const Ref<EditorSyntaxHighlighter> &syntax_highlighter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("unregister_syntax_highlighter")._native_ptr(), 1092774468);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (syntax_highlighter != nullptr ? &syntax_highlighter->_owner : nullptr));
}

void ScriptEditor::goto_line(int32_t line_number) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("goto_line")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t line_number_encoded;
	PtrToArg<int64_t>::encode(line_number, &line_number_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &line_number_encoded);
}

Ref<Script> ScriptEditor::get_current_script() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("get_current_script")._native_ptr(), 2146468882);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Script>());
	return Ref<Script>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Script>(_gde_method_bind, _owner));
}

TypedArray<Script> ScriptEditor::get_open_scripts() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("get_open_scripts")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Script>());
	return internal::_call_native_mb_ret<TypedArray<Script>>(_gde_method_bind, _owner);
}

void ScriptEditor::open_script_create_dialog(const String &base_name, const String &base_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ScriptEditor::get_class_static()._native_ptr(), StringName("open_script_create_dialog")._native_ptr(), 3186203200);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &base_name, &base_path);
}


} // namespace godot 