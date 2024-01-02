/**************************************************************************/
/*  web_xr_interface.cpp                                                  */
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

#include <godot_cpp/classes/web_xr_interface.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/xr_positional_tracker.hpp>

namespace godot {

void WebXRInterface::is_session_supported(const String &session_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("is_session_supported")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &session_mode);
}

void WebXRInterface::set_session_mode(const String &session_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("set_session_mode")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &session_mode);
}

String WebXRInterface::get_session_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_session_mode")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void WebXRInterface::set_required_features(const String &required_features) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("set_required_features")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &required_features);
}

String WebXRInterface::get_required_features() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_required_features")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void WebXRInterface::set_optional_features(const String &optional_features) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("set_optional_features")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &optional_features);
}

String WebXRInterface::get_optional_features() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_optional_features")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String WebXRInterface::get_reference_space_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_reference_space_type")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void WebXRInterface::set_requested_reference_space_types(const String &requested_reference_space_types) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("set_requested_reference_space_types")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &requested_reference_space_types);
}

String WebXRInterface::get_requested_reference_space_types() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_requested_reference_space_types")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool WebXRInterface::is_input_source_active(int32_t input_source_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("is_input_source_active")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t input_source_id_encoded;
	PtrToArg<int64_t>::encode(input_source_id, &input_source_id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &input_source_id_encoded);
}

Ref<XRPositionalTracker> WebXRInterface::get_input_source_tracker(int32_t input_source_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_input_source_tracker")._native_ptr(), 636011756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<XRPositionalTracker>());
	int64_t input_source_id_encoded;
	PtrToArg<int64_t>::encode(input_source_id, &input_source_id_encoded);
	return Ref<XRPositionalTracker>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<XRPositionalTracker>(_gde_method_bind, _owner, &input_source_id_encoded));
}

WebXRInterface::TargetRayMode WebXRInterface::get_input_source_target_ray_mode(int32_t input_source_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_input_source_target_ray_mode")._native_ptr(), 2852387453);
	CHECK_METHOD_BIND_RET(_gde_method_bind, WebXRInterface::TargetRayMode(0));
	int64_t input_source_id_encoded;
	PtrToArg<int64_t>::encode(input_source_id, &input_source_id_encoded);
	return (WebXRInterface::TargetRayMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &input_source_id_encoded);
}

String WebXRInterface::get_visibility_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_visibility_state")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

double WebXRInterface::get_display_refresh_rate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_display_refresh_rate")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void WebXRInterface::set_display_refresh_rate(double refresh_rate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("set_display_refresh_rate")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double refresh_rate_encoded;
	PtrToArg<double>::encode(refresh_rate, &refresh_rate_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &refresh_rate_encoded);
}

Array WebXRInterface::get_available_display_refresh_rates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebXRInterface::get_class_static()._native_ptr(), StringName("get_available_display_refresh_rates")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}


} // namespace godot 