/**************************************************************************/
/*  physics_body3d.cpp                                                    */
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

#include <godot_cpp/classes/physics_body3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

Ref<KinematicCollision3D> PhysicsBody3D::move_and_collide(const Vector3 &motion, bool test_only, double safe_margin, bool recovery_as_collision, int32_t max_collisions) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("move_and_collide")._native_ptr(), 3208792678);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<KinematicCollision3D>());
	int8_t test_only_encoded;
	PtrToArg<bool>::encode(test_only, &test_only_encoded);
	double safe_margin_encoded;
	PtrToArg<double>::encode(safe_margin, &safe_margin_encoded);
	int8_t recovery_as_collision_encoded;
	PtrToArg<bool>::encode(recovery_as_collision, &recovery_as_collision_encoded);
	int64_t max_collisions_encoded;
	PtrToArg<int64_t>::encode(max_collisions, &max_collisions_encoded);
	return Ref<KinematicCollision3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<KinematicCollision3D>(_gde_method_bind, _owner, &motion, &test_only_encoded, &safe_margin_encoded, &recovery_as_collision_encoded, &max_collisions_encoded));
}

bool PhysicsBody3D::test_move(const Transform3D &from, const Vector3 &motion, const Ref<KinematicCollision3D> &collision, double safe_margin, bool recovery_as_collision, int32_t max_collisions) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("test_move")._native_ptr(), 2481691619);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double safe_margin_encoded;
	PtrToArg<double>::encode(safe_margin, &safe_margin_encoded);
	int8_t recovery_as_collision_encoded;
	PtrToArg<bool>::encode(recovery_as_collision, &recovery_as_collision_encoded);
	int64_t max_collisions_encoded;
	PtrToArg<int64_t>::encode(max_collisions, &max_collisions_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from, &motion, (collision != nullptr ? &collision->_owner : nullptr), &safe_margin_encoded, &recovery_as_collision_encoded, &max_collisions_encoded);
}

void PhysicsBody3D::set_axis_lock(PhysicsServer3D::BodyAxis axis, bool lock) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("set_axis_lock")._native_ptr(), 1787895195);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t lock_encoded;
	PtrToArg<bool>::encode(lock, &lock_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &axis, &lock_encoded);
}

bool PhysicsBody3D::get_axis_lock(PhysicsServer3D::BodyAxis axis) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("get_axis_lock")._native_ptr(), 2264617709);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &axis);
}

TypedArray<PhysicsBody3D> PhysicsBody3D::get_collision_exceptions() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("get_collision_exceptions")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PhysicsBody3D>());
	return internal::_call_native_mb_ret<TypedArray<PhysicsBody3D>>(_gde_method_bind, _owner);
}

void PhysicsBody3D::add_collision_exception_with(Node *body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("add_collision_exception_with")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (body != nullptr ? &body->_owner : nullptr));
}

void PhysicsBody3D::remove_collision_exception_with(Node *body) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsBody3D::get_class_static()._native_ptr(), StringName("remove_collision_exception_with")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (body != nullptr ? &body->_owner : nullptr));
}


} // namespace godot 