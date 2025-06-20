/**************************************************************************/
/*  skeleton_modification2d_jiggle.cpp                                    */
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

#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void SkeletonModification2DJiggle::set_target_node(const NodePath &target_nodepath) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_target_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &target_nodepath);
}

NodePath SkeletonModification2DJiggle::get_target_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_target_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_jiggle_data_chain_length(int32_t length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_data_chain_length")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &length_encoded);
}

int32_t SkeletonModification2DJiggle::get_jiggle_data_chain_length() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_data_chain_length")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_stiffness(double stiffness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_stiffness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double stiffness_encoded;
	PtrToArg<double>::encode(stiffness, &stiffness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &stiffness_encoded);
}

double SkeletonModification2DJiggle::get_stiffness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_stiffness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_mass(double mass) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_mass")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double mass_encoded;
	PtrToArg<double>::encode(mass, &mass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mass_encoded);
}

double SkeletonModification2DJiggle::get_mass() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_mass")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_damping(double damping) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_damping")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double damping_encoded;
	PtrToArg<double>::encode(damping, &damping_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &damping_encoded);
}

double SkeletonModification2DJiggle::get_damping() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_damping")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_use_gravity(bool use_gravity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_use_gravity")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_gravity_encoded;
	PtrToArg<bool>::encode(use_gravity, &use_gravity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_gravity_encoded);
}

bool SkeletonModification2DJiggle::get_use_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_use_gravity")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_gravity(const Vector2 &gravity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_gravity")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &gravity);
}

Vector2 SkeletonModification2DJiggle::get_gravity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_gravity")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_use_colliders(bool use_colliders) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_use_colliders")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_colliders_encoded;
	PtrToArg<bool>::encode(use_colliders, &use_colliders_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_colliders_encoded);
}

bool SkeletonModification2DJiggle::get_use_colliders() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_use_colliders")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_collision_mask(int32_t collision_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t collision_mask_encoded;
	PtrToArg<int64_t>::encode(collision_mask, &collision_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &collision_mask_encoded);
}

int32_t SkeletonModification2DJiggle::get_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SkeletonModification2DJiggle::set_jiggle_joint_bone2d_node(int32_t joint_idx, const NodePath &bone2d_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_bone2d_node")._native_ptr(), 2761262315);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &bone2d_node);
}

NodePath SkeletonModification2DJiggle::get_jiggle_joint_bone2d_node(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_bone2d_node")._native_ptr(), 408788394);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_bone_index(int32_t joint_idx, int32_t bone_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_bone_index")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	int64_t bone_idx_encoded;
	PtrToArg<int64_t>::encode(bone_idx, &bone_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &bone_idx_encoded);
}

int32_t SkeletonModification2DJiggle::get_jiggle_joint_bone_index(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_bone_index")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_override(int32_t joint_idx, bool override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_override")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	int8_t override_encoded;
	PtrToArg<bool>::encode(override, &override_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &override_encoded);
}

bool SkeletonModification2DJiggle::get_jiggle_joint_override(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_override")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_stiffness(int32_t joint_idx, double stiffness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_stiffness")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	double stiffness_encoded;
	PtrToArg<double>::encode(stiffness, &stiffness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &stiffness_encoded);
}

double SkeletonModification2DJiggle::get_jiggle_joint_stiffness(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_stiffness")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_mass(int32_t joint_idx, double mass) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_mass")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	double mass_encoded;
	PtrToArg<double>::encode(mass, &mass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &mass_encoded);
}

double SkeletonModification2DJiggle::get_jiggle_joint_mass(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_mass")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_damping(int32_t joint_idx, double damping) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_damping")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	double damping_encoded;
	PtrToArg<double>::encode(damping, &damping_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &damping_encoded);
}

double SkeletonModification2DJiggle::get_jiggle_joint_damping(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_damping")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_use_gravity(int32_t joint_idx, bool use_gravity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_use_gravity")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	int8_t use_gravity_encoded;
	PtrToArg<bool>::encode(use_gravity, &use_gravity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &use_gravity_encoded);
}

bool SkeletonModification2DJiggle::get_jiggle_joint_use_gravity(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_use_gravity")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &joint_idx_encoded);
}

void SkeletonModification2DJiggle::set_jiggle_joint_gravity(int32_t joint_idx, const Vector2 &gravity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("set_jiggle_joint_gravity")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &joint_idx_encoded, &gravity);
}

Vector2 SkeletonModification2DJiggle::get_jiggle_joint_gravity(int32_t joint_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2DJiggle::get_class_static()._native_ptr(), StringName("get_jiggle_joint_gravity")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t joint_idx_encoded;
	PtrToArg<int64_t>::encode(joint_idx, &joint_idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &joint_idx_encoded);
}


} // namespace godot 