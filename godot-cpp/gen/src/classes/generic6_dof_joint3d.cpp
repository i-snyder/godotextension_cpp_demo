/**************************************************************************/
/*  generic6_dof_joint3d.cpp                                              */
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

#include <godot_cpp/classes/generic6_dof_joint3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void Generic6DOFJoint3D::set_param_x(Generic6DOFJoint3D::Param param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_param_x")._native_ptr(), 2018184242);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double Generic6DOFJoint3D::get_param_x(Generic6DOFJoint3D::Param param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_param_x")._native_ptr(), 2599835054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void Generic6DOFJoint3D::set_param_y(Generic6DOFJoint3D::Param param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_param_y")._native_ptr(), 2018184242);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double Generic6DOFJoint3D::get_param_y(Generic6DOFJoint3D::Param param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_param_y")._native_ptr(), 2599835054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void Generic6DOFJoint3D::set_param_z(Generic6DOFJoint3D::Param param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_param_z")._native_ptr(), 2018184242);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &param, &value_encoded);
}

double Generic6DOFJoint3D::get_param_z(Generic6DOFJoint3D::Param param) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_param_z")._native_ptr(), 2599835054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &param);
}

void Generic6DOFJoint3D::set_flag_x(Generic6DOFJoint3D::Flag flag, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_flag_x")._native_ptr(), 2451594564);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flag, &value_encoded);
}

bool Generic6DOFJoint3D::get_flag_x(Generic6DOFJoint3D::Flag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_flag_x")._native_ptr(), 2122427807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &flag);
}

void Generic6DOFJoint3D::set_flag_y(Generic6DOFJoint3D::Flag flag, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_flag_y")._native_ptr(), 2451594564);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flag, &value_encoded);
}

bool Generic6DOFJoint3D::get_flag_y(Generic6DOFJoint3D::Flag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_flag_y")._native_ptr(), 2122427807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &flag);
}

void Generic6DOFJoint3D::set_flag_z(Generic6DOFJoint3D::Flag flag, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("set_flag_z")._native_ptr(), 2451594564);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flag, &value_encoded);
}

bool Generic6DOFJoint3D::get_flag_z(Generic6DOFJoint3D::Flag flag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Generic6DOFJoint3D::get_class_static()._native_ptr(), StringName("get_flag_z")._native_ptr(), 2122427807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &flag);
}


} // namespace godot 