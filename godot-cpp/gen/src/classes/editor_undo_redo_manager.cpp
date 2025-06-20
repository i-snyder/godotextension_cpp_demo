/**************************************************************************/
/*  editor_undo_redo_manager.cpp                                          */
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

#include <godot_cpp/classes/editor_undo_redo_manager.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

void EditorUndoRedoManager::create_action(const String &name, UndoRedo::MergeMode merge_mode, Object *custom_context, bool backward_undo_ops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("create_action")._native_ptr(), 2107025470);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t backward_undo_ops_encoded;
	PtrToArg<bool>::encode(backward_undo_ops, &backward_undo_ops_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &merge_mode, (custom_context != nullptr ? &custom_context->_owner : nullptr), &backward_undo_ops_encoded);
}

void EditorUndoRedoManager::commit_action(bool execute) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("commit_action")._native_ptr(), 3216645846);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t execute_encoded;
	PtrToArg<bool>::encode(execute, &execute_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &execute_encoded);
}

bool EditorUndoRedoManager::is_committing_action() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("is_committing_action")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void EditorUndoRedoManager::add_do_method_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_do_method")._native_ptr(), 1517810467);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
}

void EditorUndoRedoManager::add_undo_method_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_undo_method")._native_ptr(), 1517810467);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
}

void EditorUndoRedoManager::add_do_property(Object *object, const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_do_property")._native_ptr(), 1017172818);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &value);
}

void EditorUndoRedoManager::add_undo_property(Object *object, const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_undo_property")._native_ptr(), 1017172818);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &value);
}

void EditorUndoRedoManager::add_do_reference(Object *object) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_do_reference")._native_ptr(), 3975164845);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr));
}

void EditorUndoRedoManager::add_undo_reference(Object *object) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("add_undo_reference")._native_ptr(), 3975164845);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr));
}

int32_t EditorUndoRedoManager::get_object_history_id(Object *object) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("get_object_history_id")._native_ptr(), 1107568780);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr));
}

UndoRedo *EditorUndoRedoManager::get_history_undo_redo(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorUndoRedoManager::get_class_static()._native_ptr(), StringName("get_history_undo_redo")._native_ptr(), 2417974513);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret_obj<UndoRedo>(_gde_method_bind, _owner, &id_encoded);
}


} // namespace godot 