/**************************************************************************/
/*  navigation_polygon.cpp                                                */
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

#include <godot_cpp/classes/navigation_polygon.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/navigation_mesh.hpp>

namespace godot {

void NavigationPolygon::set_vertices(const PackedVector2Array &vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_vertices")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vertices);
}

PackedVector2Array NavigationPolygon::get_vertices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_vertices")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void NavigationPolygon::add_polygon(const PackedInt32Array &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("add_polygon")._native_ptr(), 3614634198);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &polygon);
}

int32_t NavigationPolygon::get_polygon_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_polygon_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

PackedInt32Array NavigationPolygon::get_polygon(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_polygon")._native_ptr(), 3668444399);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &idx_encoded);
}

void NavigationPolygon::clear_polygons() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("clear_polygons")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<NavigationMesh> NavigationPolygon::get_navigation_mesh() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_navigation_mesh")._native_ptr(), 330232164);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<NavigationMesh>());
	return Ref<NavigationMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<NavigationMesh>(_gde_method_bind, _owner));
}

void NavigationPolygon::add_outline(const PackedVector2Array &outline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("add_outline")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &outline);
}

void NavigationPolygon::add_outline_at_index(const PackedVector2Array &outline, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("add_outline_at_index")._native_ptr(), 1569738947);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &outline, &index_encoded);
}

int32_t NavigationPolygon::get_outline_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_outline_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_outline(int32_t idx, const PackedVector2Array &outline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_outline")._native_ptr(), 1201971903);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &outline);
}

PackedVector2Array NavigationPolygon::get_outline(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_outline")._native_ptr(), 3946907486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &idx_encoded);
}

void NavigationPolygon::remove_outline(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("remove_outline")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

void NavigationPolygon::clear_outlines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("clear_outlines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void NavigationPolygon::make_polygons_from_outlines() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("make_polygons_from_outlines")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void NavigationPolygon::set_cell_size(double cell_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_cell_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double cell_size_encoded;
	PtrToArg<double>::encode(cell_size, &cell_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cell_size_encoded);
}

double NavigationPolygon::get_cell_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_cell_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_parsed_geometry_type(NavigationPolygon::ParsedGeometryType geometry_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_parsed_geometry_type")._native_ptr(), 2507971764);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &geometry_type);
}

NavigationPolygon::ParsedGeometryType NavigationPolygon::get_parsed_geometry_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_parsed_geometry_type")._native_ptr(), 1073219508);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationPolygon::ParsedGeometryType(0));
	return (NavigationPolygon::ParsedGeometryType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_parsed_collision_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_parsed_collision_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t NavigationPolygon::get_parsed_collision_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_parsed_collision_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_parsed_collision_mask_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_parsed_collision_mask_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool NavigationPolygon::get_parsed_collision_mask_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_parsed_collision_mask_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}

void NavigationPolygon::set_source_geometry_mode(NavigationPolygon::SourceGeometryMode geometry_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_source_geometry_mode")._native_ptr(), 4002316705);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &geometry_mode);
}

NavigationPolygon::SourceGeometryMode NavigationPolygon::get_source_geometry_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_source_geometry_mode")._native_ptr(), 459686762);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NavigationPolygon::SourceGeometryMode(0));
	return (NavigationPolygon::SourceGeometryMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_source_geometry_group_name(const StringName &group_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_source_geometry_group_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group_name);
}

StringName NavigationPolygon::get_source_geometry_group_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_source_geometry_group_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void NavigationPolygon::set_agent_radius(double agent_radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("set_agent_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double agent_radius_encoded;
	PtrToArg<double>::encode(agent_radius, &agent_radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &agent_radius_encoded);
}

double NavigationPolygon::get_agent_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("get_agent_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationPolygon::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationPolygon::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 