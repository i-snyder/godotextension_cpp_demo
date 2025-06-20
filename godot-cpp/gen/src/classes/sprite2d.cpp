/**************************************************************************/
/*  sprite2d.cpp                                                          */
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

#include <godot_cpp/classes/sprite2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void Sprite2D::set_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> Sprite2D::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

void Sprite2D::set_centered(bool centered) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_centered")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t centered_encoded;
	PtrToArg<bool>::encode(centered, &centered_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &centered_encoded);
}

bool Sprite2D::is_centered() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_centered")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 Sprite2D::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Sprite2D::set_flip_h(bool flip_h) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_flip_h")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_h_encoded;
	PtrToArg<bool>::encode(flip_h, &flip_h_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_h_encoded);
}

bool Sprite2D::is_flipped_h() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_flipped_h")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_flip_v(bool flip_v) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_flip_v")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_v_encoded;
	PtrToArg<bool>::encode(flip_v, &flip_v_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_v_encoded);
}

bool Sprite2D::is_flipped_v() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_flipped_v")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_region_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_region_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Sprite2D::is_region_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_region_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Sprite2D::is_pixel_opaque(const Vector2 &pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_pixel_opaque")._native_ptr(), 556197845);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &pos);
}

void Sprite2D::set_region_rect(const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_region_rect")._native_ptr(), 2046264180);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rect);
}

Rect2 Sprite2D::get_region_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_region_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

void Sprite2D::set_region_filter_clip_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_region_filter_clip_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Sprite2D::is_region_filter_clip_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("is_region_filter_clip_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_frame(int32_t frame) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_frame")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded);
}

int32_t Sprite2D::get_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_frame_coords(const Vector2i &coords) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_frame_coords")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &coords);
}

Vector2i Sprite2D::get_frame_coords() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_frame_coords")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void Sprite2D::set_vframes(int32_t vframes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_vframes")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t vframes_encoded;
	PtrToArg<int64_t>::encode(vframes, &vframes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vframes_encoded);
}

int32_t Sprite2D::get_vframes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_vframes")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Sprite2D::set_hframes(int32_t hframes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("set_hframes")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t hframes_encoded;
	PtrToArg<int64_t>::encode(hframes, &hframes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hframes_encoded);
}

int32_t Sprite2D::get_hframes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_hframes")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Rect2 Sprite2D::get_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Sprite2D::get_class_static()._native_ptr(), StringName("get_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}


} // namespace godot 