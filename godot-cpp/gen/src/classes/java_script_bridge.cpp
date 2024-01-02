/**************************************************************************/
/*  java_script_bridge.cpp                                                */
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

#include <godot_cpp/classes/java_script_bridge.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>

namespace godot {

JavaScriptBridge *JavaScriptBridge::get_singleton() {
	static JavaScriptBridge *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(JavaScriptBridge::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<JavaScriptBridge *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &JavaScriptBridge::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

Variant JavaScriptBridge::eval(const String &code, bool use_global_execution_context) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("eval")._native_ptr(), 218087648);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int8_t use_global_execution_context_encoded;
	PtrToArg<bool>::encode(use_global_execution_context, &use_global_execution_context_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &code, &use_global_execution_context_encoded);
}

Ref<JavaScriptObject> JavaScriptBridge::get_interface(const String &interface) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("get_interface")._native_ptr(), 1355533281);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<JavaScriptObject>());
	return Ref<JavaScriptObject>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<JavaScriptObject>(_gde_method_bind, _owner, &interface));
}

Ref<JavaScriptObject> JavaScriptBridge::create_callback(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("create_callback")._native_ptr(), 422818440);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<JavaScriptObject>());
	return Ref<JavaScriptObject>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<JavaScriptObject>(_gde_method_bind, _owner, &callable));
}

Variant JavaScriptBridge::create_object_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("create_object")._native_ptr(), 3093893586);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return ret;
}

void JavaScriptBridge::download_buffer(const PackedByteArray &buffer, const String &name, const String &mime) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("download_buffer")._native_ptr(), 3352272093);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &buffer, &name, &mime);
}

bool JavaScriptBridge::pwa_needs_update() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("pwa_needs_update")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Error JavaScriptBridge::pwa_update() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("pwa_update")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void JavaScriptBridge::force_fs_sync() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(JavaScriptBridge::get_class_static()._native_ptr(), StringName("force_fs_sync")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 