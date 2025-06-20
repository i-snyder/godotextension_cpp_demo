/**************************************************************************/
/*  tile_data.cpp                                                         */
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

#include <godot_cpp/classes/tile_data.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

void TileData::set_flip_h(bool flip_h) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_flip_h")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_h_encoded;
	PtrToArg<bool>::encode(flip_h, &flip_h_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_h_encoded);
}

bool TileData::get_flip_h() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_flip_h")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TileData::set_flip_v(bool flip_v) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_flip_v")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_v_encoded;
	PtrToArg<bool>::encode(flip_v, &flip_v_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_v_encoded);
}

bool TileData::get_flip_v() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_flip_v")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TileData::set_transpose(bool transpose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_transpose")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t transpose_encoded;
	PtrToArg<bool>::encode(transpose, &transpose_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &transpose_encoded);
}

bool TileData::get_transpose() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_transpose")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TileData::set_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

Ref<Material> TileData::get_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}

void TileData::set_texture_origin(const Vector2i &texture_origin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_texture_origin")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture_origin);
}

Vector2i TileData::get_texture_origin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_texture_origin")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void TileData::set_modulate(const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &modulate);
}

Color TileData::get_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void TileData::set_z_index(int32_t z_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_z_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t z_index_encoded;
	PtrToArg<int64_t>::encode(z_index, &z_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &z_index_encoded);
}

int32_t TileData::get_z_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_z_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileData::set_y_sort_origin(int32_t y_sort_origin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_y_sort_origin")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t y_sort_origin_encoded;
	PtrToArg<int64_t>::encode(y_sort_origin, &y_sort_origin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &y_sort_origin_encoded);
}

int32_t TileData::get_y_sort_origin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_y_sort_origin")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileData::set_occluder(int32_t layer_id, const Ref<OccluderPolygon2D> &occluder_polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_occluder")._native_ptr(), 914399637);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, (occluder_polygon != nullptr ? &occluder_polygon->_owner : nullptr));
}

Ref<OccluderPolygon2D> TileData::get_occluder(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_occluder")._native_ptr(), 2458574231);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<OccluderPolygon2D>());
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return Ref<OccluderPolygon2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<OccluderPolygon2D>(_gde_method_bind, _owner, &layer_id_encoded));
}

void TileData::set_constant_linear_velocity(int32_t layer_id, const Vector2 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_constant_linear_velocity")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &velocity);
}

Vector2 TileData::get_constant_linear_velocity(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_constant_linear_velocity")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &layer_id_encoded);
}

void TileData::set_constant_angular_velocity(int32_t layer_id, double velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_constant_angular_velocity")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	double velocity_encoded;
	PtrToArg<double>::encode(velocity, &velocity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &velocity_encoded);
}

double TileData::get_constant_angular_velocity(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_constant_angular_velocity")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &layer_id_encoded);
}

void TileData::set_collision_polygons_count(int32_t layer_id, int32_t polygons_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_collision_polygons_count")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygons_count_encoded;
	PtrToArg<int64_t>::encode(polygons_count, &polygons_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &polygons_count_encoded);
}

int32_t TileData::get_collision_polygons_count(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_collision_polygons_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &layer_id_encoded);
}

void TileData::add_collision_polygon(int32_t layer_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("add_collision_polygon")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded);
}

void TileData::remove_collision_polygon(int32_t layer_id, int32_t polygon_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("remove_collision_polygon")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded);
}

void TileData::set_collision_polygon_points(int32_t layer_id, int32_t polygon_index, const PackedVector2Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_collision_polygon_points")._native_ptr(), 3230546541);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded, &polygon);
}

PackedVector2Array TileData::get_collision_polygon_points(int32_t layer_id, int32_t polygon_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_collision_polygon_points")._native_ptr(), 103942801);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded);
}

void TileData::set_collision_polygon_one_way(int32_t layer_id, int32_t polygon_index, bool one_way) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_collision_polygon_one_way")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	int8_t one_way_encoded;
	PtrToArg<bool>::encode(one_way, &one_way_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded, &one_way_encoded);
}

bool TileData::is_collision_polygon_one_way(int32_t layer_id, int32_t polygon_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("is_collision_polygon_one_way")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded);
}

void TileData::set_collision_polygon_one_way_margin(int32_t layer_id, int32_t polygon_index, double one_way_margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_collision_polygon_one_way_margin")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	double one_way_margin_encoded;
	PtrToArg<double>::encode(one_way_margin, &one_way_margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded, &one_way_margin_encoded);
}

double TileData::get_collision_polygon_one_way_margin(int32_t layer_id, int32_t polygon_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_collision_polygon_one_way_margin")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	int64_t polygon_index_encoded;
	PtrToArg<int64_t>::encode(polygon_index, &polygon_index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &layer_id_encoded, &polygon_index_encoded);
}

void TileData::set_terrain_set(int32_t terrain_set) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_terrain_set")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_set_encoded;
	PtrToArg<int64_t>::encode(terrain_set, &terrain_set_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_set_encoded);
}

int32_t TileData::get_terrain_set() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_terrain_set")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileData::set_terrain(int32_t terrain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_terrain")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_encoded;
	PtrToArg<int64_t>::encode(terrain, &terrain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &terrain_encoded);
}

int32_t TileData::get_terrain() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_terrain")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TileData::set_terrain_peering_bit(TileSet::CellNeighbor peering_bit, int32_t terrain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_terrain_peering_bit")._native_ptr(), 1084452308);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t terrain_encoded;
	PtrToArg<int64_t>::encode(terrain, &terrain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &peering_bit, &terrain_encoded);
}

int32_t TileData::get_terrain_peering_bit(TileSet::CellNeighbor peering_bit) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_terrain_peering_bit")._native_ptr(), 3831796792);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &peering_bit);
}

void TileData::set_navigation_polygon(int32_t layer_id, const Ref<NavigationPolygon> &navigation_polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_navigation_polygon")._native_ptr(), 2224691167);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, (navigation_polygon != nullptr ? &navigation_polygon->_owner : nullptr));
}

Ref<NavigationPolygon> TileData::get_navigation_polygon(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_navigation_polygon")._native_ptr(), 3991786031);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<NavigationPolygon>());
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return Ref<NavigationPolygon>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<NavigationPolygon>(_gde_method_bind, _owner, &layer_id_encoded));
}

void TileData::set_probability(double probability) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_probability")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double probability_encoded;
	PtrToArg<double>::encode(probability, &probability_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probability_encoded);
}

double TileData::get_probability() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_probability")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TileData::set_custom_data(const String &layer_name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_custom_data")._native_ptr(), 402577236);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_name, &value);
}

Variant TileData::get_custom_data(const String &layer_name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_custom_data")._native_ptr(), 1868160156);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &layer_name);
}

void TileData::set_custom_data_by_layer_id(int32_t layer_id, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("set_custom_data_by_layer_id")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_id_encoded, &value);
}

Variant TileData::get_custom_data_by_layer_id(int32_t layer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TileData::get_class_static()._native_ptr(), StringName("get_custom_data_by_layer_id")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t layer_id_encoded;
	PtrToArg<int64_t>::encode(layer_id, &layer_id_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &layer_id_encoded);
}


} // namespace godot 