/**************************************************************************/
/*  skeleton_modification2d_look_at.cpp                                   */
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

#include <godot_cpp/classes/skeleton_modification2d_look_at.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void SkeletonModification2DLookAt::set_bone2d_node(const NodePath &bone2d_nodepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_bone2d_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone2d_nodepath);
}

NodePath SkeletonModification2DLookAt::get_bone2d_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_bone2d_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_bone_index(int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_bone_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bone_idx_encoded);
}

int32_t SkeletonModification2DLookAt::get_bone_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_bone_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_target_node(const NodePath &target_nodepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_target_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &target_nodepath);
}

NodePath SkeletonModification2DLookAt::get_target_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_target_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_additional_rotation(double rotation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_additional_rotation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double rotation_encoded;
	PtrToArg<double>::encode(rotation, &rotation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rotation_encoded);
}

double SkeletonModification2DLookAt::get_additional_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_additional_rotation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_enable_constraint(bool enable_constraint) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_enable_constraint")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_constraint_encoded;
	PtrToArg<bool>::encode(enable_constraint, &enable_constraint_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_constraint_encoded);
}

bool SkeletonModification2DLookAt::get_enable_constraint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_enable_constraint")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_constraint_angle_min(double angle_min) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_constraint_angle_min")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double angle_min_encoded;
	PtrToArg<double>::encode(angle_min, &angle_min_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &angle_min_encoded);
}

double SkeletonModification2DLookAt::get_constraint_angle_min() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_constraint_angle_min")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_constraint_angle_max(double angle_max) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_constraint_angle_max")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double angle_max_encoded;
	PtrToArg<double>::encode(angle_max, &angle_max_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &angle_max_encoded);
}

double SkeletonModification2DLookAt::get_constraint_angle_max() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_constraint_angle_max")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DLookAt::set_constraint_angle_invert(bool invert) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("set_constraint_angle_invert")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &invert_encoded);
}

bool SkeletonModification2DLookAt::get_constraint_angle_invert() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DLookAt::get_class_static()._native_ptr(), StringName("get_constraint_angle_invert")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 