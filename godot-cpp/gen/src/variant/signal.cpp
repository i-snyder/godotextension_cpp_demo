/**************************************************************************/
/*  signal.cpp                                                            */
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


#include <godot_cpp/variant/signal.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

Signal::_MethodBindings Signal::_method_bindings;

void Signal::_init_bindings_constructors_destructor() {
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_SIGNAL, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_SIGNAL, 1);
	_method_bindings.constructor_2 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_SIGNAL, 2);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_SIGNAL);
}
void Signal::init_bindings() {
	Signal::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("is_null");
	_method_bindings.method_is_null = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("get_object");
	_method_bindings.method_get_object = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 4008621732);
	_gde_name = StringName("get_object_id");
	_method_bindings.method_get_object_id = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("get_name");
	_method_bindings.method_get_name = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 1825232092);
	_gde_name = StringName("connect");
	_method_bindings.method_connect = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 979702392);
	_gde_name = StringName("disconnect");
	_method_bindings.method_disconnect = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 3470848906);
	_gde_name = StringName("is_connected");
	_method_bindings.method_is_connected = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 4129521963);
	_gde_name = StringName("get_connections");
	_method_bindings.method_get_connections = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 4144163970);
	_gde_name = StringName("emit");
	_method_bindings.method_emit = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 3286317445);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_equal_Signal = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_SIGNAL);
	_method_bindings.operator_not_equal_Signal = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_SIGNAL);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_SIGNAL, GDEXTENSION_VARIANT_TYPE_ARRAY);
}

Signal::Signal() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

Signal::Signal(const Signal &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

Signal::Signal(Object *object, const StringName &signal) {
	internal::_call_builtin_constructor(_method_bindings.constructor_2, &opaque, (object != nullptr ? &object->_owner : nullptr), &signal);
}

Signal::Signal(Signal &&other) {
	std::swap(opaque, other.opaque);
}

Signal::~Signal() {
	_method_bindings.destructor(&opaque);
}

bool Signal::is_null() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_null, (GDExtensionTypePtr)&opaque);
}

Object  *Signal::get_object() const{
	return internal::_call_builtin_method_ptr_ret<Object *>(_method_bindings.method_get_object, (GDExtensionTypePtr)&opaque);
}

int64_t Signal::get_object_id() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_get_object_id, (GDExtensionTypePtr)&opaque);
}

StringName Signal::get_name() const{
	return internal::_call_builtin_method_ptr_ret<StringName>(_method_bindings.method_get_name, (GDExtensionTypePtr)&opaque);
}

int64_t Signal::connect(const Callable &callable, int64_t flags){
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_connect, (GDExtensionTypePtr)&opaque, &callable, &flags_encoded);
}

void Signal::disconnect(const Callable &callable){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_disconnect, (GDExtensionTypePtr)&opaque, &callable);
}

bool Signal::is_connected(const Callable &callable) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_connected, (GDExtensionTypePtr)&opaque, &callable);
}

Array Signal::get_connections() const{
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_get_connections, (GDExtensionTypePtr)&opaque);
}

bool Signal::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Signal::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Signal::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

bool Signal::operator==(const Signal &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Signal, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Signal::operator!=(const Signal &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Signal, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

Signal &Signal::operator=(const Signal &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

Signal &Signal::operator=(Signal &&other) {
	std::swap(opaque, other.opaque);
	return *this;
}

} //namespace godot