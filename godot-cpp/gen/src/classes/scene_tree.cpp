/**************************************************************************/
/*  scene_tree.cpp                                                        */
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

#include <godot_cpp/classes/scene_tree.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/window.hpp>

namespace godot {

Window *SceneTree::get_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_root")._native_ptr(), 1757182445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Window>(_gde_method_bind, _owner);
}

bool SceneTree::has_group(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("has_group")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

bool SceneTree::is_auto_accept_quit() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_auto_accept_quit")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneTree::set_auto_accept_quit(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_auto_accept_quit")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool SceneTree::is_quit_on_go_back() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_quit_on_go_back")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneTree::set_quit_on_go_back(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_quit_on_go_back")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

void SceneTree::set_debug_collisions_hint(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_debug_collisions_hint")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool SceneTree::is_debugging_collisions_hint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_debugging_collisions_hint")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneTree::set_debug_paths_hint(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_debug_paths_hint")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool SceneTree::is_debugging_paths_hint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_debugging_paths_hint")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneTree::set_debug_navigation_hint(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_debug_navigation_hint")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool SceneTree::is_debugging_navigation_hint() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_debugging_navigation_hint")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SceneTree::set_edited_scene_root(Node *scene) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_edited_scene_root")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (scene != nullptr ? &scene->_owner : nullptr));
}

Node *SceneTree::get_edited_scene_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_edited_scene_root")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

void SceneTree::set_pause(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_pause")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool SceneTree::is_paused() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_paused")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<SceneTreeTimer> SceneTree::create_timer(double time_sec, bool process_always, bool process_in_physics, bool ignore_time_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("create_timer")._native_ptr(), 2709170273);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<SceneTreeTimer>());
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t process_always_encoded;
	PtrToArg<bool>::encode(process_always, &process_always_encoded);
	int8_t process_in_physics_encoded;
	PtrToArg<bool>::encode(process_in_physics, &process_in_physics_encoded);
	int8_t ignore_time_scale_encoded;
	PtrToArg<bool>::encode(ignore_time_scale, &ignore_time_scale_encoded);
	return Ref<SceneTreeTimer>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<SceneTreeTimer>(_gde_method_bind, _owner, &time_sec_encoded, &process_always_encoded, &process_in_physics_encoded, &ignore_time_scale_encoded));
}

Ref<Tween> SceneTree::create_tween() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("create_tween")._native_ptr(), 3426978995);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner));
}

TypedArray<Tween> SceneTree::get_processed_tweens() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_processed_tweens")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Tween>());
	return internal::_call_native_mb_ret<TypedArray<Tween>>(_gde_method_bind, _owner);
}

int32_t SceneTree::get_node_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_node_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int64_t SceneTree::get_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SceneTree::quit(int32_t exit_code) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("quit")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t exit_code_encoded;
	PtrToArg<int64_t>::encode(exit_code, &exit_code_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &exit_code_encoded);
}

void SceneTree::queue_delete(Object *obj) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("queue_delete")._native_ptr(), 3975164845);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (obj != nullptr ? &obj->_owner : nullptr));
}

void SceneTree::call_group_flags_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("call_group_flags")._native_ptr(), 1527739229);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
}

void SceneTree::notify_group_flags(uint32_t call_flags, const StringName &group, int32_t notification) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("notify_group_flags")._native_ptr(), 1245489420);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t call_flags_encoded;
	PtrToArg<int64_t>::encode(call_flags, &call_flags_encoded);
	int64_t notification_encoded;
	PtrToArg<int64_t>::encode(notification, &notification_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &call_flags_encoded, &group, &notification_encoded);
}

void SceneTree::set_group_flags(uint32_t call_flags, const StringName &group, const String &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_group_flags")._native_ptr(), 3497599527);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t call_flags_encoded;
	PtrToArg<int64_t>::encode(call_flags, &call_flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &call_flags_encoded, &group, &property, &value);
}

void SceneTree::call_group_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("call_group")._native_ptr(), 1257962832);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
}

void SceneTree::notify_group(const StringName &group, int32_t notification) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("notify_group")._native_ptr(), 2415702435);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t notification_encoded;
	PtrToArg<int64_t>::encode(notification, &notification_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group, &notification_encoded);
}

void SceneTree::set_group(const StringName &group, const String &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_group")._native_ptr(), 1279312029);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group, &property, &value);
}

TypedArray<Node> SceneTree::get_nodes_in_group(const StringName &group) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_nodes_in_group")._native_ptr(), 689397652);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Node>());
	return internal::_call_native_mb_ret<TypedArray<Node>>(_gde_method_bind, _owner, &group);
}

Node *SceneTree::get_first_node_in_group(const StringName &group) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_first_node_in_group")._native_ptr(), 4071044623);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner, &group);
}

void SceneTree::set_current_scene(Node *child_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_current_scene")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (child_node != nullptr ? &child_node->_owner : nullptr));
}

Node *SceneTree::get_current_scene() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_current_scene")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

Error SceneTree::change_scene_to_file(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("change_scene_to_file")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

Error SceneTree::change_scene_to_packed(const Ref<PackedScene> &packed_scene) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("change_scene_to_packed")._native_ptr(), 107349098);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (packed_scene != nullptr ? &packed_scene->_owner : nullptr));
}

Error SceneTree::reload_current_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("reload_current_scene")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SceneTree::unload_current_scene() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("unload_current_scene")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void SceneTree::set_multiplayer(const Ref<MultiplayerAPI> &multiplayer, const NodePath &root_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_multiplayer")._native_ptr(), 2385607013);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (multiplayer != nullptr ? &multiplayer->_owner : nullptr), &root_path);
}

Ref<MultiplayerAPI> SceneTree::get_multiplayer(const NodePath &for_path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("get_multiplayer")._native_ptr(), 3453401404);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<MultiplayerAPI>());
	return Ref<MultiplayerAPI>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<MultiplayerAPI>(_gde_method_bind, _owner, &for_path));
}

void SceneTree::set_multiplayer_poll_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("set_multiplayer_poll_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool SceneTree::is_multiplayer_poll_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SceneTree::get_class_static()._native_ptr(), StringName("is_multiplayer_poll_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 