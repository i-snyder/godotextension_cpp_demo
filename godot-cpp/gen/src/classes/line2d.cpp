/**************************************************************************/
/*  line2d.cpp                                                            */
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

#include <godot_cpp/classes/line2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void Line2D::set_points(const PackedVector2Array &points) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_points")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points);
}

PackedVector2Array Line2D::get_points() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_points")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void Line2D::set_point_position(int32_t index, const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_point_position")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &position);
}

Vector2 Line2D::get_point_position(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_point_position")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &index_encoded);
}

int32_t Line2D::get_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::add_point(const Vector2 &position, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("add_point")._native_ptr(), 2654014372);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &index_encoded);
}

void Line2D::remove_point(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("remove_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void Line2D::clear_points() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("clear_points")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Line2D::set_closed(bool closed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_closed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t closed_encoded;
	PtrToArg<bool>::encode(closed, &closed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &closed_encoded);
}

bool Line2D::is_closed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("is_closed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Line2D::set_width(double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_width")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

double Line2D::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Line2D::set_curve(const Ref<Curve> &curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_curve")._native_ptr(), 270443179);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (curve != nullptr ? &curve->_owner : nullptr));
}

Ref<Curve> Line2D::get_curve() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_curve")._native_ptr(), 2460114913);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Curve>());
	return Ref<Curve>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Curve>(_gde_method_bind, _owner));
}

void Line2D::set_default_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_default_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color Line2D::get_default_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_default_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void Line2D::set_gradient(const Ref<Gradient> &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_gradient")._native_ptr(), 2756054477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (color != nullptr ? &color->_owner : nullptr));
}

Ref<Gradient> Line2D::get_gradient() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_gradient")._native_ptr(), 132272999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Gradient>());
	return Ref<Gradient>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Gradient>(_gde_method_bind, _owner));
}

void Line2D::set_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> Line2D::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void Line2D::set_texture_mode(Line2D::LineTextureMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_texture_mode")._native_ptr(), 1952559516);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Line2D::LineTextureMode Line2D::get_texture_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_texture_mode")._native_ptr(), 2341040722);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Line2D::LineTextureMode(0));
	return (Line2D::LineTextureMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::set_joint_mode(Line2D::LineJointMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_joint_mode")._native_ptr(), 604292979);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Line2D::LineJointMode Line2D::get_joint_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_joint_mode")._native_ptr(), 2546544037);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Line2D::LineJointMode(0));
	return (Line2D::LineJointMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::set_begin_cap_mode(Line2D::LineCapMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_begin_cap_mode")._native_ptr(), 1669024546);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Line2D::LineCapMode Line2D::get_begin_cap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_begin_cap_mode")._native_ptr(), 1107511441);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Line2D::LineCapMode(0));
	return (Line2D::LineCapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::set_end_cap_mode(Line2D::LineCapMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_end_cap_mode")._native_ptr(), 1669024546);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Line2D::LineCapMode Line2D::get_end_cap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_end_cap_mode")._native_ptr(), 1107511441);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Line2D::LineCapMode(0));
	return (Line2D::LineCapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::set_sharp_limit(double limit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_sharp_limit")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double limit_encoded;
	PtrToArg<double>::encode(limit, &limit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &limit_encoded);
}

double Line2D::get_sharp_limit() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_sharp_limit")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Line2D::set_round_precision(int32_t precision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_round_precision")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t precision_encoded;
	PtrToArg<int64_t>::encode(precision, &precision_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &precision_encoded);
}

int32_t Line2D::get_round_precision() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_round_precision")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Line2D::set_antialiased(bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("set_antialiased")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &antialiased_encoded);
}

bool Line2D::get_antialiased() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Line2D::get_class_static()._native_ptr(), StringName("get_antialiased")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 