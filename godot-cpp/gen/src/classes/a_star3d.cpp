/**************************************************************************/
/*  a_star3d.cpp                                                          */
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

#include <godot_cpp/classes/a_star3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int64_t AStar3D::get_available_point_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_available_point_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AStar3D::add_point(int64_t id, const Vector3 &position, double weight_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("add_point")._native_ptr(), 1038703438);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	double weight_scale_encoded;
	PtrToArg<double>::encode(weight_scale, &weight_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &position, &weight_scale_encoded);
}

Vector3 AStar3D::get_point_position(int64_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_position")._native_ptr(), 711720468);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &id_encoded);
}

void AStar3D::set_point_position(int64_t id, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("set_point_position")._native_ptr(), 1530502735);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &position);
}

double AStar3D::get_point_weight_scale(int64_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_weight_scale")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &id_encoded);
}

void AStar3D::set_point_weight_scale(int64_t id, double weight_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("set_point_weight_scale")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	double weight_scale_encoded;
	PtrToArg<double>::encode(weight_scale, &weight_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &weight_scale_encoded);
}

void AStar3D::remove_point(int64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("remove_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded);
}

bool AStar3D::has_point(int64_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("has_point")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded);
}

PackedInt64Array AStar3D::get_point_connections(int64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_connections")._native_ptr(), 2865087369);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &id_encoded);
}

PackedInt64Array AStar3D::get_point_ids() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_ids")._native_ptr(), 3851388692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner);
}

void AStar3D::set_point_disabled(int64_t id, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("set_point_disabled")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &disabled_encoded);
}

bool AStar3D::is_point_disabled(int64_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("is_point_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded);
}

void AStar3D::connect_points(int64_t id, int64_t to_id, bool bidirectional) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("connect_points")._native_ptr(), 3710494224);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t to_id_encoded;
	PtrToArg<int64_t>::encode(to_id, &to_id_encoded);
	int8_t bidirectional_encoded;
	PtrToArg<bool>::encode(bidirectional, &bidirectional_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &to_id_encoded, &bidirectional_encoded);
}

void AStar3D::disconnect_points(int64_t id, int64_t to_id, bool bidirectional) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("disconnect_points")._native_ptr(), 3710494224);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t to_id_encoded;
	PtrToArg<int64_t>::encode(to_id, &to_id_encoded);
	int8_t bidirectional_encoded;
	PtrToArg<bool>::encode(bidirectional, &bidirectional_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded, &to_id_encoded, &bidirectional_encoded);
}

bool AStar3D::are_points_connected(int64_t id, int64_t to_id, bool bidirectional) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("are_points_connected")._native_ptr(), 2288175859);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int64_t to_id_encoded;
	PtrToArg<int64_t>::encode(to_id, &to_id_encoded);
	int8_t bidirectional_encoded;
	PtrToArg<bool>::encode(bidirectional, &bidirectional_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &id_encoded, &to_id_encoded, &bidirectional_encoded);
}

int64_t AStar3D::get_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int64_t AStar3D::get_point_capacity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_capacity")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AStar3D::reserve_space(int64_t num_nodes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("reserve_space")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t num_nodes_encoded;
	PtrToArg<int64_t>::encode(num_nodes, &num_nodes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &num_nodes_encoded);
}

void AStar3D::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int64_t AStar3D::get_closest_point(const Vector3 &to_position, bool include_disabled) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_closest_point")._native_ptr(), 3241074317);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t include_disabled_encoded;
	PtrToArg<bool>::encode(include_disabled, &include_disabled_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &to_position, &include_disabled_encoded);
}

Vector3 AStar3D::get_closest_position_in_segment(const Vector3 &to_position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_closest_position_in_segment")._native_ptr(), 192990374);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &to_position);
}

PackedVector3Array AStar3D::get_point_path(int64_t from_id, int64_t to_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_point_path")._native_ptr(), 880819742);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	int64_t from_id_encoded;
	PtrToArg<int64_t>::encode(from_id, &from_id_encoded);
	int64_t to_id_encoded;
	PtrToArg<int64_t>::encode(to_id, &to_id_encoded);
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &from_id_encoded, &to_id_encoded);
}

PackedInt64Array AStar3D::get_id_path(int64_t from_id, int64_t to_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AStar3D::get_class_static()._native_ptr(), StringName("get_id_path")._native_ptr(), 3404614526);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	int64_t from_id_encoded;
	PtrToArg<int64_t>::encode(from_id, &from_id_encoded);
	int64_t to_id_encoded;
	PtrToArg<int64_t>::encode(to_id, &to_id_encoded);
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &from_id_encoded, &to_id_encoded);
}

double AStar3D::_estimate_cost(int64_t from_id, int64_t to_id) const {
	return 0.0;
}

double AStar3D::_compute_cost(int64_t from_id, int64_t to_id) const {
	return 0.0;
}


} // namespace godot 