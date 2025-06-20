/**************************************************************************/
/*  animation_mixer.cpp                                                   */
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

#include <godot_cpp/classes/animation_mixer.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/core/object.hpp>

namespace godot {

Error AnimationMixer::add_animation_library(const StringName &name, const Ref<AnimationLibrary> &library) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("add_animation_library")._native_ptr(), 618909818);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, (library != nullptr ? &library->_owner : nullptr));
}

void AnimationMixer::remove_animation_library(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("remove_animation_library")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void AnimationMixer::rename_animation_library(const StringName &name, const StringName &newname) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("rename_animation_library")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &newname);
}

bool AnimationMixer::has_animation_library(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("has_animation_library")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<AnimationLibrary> AnimationMixer::get_animation_library(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_animation_library")._native_ptr(), 147342321);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AnimationLibrary>());
	return Ref<AnimationLibrary>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AnimationLibrary>(_gde_method_bind, _owner, &name));
}

TypedArray<StringName> AnimationMixer::get_animation_library_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_animation_library_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<StringName>());
	return internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

bool AnimationMixer::has_animation(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("has_animation")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<Animation> AnimationMixer::get_animation(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_animation")._native_ptr(), 2933122410);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Animation>());
	return Ref<Animation>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Animation>(_gde_method_bind, _owner, &name));
}

PackedStringArray AnimationMixer::get_animation_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_animation_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void AnimationMixer::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

bool AnimationMixer::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationMixer::set_deterministic(bool deterministic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_deterministic")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t deterministic_encoded;
	PtrToArg<bool>::encode(deterministic, &deterministic_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &deterministic_encoded);
}

bool AnimationMixer::is_deterministic() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("is_deterministic")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationMixer::set_root_node(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_root_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath AnimationMixer::get_root_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void AnimationMixer::set_callback_mode_process(AnimationMixer::AnimationCallbackModeProcess mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_callback_mode_process")._native_ptr(), 2153733086);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationMixer::AnimationCallbackModeProcess AnimationMixer::get_callback_mode_process() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_callback_mode_process")._native_ptr(), 1394468472);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationMixer::AnimationCallbackModeProcess(0));
	return (AnimationMixer::AnimationCallbackModeProcess)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationMixer::set_callback_mode_method(AnimationMixer::AnimationCallbackModeMethod mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_callback_mode_method")._native_ptr(), 742218271);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationMixer::AnimationCallbackModeMethod AnimationMixer::get_callback_mode_method() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_callback_mode_method")._native_ptr(), 489449656);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationMixer::AnimationCallbackModeMethod(0));
	return (AnimationMixer::AnimationCallbackModeMethod)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationMixer::set_audio_max_polyphony(int32_t max_polyphony) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_audio_max_polyphony")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_polyphony_encoded;
	PtrToArg<int64_t>::encode(max_polyphony, &max_polyphony_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_polyphony_encoded);
}

int32_t AnimationMixer::get_audio_max_polyphony() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_audio_max_polyphony")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationMixer::set_root_motion_track(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_root_motion_track")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath AnimationMixer::get_root_motion_track() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_track")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

Vector3 AnimationMixer::get_root_motion_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_position")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Quaternion AnimationMixer::get_root_motion_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_rotation")._native_ptr(), 1222331677);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner);
}

Vector3 AnimationMixer::get_root_motion_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_scale")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Vector3 AnimationMixer::get_root_motion_position_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_position_accumulator")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Quaternion AnimationMixer::get_root_motion_rotation_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_rotation_accumulator")._native_ptr(), 1222331677);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner);
}

Vector3 AnimationMixer::get_root_motion_scale_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("get_root_motion_scale_accumulator")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void AnimationMixer::clear_caches() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("clear_caches")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimationMixer::advance(double delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("advance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &delta_encoded);
}

void AnimationMixer::set_reset_on_save_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("set_reset_on_save_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool AnimationMixer::is_reset_on_save_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("is_reset_on_save_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

StringName AnimationMixer::find_animation(const Ref<Animation> &animation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("find_animation")._native_ptr(), 1559484580);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, (animation != nullptr ? &animation->_owner : nullptr));
}

StringName AnimationMixer::find_animation_library(const Ref<Animation> &animation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationMixer::get_class_static()._native_ptr(), StringName("find_animation_library")._native_ptr(), 1559484580);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, (animation != nullptr ? &animation->_owner : nullptr));
}

Variant AnimationMixer::_post_process_key_value(const Ref<Animation> &animation, int32_t track, const Variant &value, Object *object, int32_t object_idx) const {
	return Variant();
}


} // namespace godot 