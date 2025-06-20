/**************************************************************************/
/*  tween.cpp                                                             */
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

#include <godot_cpp/classes/tween.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/classes/property_tweener.hpp>

namespace godot {

Ref<PropertyTweener> Tween::tween_property(Object *object, const NodePath &property, const Variant &final_val, double duration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("tween_property")._native_ptr(), 4049770449);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<PropertyTweener>());
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	return Ref<PropertyTweener>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<PropertyTweener>(_gde_method_bind, _owner, (object != nullptr ? &object->_owner : nullptr), &property, &final_val, &duration_encoded));
}

Ref<IntervalTweener> Tween::tween_interval(double time) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("tween_interval")._native_ptr(), 413360199);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<IntervalTweener>());
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return Ref<IntervalTweener>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<IntervalTweener>(_gde_method_bind, _owner, &time_encoded));
}

Ref<CallbackTweener> Tween::tween_callback(const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("tween_callback")._native_ptr(), 1540176488);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<CallbackTweener>());
	return Ref<CallbackTweener>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<CallbackTweener>(_gde_method_bind, _owner, &callback));
}

Ref<MethodTweener> Tween::tween_method(const Callable &method, const Variant &from, const Variant &to, double duration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("tween_method")._native_ptr(), 2337877153);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<MethodTweener>());
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	return Ref<MethodTweener>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<MethodTweener>(_gde_method_bind, _owner, &method, &from, &to, &duration_encoded));
}

bool Tween::custom_step(double delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("custom_step")._native_ptr(), 330693286);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &delta_encoded);
}

void Tween::stop() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("stop")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Tween::pause() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("pause")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Tween::play() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("play")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Tween::kill() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("kill")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

double Tween::get_total_elapsed_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("get_total_elapsed_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool Tween::is_running() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("is_running")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool Tween::is_valid() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("is_valid")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<Tween> Tween::bind_node(Node *node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("bind_node")._native_ptr(), 2946786331);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr)));
}

Ref<Tween> Tween::set_process_mode(Tween::TweenProcessMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_process_mode")._native_ptr(), 855258840);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &mode));
}

Ref<Tween> Tween::set_pause_mode(Tween::TweenPauseMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_pause_mode")._native_ptr(), 3363368837);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &mode));
}

Ref<Tween> Tween::set_parallel(bool parallel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_parallel")._native_ptr(), 1942052223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	int8_t parallel_encoded;
	PtrToArg<bool>::encode(parallel, &parallel_encoded);
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &parallel_encoded));
}

Ref<Tween> Tween::set_loops(int32_t loops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_loops")._native_ptr(), 2670836414);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	int64_t loops_encoded;
	PtrToArg<int64_t>::encode(loops, &loops_encoded);
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &loops_encoded));
}

int32_t Tween::get_loops_left() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("get_loops_left")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Ref<Tween> Tween::set_speed_scale(double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 3961971106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &speed_encoded));
}

Ref<Tween> Tween::set_trans(Tween::TransitionType trans) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_trans")._native_ptr(), 3965963875);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &trans));
}

Ref<Tween> Tween::set_ease(Tween::EaseType ease) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("set_ease")._native_ptr(), 1208117252);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner, &ease));
}

Ref<Tween> Tween::parallel() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("parallel")._native_ptr(), 3426978995);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner));
}

Ref<Tween> Tween::chain() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("chain")._native_ptr(), 3426978995);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Tween>());
	return Ref<Tween>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Tween>(_gde_method_bind, _owner));
}

Variant Tween::interpolate_value(const Variant &initial_value, const Variant &delta_value, double elapsed_time, double duration, Tween::TransitionType trans_type, Tween::EaseType ease_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tween::get_class_static()._native_ptr(), StringName("interpolate_value")._native_ptr(), 3452526450);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	double elapsed_time_encoded;
	PtrToArg<double>::encode(elapsed_time, &elapsed_time_encoded);
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, nullptr, &initial_value, &delta_value, &elapsed_time_encoded, &duration_encoded, &trans_type, &ease_type);
}


} // namespace godot 