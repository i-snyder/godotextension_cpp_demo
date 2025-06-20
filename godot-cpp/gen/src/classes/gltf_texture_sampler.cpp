/**************************************************************************/
/*  gltf_texture_sampler.cpp                                              */
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

#include <godot_cpp/classes/gltf_texture_sampler.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int32_t GLTFTextureSampler::get_mag_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("get_mag_filter")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFTextureSampler::set_mag_filter(int32_t filter_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("set_mag_filter")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t filter_mode_encoded;
	PtrToArg<int64_t>::encode(filter_mode, &filter_mode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter_mode_encoded);
}

int32_t GLTFTextureSampler::get_min_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("get_min_filter")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFTextureSampler::set_min_filter(int32_t filter_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("set_min_filter")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t filter_mode_encoded;
	PtrToArg<int64_t>::encode(filter_mode, &filter_mode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter_mode_encoded);
}

int32_t GLTFTextureSampler::get_wrap_s() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("get_wrap_s")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFTextureSampler::set_wrap_s(int32_t wrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("set_wrap_s")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t wrap_mode_encoded;
	PtrToArg<int64_t>::encode(wrap_mode, &wrap_mode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &wrap_mode_encoded);
}

int32_t GLTFTextureSampler::get_wrap_t() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("get_wrap_t")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFTextureSampler::set_wrap_t(int32_t wrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFTextureSampler::get_class_static()._native_ptr(), StringName("set_wrap_t")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t wrap_mode_encoded;
	PtrToArg<int64_t>::encode(wrap_mode, &wrap_mode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &wrap_mode_encoded);
}


} // namespace godot 