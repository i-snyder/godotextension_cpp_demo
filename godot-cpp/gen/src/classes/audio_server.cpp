/**************************************************************************/
/*  audio_server.cpp                                                      */
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

#include <godot_cpp/classes/audio_server.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>

namespace godot {

AudioServer *AudioServer::get_singleton() {
	static AudioServer *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(AudioServer::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<AudioServer *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &AudioServer::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

void AudioServer::set_bus_count(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t AudioServer::get_bus_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioServer::remove_bus(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("remove_bus")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void AudioServer::add_bus(int32_t at_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("add_bus")._native_ptr(), 1025054187);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t at_position_encoded;
	PtrToArg<int64_t>::encode(at_position, &at_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &at_position_encoded);
}

void AudioServer::move_bus(int32_t index, int32_t to_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("move_bus")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t to_index_encoded;
	PtrToArg<int64_t>::encode(to_index, &to_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &to_index_encoded);
}

void AudioServer::set_bus_name(int32_t bus_idx, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_name")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &name);
}

String AudioServer::get_bus_name(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &bus_idx_encoded);
}

int32_t AudioServer::get_bus_index(const StringName &bus_name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_index")._native_ptr(), 2458036349);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bus_name);
}

int32_t AudioServer::get_bus_channels(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_channels")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::set_bus_volume_db(int32_t bus_idx, double volume_db) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_volume_db")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	double volume_db_encoded;
	PtrToArg<double>::encode(volume_db, &volume_db_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &volume_db_encoded);
}

double AudioServer::get_bus_volume_db(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_volume_db")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::set_bus_send(int32_t bus_idx, const StringName &send) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_send")._native_ptr(), 3780747571);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &send);
}

StringName AudioServer::get_bus_send(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_send")._native_ptr(), 659327637);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::set_bus_solo(int32_t bus_idx, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_solo")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &enable_encoded);
}

bool AudioServer::is_bus_solo(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("is_bus_solo")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::set_bus_mute(int32_t bus_idx, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_mute")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &enable_encoded);
}

bool AudioServer::is_bus_mute(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("is_bus_mute")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::set_bus_bypass_effects(int32_t bus_idx, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_bypass_effects")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &enable_encoded);
}

bool AudioServer::is_bus_bypassing_effects(int32_t bus_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("is_bus_bypassing_effects")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &bus_idx_encoded);
}

void AudioServer::add_bus_effect(int32_t bus_idx, const Ref<AudioEffect> &effect, int32_t at_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("add_bus_effect")._native_ptr(), 4068819785);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t at_position_encoded;
	PtrToArg<int64_t>::encode(at_position, &at_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, (effect != nullptr ? &effect->_owner : nullptr), &at_position_encoded);
}

void AudioServer::remove_bus_effect(int32_t bus_idx, int32_t effect_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("remove_bus_effect")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded);
}

int32_t AudioServer::get_bus_effect_count(int32_t bus_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_effect_count")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &bus_idx_encoded);
}

Ref<AudioEffect> AudioServer::get_bus_effect(int32_t bus_idx, int32_t effect_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_effect")._native_ptr(), 726064442);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioEffect>());
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	return Ref<AudioEffect>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioEffect>(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded));
}

Ref<AudioEffectInstance> AudioServer::get_bus_effect_instance(int32_t bus_idx, int32_t effect_idx, int32_t channel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_effect_instance")._native_ptr(), 1829771234);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioEffectInstance>());
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	return Ref<AudioEffectInstance>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioEffectInstance>(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded, &channel_encoded));
}

void AudioServer::swap_bus_effects(int32_t bus_idx, int32_t effect_idx, int32_t by_effect_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("swap_bus_effects")._native_ptr(), 1649997291);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	int64_t by_effect_idx_encoded;
	PtrToArg<int64_t>::encode(by_effect_idx, &by_effect_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded, &by_effect_idx_encoded);
}

void AudioServer::set_bus_effect_enabled(int32_t bus_idx, int32_t effect_idx, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_effect_enabled")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded, &enabled_encoded);
}

bool AudioServer::is_bus_effect_enabled(int32_t bus_idx, int32_t effect_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("is_bus_effect_enabled")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t effect_idx_encoded;
	PtrToArg<int64_t>::encode(effect_idx, &effect_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &bus_idx_encoded, &effect_idx_encoded);
}

double AudioServer::get_bus_peak_volume_left_db(int32_t bus_idx, int32_t channel) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_peak_volume_left_db")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &bus_idx_encoded, &channel_encoded);
}

double AudioServer::get_bus_peak_volume_right_db(int32_t bus_idx, int32_t channel) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_bus_peak_volume_right_db")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t bus_idx_encoded;
	PtrToArg<int64_t>::encode(bus_idx, &bus_idx_encoded);
	int64_t channel_encoded;
	PtrToArg<int64_t>::encode(channel, &channel_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &bus_idx_encoded, &channel_encoded);
}

void AudioServer::set_playback_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_playback_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double AudioServer::get_playback_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_playback_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioServer::lock() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("lock")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AudioServer::unlock() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("unlock")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

AudioServer::SpeakerMode AudioServer::get_speaker_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_speaker_mode")._native_ptr(), 2549190337);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioServer::SpeakerMode(0));
	return (AudioServer::SpeakerMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double AudioServer::get_mix_rate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_mix_rate")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

PackedStringArray AudioServer::get_output_device_list() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_output_device_list")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String AudioServer::get_output_device() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_output_device")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AudioServer::set_output_device(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_output_device")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

double AudioServer::get_time_to_next_mix() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_time_to_next_mix")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double AudioServer::get_time_since_last_mix() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_time_since_last_mix")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double AudioServer::get_output_latency() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_output_latency")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

PackedStringArray AudioServer::get_input_device_list() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_input_device_list")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String AudioServer::get_input_device() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("get_input_device")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AudioServer::set_input_device(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_input_device")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void AudioServer::set_bus_layout(const Ref<AudioBusLayout> &bus_layout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_bus_layout")._native_ptr(), 3319058824);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (bus_layout != nullptr ? &bus_layout->_owner : nullptr));
}

Ref<AudioBusLayout> AudioServer::generate_bus_layout() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("generate_bus_layout")._native_ptr(), 3769973890);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioBusLayout>());
	return Ref<AudioBusLayout>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioBusLayout>(_gde_method_bind, _owner));
}

void AudioServer::set_enable_tagging_used_audio_streams(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioServer::get_class_static()._native_ptr(), StringName("set_enable_tagging_used_audio_streams")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}


} // namespace godot 