/**************************************************************************/
/*  camera_feed.cpp                                                       */
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

#include <godot_cpp/classes/camera_feed.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

int32_t CameraFeed::get_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("get_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool CameraFeed::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CameraFeed::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

String CameraFeed::get_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("get_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

CameraFeed::FeedPosition CameraFeed::get_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("get_position")._native_ptr(), 2711679033);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CameraFeed::FeedPosition(0));
	return (CameraFeed::FeedPosition)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Transform2D CameraFeed::get_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("get_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

void CameraFeed::set_transform(const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("set_transform")._native_ptr(), 2761652528);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &transform);
}

CameraFeed::FeedDataType CameraFeed::get_datatype() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CameraFeed::get_class_static()._native_ptr(), StringName("get_datatype")._native_ptr(), 1477782850);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CameraFeed::FeedDataType(0));
	return (CameraFeed::FeedDataType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 