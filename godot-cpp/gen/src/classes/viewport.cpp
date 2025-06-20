/**************************************************************************/
/*  viewport.cpp                                                          */
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

#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/world3d.hpp>

namespace godot {

void Viewport::set_world_2d(const Ref<World2D> &world_2d) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_world_2d")._native_ptr(), 2736080068);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (world_2d != nullptr ? &world_2d->_owner : nullptr));
}

Ref<World2D> Viewport::get_world_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_world_2d")._native_ptr(), 2339128592);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<World2D>());
	return Ref<World2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<World2D>(_gde_method_bind, _owner));
}

Ref<World2D> Viewport::find_world_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("find_world_2d")._native_ptr(), 2339128592);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<World2D>());
	return Ref<World2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<World2D>(_gde_method_bind, _owner));
}

void Viewport::set_canvas_transform(const Transform2D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_canvas_transform")._native_ptr(), 2761652528);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform);
}

Transform2D Viewport::get_canvas_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_canvas_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

void Viewport::set_global_canvas_transform(const Transform2D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_global_canvas_transform")._native_ptr(), 2761652528);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform);
}

Transform2D Viewport::get_global_canvas_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_global_canvas_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D Viewport::get_final_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_final_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D Viewport::get_screen_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_screen_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Rect2 Viewport::get_visible_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_visible_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

void Viewport::set_transparent_background(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_transparent_background")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::has_transparent_background() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("has_transparent_background")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_use_hdr_2d(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_hdr_2d")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_using_hdr_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_hdr_2d")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_msaa_2d(Viewport::MSAA msaa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_msaa_2d")._native_ptr(), 3330258708);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msaa);
}

Viewport::MSAA Viewport::get_msaa_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_msaa_2d")._native_ptr(), 2542055527);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::MSAA(0));
	return (Viewport::MSAA)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_msaa_3d(Viewport::MSAA msaa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_msaa_3d")._native_ptr(), 3330258708);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msaa);
}

Viewport::MSAA Viewport::get_msaa_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_msaa_3d")._native_ptr(), 2542055527);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::MSAA(0));
	return (Viewport::MSAA)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_screen_space_aa(Viewport::ScreenSpaceAA screen_space_aa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_screen_space_aa")._native_ptr(), 3544169389);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &screen_space_aa);
}

Viewport::ScreenSpaceAA Viewport::get_screen_space_aa() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_screen_space_aa")._native_ptr(), 1390814124);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::ScreenSpaceAA(0));
	return (Viewport::ScreenSpaceAA)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_use_taa(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_taa")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_using_taa() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_taa")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_use_debanding(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_debanding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_using_debanding() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_debanding")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_use_occlusion_culling(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_occlusion_culling")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_using_occlusion_culling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_occlusion_culling")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_debug_draw(Viewport::DebugDraw debug_draw) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_debug_draw")._native_ptr(), 1970246205);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &debug_draw);
}

Viewport::DebugDraw Viewport::get_debug_draw() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_debug_draw")._native_ptr(), 579191299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::DebugDraw(0));
	return (Viewport::DebugDraw)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Viewport::get_render_info(Viewport::RenderInfoType type, Viewport::RenderInfo info) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_render_info")._native_ptr(), 481977019);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &type, &info);
}

Ref<ViewportTexture> Viewport::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 1746695840);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ViewportTexture>());
	return Ref<ViewportTexture>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ViewportTexture>(_gde_method_bind, _owner));
}

void Viewport::set_physics_object_picking(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_physics_object_picking")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::get_physics_object_picking() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_physics_object_picking")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_physics_object_picking_sort(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_physics_object_picking_sort")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::get_physics_object_picking_sort() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_physics_object_picking_sort")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

RID Viewport::get_viewport_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_viewport_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void Viewport::push_text_input(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("push_text_input")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

void Viewport::push_input(const Ref<InputEvent> &event, bool in_local_coords) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("push_input")._native_ptr(), 3644664830);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t in_local_coords_encoded;
	PtrToArg<bool>::encode(in_local_coords, &in_local_coords_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (event != nullptr ? &event->_owner : nullptr), &in_local_coords_encoded);
}

void Viewport::push_unhandled_input(const Ref<InputEvent> &event, bool in_local_coords) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("push_unhandled_input")._native_ptr(), 3644664830);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t in_local_coords_encoded;
	PtrToArg<bool>::encode(in_local_coords, &in_local_coords_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (event != nullptr ? &event->_owner : nullptr), &in_local_coords_encoded);
}

Camera2D *Viewport::get_camera_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_camera_2d")._native_ptr(), 3551466917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Camera2D>(_gde_method_bind, _owner);
}

void Viewport::set_as_audio_listener_2d(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_as_audio_listener_2d")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_audio_listener_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_audio_listener_2d")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Vector2 Viewport::get_mouse_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_mouse_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Viewport::warp_mouse(const Vector2 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("warp_mouse")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position);
}

void Viewport::update_mouse_cursor_state() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("update_mouse_cursor_state")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Variant Viewport::gui_get_drag_data() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("gui_get_drag_data")._native_ptr(), 1214101251);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner);
}

bool Viewport::gui_is_dragging() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("gui_is_dragging")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Viewport::gui_is_drag_successful() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("gui_is_drag_successful")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::gui_release_focus() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("gui_release_focus")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Control *Viewport::gui_get_focus_owner() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("gui_get_focus_owner")._native_ptr(), 2783021301);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Control>(_gde_method_bind, _owner);
}

void Viewport::set_disable_input(bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_disable_input")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_encoded);
}

bool Viewport::is_input_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_input_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_positional_shadow_atlas_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_positional_shadow_atlas_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

int32_t Viewport::get_positional_shadow_atlas_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_positional_shadow_atlas_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_positional_shadow_atlas_16_bits(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_positional_shadow_atlas_16_bits")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::get_positional_shadow_atlas_16_bits() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_positional_shadow_atlas_16_bits")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_snap_controls_to_pixels(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_snap_controls_to_pixels")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Viewport::is_snap_controls_to_pixels_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_snap_controls_to_pixels_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_snap_2d_transforms_to_pixel(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_snap_2d_transforms_to_pixel")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Viewport::is_snap_2d_transforms_to_pixel_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_snap_2d_transforms_to_pixel_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_snap_2d_vertices_to_pixel(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_snap_2d_vertices_to_pixel")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Viewport::is_snap_2d_vertices_to_pixel_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_snap_2d_vertices_to_pixel_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_positional_shadow_atlas_quadrant_subdiv(int32_t quadrant, Viewport::PositionalShadowAtlasQuadrantSubdiv subdiv) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_positional_shadow_atlas_quadrant_subdiv")._native_ptr(), 2596956071);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t quadrant_encoded;
	PtrToArg<int64_t>::encode(quadrant, &quadrant_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quadrant_encoded, &subdiv);
}

Viewport::PositionalShadowAtlasQuadrantSubdiv Viewport::get_positional_shadow_atlas_quadrant_subdiv(int32_t quadrant) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_positional_shadow_atlas_quadrant_subdiv")._native_ptr(), 2676778355);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::PositionalShadowAtlasQuadrantSubdiv(0));
	int64_t quadrant_encoded;
	PtrToArg<int64_t>::encode(quadrant, &quadrant_encoded);
	return (Viewport::PositionalShadowAtlasQuadrantSubdiv)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &quadrant_encoded);
}

void Viewport::set_input_as_handled() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_input_as_handled")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool Viewport::is_input_handled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_input_handled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_handle_input_locally(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_handle_input_locally")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_handling_input_locally() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_handling_input_locally")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_default_canvas_item_texture_filter(Viewport::DefaultCanvasItemTextureFilter mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_default_canvas_item_texture_filter")._native_ptr(), 2815160100);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Viewport::DefaultCanvasItemTextureFilter Viewport::get_default_canvas_item_texture_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_default_canvas_item_texture_filter")._native_ptr(), 896601198);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::DefaultCanvasItemTextureFilter(0));
	return (Viewport::DefaultCanvasItemTextureFilter)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_embedding_subwindows(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_embedding_subwindows")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_embedding_subwindows() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_embedding_subwindows")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

TypedArray<Window> Viewport::get_embedded_subwindows() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_embedded_subwindows")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Window>());
	return internal::_call_native_mb_ret<TypedArray<Window>>(_gde_method_bind, _owner);
}

void Viewport::set_canvas_cull_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_canvas_cull_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t Viewport::get_canvas_cull_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_canvas_cull_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_canvas_cull_mask_bit(uint32_t layer, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_canvas_cull_mask_bit")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded, &enable_encoded);
}

bool Viewport::get_canvas_cull_mask_bit(uint32_t layer) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_canvas_cull_mask_bit")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_encoded);
}

void Viewport::set_default_canvas_item_texture_repeat(Viewport::DefaultCanvasItemTextureRepeat mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_default_canvas_item_texture_repeat")._native_ptr(), 1658513413);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Viewport::DefaultCanvasItemTextureRepeat Viewport::get_default_canvas_item_texture_repeat() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_default_canvas_item_texture_repeat")._native_ptr(), 4049774160);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::DefaultCanvasItemTextureRepeat(0));
	return (Viewport::DefaultCanvasItemTextureRepeat)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_sdf_oversize(Viewport::SDFOversize oversize) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_sdf_oversize")._native_ptr(), 2574159017);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &oversize);
}

Viewport::SDFOversize Viewport::get_sdf_oversize() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_sdf_oversize")._native_ptr(), 2631427510);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::SDFOversize(0));
	return (Viewport::SDFOversize)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_sdf_scale(Viewport::SDFScale scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_sdf_scale")._native_ptr(), 1402773951);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale);
}

Viewport::SDFScale Viewport::get_sdf_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_sdf_scale")._native_ptr(), 3162688184);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::SDFScale(0));
	return (Viewport::SDFScale)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_mesh_lod_threshold(double pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_mesh_lod_threshold")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixels_encoded;
	PtrToArg<double>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded);
}

double Viewport::get_mesh_lod_threshold() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_mesh_lod_threshold")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Viewport::set_world_3d(const Ref<World3D> &world_3d) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_world_3d")._native_ptr(), 1400875337);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (world_3d != nullptr ? &world_3d->_owner : nullptr));
}

Ref<World3D> Viewport::get_world_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_world_3d")._native_ptr(), 317588385);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<World3D>());
	return Ref<World3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<World3D>(_gde_method_bind, _owner));
}

Ref<World3D> Viewport::find_world_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("find_world_3d")._native_ptr(), 317588385);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<World3D>());
	return Ref<World3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<World3D>(_gde_method_bind, _owner));
}

void Viewport::set_use_own_world_3d(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_own_world_3d")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_using_own_world_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_own_world_3d")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Camera3D *Viewport::get_camera_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_camera_3d")._native_ptr(), 2285090890);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Camera3D>(_gde_method_bind, _owner);
}

void Viewport::set_as_audio_listener_3d(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_as_audio_listener_3d")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Viewport::is_audio_listener_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_audio_listener_3d")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_disable_3d(bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_disable_3d")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_encoded);
}

bool Viewport::is_3d_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_3d_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_use_xr(bool use) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_use_xr")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_encoded;
	PtrToArg<bool>::encode(use, &use_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_encoded);
}

bool Viewport::is_using_xr() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("is_using_xr")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Viewport::set_scaling_3d_mode(Viewport::Scaling3DMode scaling_3d_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_scaling_3d_mode")._native_ptr(), 1531597597);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scaling_3d_mode);
}

Viewport::Scaling3DMode Viewport::get_scaling_3d_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_scaling_3d_mode")._native_ptr(), 2597660574);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::Scaling3DMode(0));
	return (Viewport::Scaling3DMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_scaling_3d_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_scaling_3d_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double Viewport::get_scaling_3d_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_scaling_3d_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Viewport::set_fsr_sharpness(double fsr_sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_fsr_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fsr_sharpness_encoded;
	PtrToArg<double>::encode(fsr_sharpness, &fsr_sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fsr_sharpness_encoded);
}

double Viewport::get_fsr_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_fsr_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Viewport::set_texture_mipmap_bias(double texture_mipmap_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_texture_mipmap_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double texture_mipmap_bias_encoded;
	PtrToArg<double>::encode(texture_mipmap_bias, &texture_mipmap_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture_mipmap_bias_encoded);
}

double Viewport::get_texture_mipmap_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_texture_mipmap_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Viewport::set_vrs_mode(Viewport::VRSMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_vrs_mode")._native_ptr(), 2749867817);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Viewport::VRSMode Viewport::get_vrs_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_vrs_mode")._native_ptr(), 349660525);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Viewport::VRSMode(0));
	return (Viewport::VRSMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Viewport::set_vrs_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("set_vrs_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> Viewport::get_vrs_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Viewport::get_class_static()._native_ptr(), StringName("get_vrs_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}


} // namespace godot 