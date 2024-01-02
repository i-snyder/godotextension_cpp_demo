/**************************************************************************/
/*  xr_node3d.cpp                                                         */
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

#include <godot_cpp/classes/xr_node3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/xr_pose.hpp>

namespace godot {

void XRNode3D::set_tracker(const StringName &tracker_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("set_tracker")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tracker_name);
}

StringName XRNode3D::get_tracker() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("get_tracker")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void XRNode3D::set_pose_name(const StringName &pose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("set_pose_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pose);
}

StringName XRNode3D::get_pose_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("get_pose_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

bool XRNode3D::get_is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("get_is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool XRNode3D::get_has_tracking_data() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("get_has_tracking_data")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<XRPose> XRNode3D::get_pose() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("get_pose")._native_ptr(), 2806551826);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<XRPose>());
	return Ref<XRPose>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<XRPose>(_gde_method_bind, _owner));
}

void XRNode3D::trigger_haptic_pulse(const String &action_name, double frequency, double amplitude, double duration_sec, double delay_sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(XRNode3D::get_class_static()._native_ptr(), StringName("trigger_haptic_pulse")._native_ptr(), 508576839);
	CHECK_METHOD_BIND(_gde_method_bind);
	double frequency_encoded;
	PtrToArg<double>::encode(frequency, &frequency_encoded);
	double amplitude_encoded;
	PtrToArg<double>::encode(amplitude, &amplitude_encoded);
	double duration_sec_encoded;
	PtrToArg<double>::encode(duration_sec, &duration_sec_encoded);
	double delay_sec_encoded;
	PtrToArg<double>::encode(delay_sec, &delay_sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &action_name, &frequency_encoded, &amplitude_encoded, &duration_sec_encoded, &delay_sec_encoded);
}


} // namespace godot 