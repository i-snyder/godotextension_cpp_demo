/**************************************************************************/
/*  gradient.cpp                                                          */
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

#include <godot_cpp/classes/gradient.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void Gradient::add_point(double offset, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("add_point")._native_ptr(), 3629403827);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded, &color);
}

void Gradient::remove_point(int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("remove_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded);
}

void Gradient::set_offset(int32_t point, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, &offset_encoded);
}

double Gradient::get_offset(int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 4025615559);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &point_encoded);
}

void Gradient::reverse() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("reverse")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Gradient::set_color(int32_t point, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, &color);
}

Color Gradient::get_color(int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_color")._native_ptr(), 2624840992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &point_encoded);
}

Color Gradient::sample(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("sample")._native_ptr(), 1250405064);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &offset_encoded);
}

int32_t Gradient::get_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Gradient::set_offsets(const PackedFloat32Array &offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_offsets")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offsets);
}

PackedFloat32Array Gradient::get_offsets() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_offsets")._native_ptr(), 675695659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner);
}

void Gradient::set_colors(const PackedColorArray &colors) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_colors")._native_ptr(), 3546319833);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &colors);
}

PackedColorArray Gradient::get_colors() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_colors")._native_ptr(), 1392750486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedColorArray());
	return internal::_call_native_mb_ret<PackedColorArray>(_gde_method_bind, _owner);
}

void Gradient::set_interpolation_mode(Gradient::InterpolationMode interpolation_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_interpolation_mode")._native_ptr(), 1971444490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interpolation_mode);
}

Gradient::InterpolationMode Gradient::get_interpolation_mode() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_interpolation_mode")._native_ptr(), 3674172981);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Gradient::InterpolationMode(0));
	return (Gradient::InterpolationMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Gradient::set_interpolation_color_space(Gradient::ColorSpace interpolation_color_space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("set_interpolation_color_space")._native_ptr(), 3685995981);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interpolation_color_space);
}

Gradient::ColorSpace Gradient::get_interpolation_color_space() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Gradient::get_class_static()._native_ptr(), StringName("get_interpolation_color_space")._native_ptr(), 1538296000);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Gradient::ColorSpace(0));
	return (Gradient::ColorSpace)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 