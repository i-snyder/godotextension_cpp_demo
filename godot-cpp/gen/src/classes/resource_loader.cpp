/**************************************************************************/
/*  resource_loader.cpp                                                   */
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

#include <godot_cpp/classes/resource_loader.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>

namespace godot {

ResourceLoader *ResourceLoader::get_singleton() {
	static ResourceLoader *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(ResourceLoader::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<ResourceLoader *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &ResourceLoader::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

Error ResourceLoader::load_threaded_request(const String &path, const String &type_hint, bool use_sub_threads, ResourceLoader::CacheMode cache_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("load_threaded_request")._native_ptr(), 3614384323);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t use_sub_threads_encoded;
	PtrToArg<bool>::encode(use_sub_threads, &use_sub_threads_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &type_hint, &use_sub_threads_encoded, &cache_mode);
}

ResourceLoader::ThreadLoadStatus ResourceLoader::load_threaded_get_status(const String &path, const Array &progress) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("load_threaded_get_status")._native_ptr(), 4137685479);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ResourceLoader::ThreadLoadStatus(0));
	return (ResourceLoader::ThreadLoadStatus)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &progress);
}

Ref<Resource> ResourceLoader::load_threaded_get(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("load_threaded_get")._native_ptr(), 1748875256);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Resource>());
	return Ref<Resource>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Resource>(_gde_method_bind, _owner, &path));
}

Ref<Resource> ResourceLoader::load(const String &path, const String &type_hint, ResourceLoader::CacheMode cache_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("load")._native_ptr(), 3358495409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Resource>());
	return Ref<Resource>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Resource>(_gde_method_bind, _owner, &path, &type_hint, &cache_mode));
}

PackedStringArray ResourceLoader::get_recognized_extensions_for_type(const String &type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("get_recognized_extensions_for_type")._native_ptr(), 3538744774);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &type);
}

void ResourceLoader::add_resource_format_loader(const Ref<ResourceFormatLoader> &format_loader, bool at_front) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("add_resource_format_loader")._native_ptr(), 2896595483);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t at_front_encoded;
	PtrToArg<bool>::encode(at_front, &at_front_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (format_loader != nullptr ? &format_loader->_owner : nullptr), &at_front_encoded);
}

void ResourceLoader::remove_resource_format_loader(const Ref<ResourceFormatLoader> &format_loader) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("remove_resource_format_loader")._native_ptr(), 405397102);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (format_loader != nullptr ? &format_loader->_owner : nullptr));
}

void ResourceLoader::set_abort_on_missing_resources(bool abort) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("set_abort_on_missing_resources")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t abort_encoded;
	PtrToArg<bool>::encode(abort, &abort_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &abort_encoded);
}

PackedStringArray ResourceLoader::get_dependencies(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("get_dependencies")._native_ptr(), 3538744774);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &path);
}

bool ResourceLoader::has_cached(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("has_cached")._native_ptr(), 2323990056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &path);
}

bool ResourceLoader::exists(const String &path, const String &type_hint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("exists")._native_ptr(), 4185558881);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &path, &type_hint);
}

int64_t ResourceLoader::get_resource_uid(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ResourceLoader::get_class_static()._native_ptr(), StringName("get_resource_uid")._native_ptr(), 1597066294);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}


} // namespace godot 