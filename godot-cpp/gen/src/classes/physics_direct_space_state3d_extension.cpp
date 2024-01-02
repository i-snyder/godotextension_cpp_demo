/**************************************************************************/
/*  physics_direct_space_state3d_extension.cpp                            */
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

#include <godot_cpp/classes/physics_direct_space_state3d_extension.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>

namespace godot {

bool PhysicsDirectSpaceState3DExtension::is_body_excluded_from_query(const RID &body) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsDirectSpaceState3DExtension::get_class_static()._native_ptr(), StringName("is_body_excluded_from_query")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &body);
}

bool PhysicsDirectSpaceState3DExtension::_intersect_ray(const Vector3 &from, const Vector3 &to, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, bool hit_from_inside, bool hit_back_faces, bool pick_ray, PhysicsServer3DExtensionRayResult *result) {
	return false;
}

int32_t PhysicsDirectSpaceState3DExtension::_intersect_point(const Vector3 &position, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer3DExtensionShapeResult *results, int32_t max_results) {
	return 0;
}

int32_t PhysicsDirectSpaceState3DExtension::_intersect_shape(const RID &shape_rid, const Transform3D &transform, const Vector3 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer3DExtensionShapeResult *result_count, int32_t max_results) {
	return 0;
}

bool PhysicsDirectSpaceState3DExtension::_cast_motion(const RID &shape_rid, const Transform3D &transform, const Vector3 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, float *closest_safe, float *closest_unsafe, PhysicsServer3DExtensionShapeRestInfo *info) {
	return false;
}

bool PhysicsDirectSpaceState3DExtension::_collide_shape(const RID &shape_rid, const Transform3D &transform, const Vector3 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, void *results, int32_t max_results, int32_t *result_count) {
	return false;
}

bool PhysicsDirectSpaceState3DExtension::_rest_info(const RID &shape_rid, const Transform3D &transform, const Vector3 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer3DExtensionShapeRestInfo *rest_info) {
	return false;
}

Vector3 PhysicsDirectSpaceState3DExtension::_get_closest_point_to_object_volume(const RID &object, const Vector3 &point) const {
	return Vector3();
}


} // namespace godot 