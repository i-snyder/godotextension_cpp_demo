/**************************************************************************/
/*  gltf_mesh.cpp                                                         */
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

#include <godot_cpp/classes/gltf_mesh.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/material.hpp>

namespace godot {

Ref<ImporterMesh> GLTFMesh::get_mesh() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 3754628756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ImporterMesh>());
	return Ref<ImporterMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ImporterMesh>(_gde_method_bind, _owner));
}

void GLTFMesh::set_mesh(const Ref<ImporterMesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("set_mesh")._native_ptr(), 2255166972);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

PackedFloat32Array GLTFMesh::get_blend_weights() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("get_blend_weights")._native_ptr(), 2445143706);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner);
}

void GLTFMesh::set_blend_weights(const PackedFloat32Array &blend_weights) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("set_blend_weights")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &blend_weights);
}

TypedArray<Material> GLTFMesh::get_instance_materials() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("get_instance_materials")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Material>());
	return internal::_call_native_mb_ret<TypedArray<Material>>(_gde_method_bind, _owner);
}

void GLTFMesh::set_instance_materials(const TypedArray<Material> &instance_materials) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GLTFMesh::get_class_static()._native_ptr(), StringName("set_instance_materials")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance_materials);
}


} // namespace godot 