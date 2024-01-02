/**************************************************************************/
/*  gltf_buffer_view.cpp                                                  */
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

#include <godot_cpp/classes/gltf_buffer_view.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int32_t GLTFBufferView::get_buffer() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("get_buffer")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFBufferView::set_buffer(int32_t buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("set_buffer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t buffer_encoded;
	PtrToArg<int64_t>::encode(buffer, &buffer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &buffer_encoded);
}

int32_t GLTFBufferView::get_byte_offset() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("get_byte_offset")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFBufferView::set_byte_offset(int32_t byte_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("set_byte_offset")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t byte_offset_encoded;
	PtrToArg<int64_t>::encode(byte_offset, &byte_offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &byte_offset_encoded);
}

int32_t GLTFBufferView::get_byte_length() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("get_byte_length")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFBufferView::set_byte_length(int32_t byte_length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("set_byte_length")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t byte_length_encoded;
	PtrToArg<int64_t>::encode(byte_length, &byte_length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &byte_length_encoded);
}

int32_t GLTFBufferView::get_byte_stride() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("get_byte_stride")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GLTFBufferView::set_byte_stride(int32_t byte_stride) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("set_byte_stride")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t byte_stride_encoded;
	PtrToArg<int64_t>::encode(byte_stride, &byte_stride_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &byte_stride_encoded);
}

bool GLTFBufferView::get_indices() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("get_indices")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GLTFBufferView::set_indices(bool indices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFBufferView::get_class_static()._native_ptr(), StringName("set_indices")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t indices_encoded;
	PtrToArg<bool>::encode(indices, &indices_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &indices_encoded);
}


} // namespace godot 