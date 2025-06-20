/**************************************************************************/
/*  tube_trail_mesh.cpp                                                   */
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

#include <godot_cpp/classes/tube_trail_mesh.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/curve.hpp>

namespace godot {

void TubeTrailMesh::set_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double TubeTrailMesh::get_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_radial_steps(int32_t radial_steps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_radial_steps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t radial_steps_encoded;
	PtrToArg<int64_t>::encode(radial_steps, &radial_steps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radial_steps_encoded);
}

int32_t TubeTrailMesh::get_radial_steps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_radial_steps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_sections(int32_t sections) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_sections")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t sections_encoded;
	PtrToArg<int64_t>::encode(sections, &sections_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sections_encoded);
}

int32_t TubeTrailMesh::get_sections() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_sections")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_section_length(double section_length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_section_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double section_length_encoded;
	PtrToArg<double>::encode(section_length, &section_length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &section_length_encoded);
}

double TubeTrailMesh::get_section_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_section_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_section_rings(int32_t section_rings) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_section_rings")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t section_rings_encoded;
	PtrToArg<int64_t>::encode(section_rings, &section_rings_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &section_rings_encoded);
}

int32_t TubeTrailMesh::get_section_rings() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_section_rings")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_cap_top(bool cap_top) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_cap_top")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t cap_top_encoded;
	PtrToArg<bool>::encode(cap_top, &cap_top_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cap_top_encoded);
}

bool TubeTrailMesh::is_cap_top() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("is_cap_top")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_cap_bottom(bool cap_bottom) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_cap_bottom")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t cap_bottom_encoded;
	PtrToArg<bool>::encode(cap_bottom, &cap_bottom_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cap_bottom_encoded);
}

bool TubeTrailMesh::is_cap_bottom() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("is_cap_bottom")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TubeTrailMesh::set_curve(const Ref<Curve> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("set_curve")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Curve> TubeTrailMesh::get_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TubeTrailMesh::get_class_static()._native_ptr(), StringName("get_curve")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}


} // namespace godot 