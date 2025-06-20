/**************************************************************************/
/*  packed_vector3_array.cpp                                              */
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


#include <godot_cpp/variant/packed_vector3_array.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

PackedVector3Array::_MethodBindings PackedVector3Array::_method_bindings;

void PackedVector3Array::_init_bindings_constructors_destructor() {
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, 1);
	_method_bindings.constructor_2 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, 2);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
}
void PackedVector3Array::init_bindings() {
	PackedVector3Array::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("size");
	_method_bindings.method_size = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("is_empty");
	_method_bindings.method_is_empty = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("set");
	_method_bindings.method_set = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3975343409);
	_gde_name = StringName("push_back");
	_method_bindings.method_push_back = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3295363524);
	_gde_name = StringName("append");
	_method_bindings.method_append = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3295363524);
	_gde_name = StringName("append_array");
	_method_bindings.method_append_array = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 203538016);
	_gde_name = StringName("remove_at");
	_method_bindings.method_remove_at = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 2823966027);
	_gde_name = StringName("insert");
	_method_bindings.method_insert = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3892262309);
	_gde_name = StringName("fill");
	_method_bindings.method_fill = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3726392409);
	_gde_name = StringName("resize");
	_method_bindings.method_resize = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 848867239);
	_gde_name = StringName("clear");
	_method_bindings.method_clear = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("has");
	_method_bindings.method_has = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 1749054343);
	_gde_name = StringName("reverse");
	_method_bindings.method_reverse = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("slice");
	_method_bindings.method_slice = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 2086131305);
	_gde_name = StringName("to_byte_array");
	_method_bindings.method_to_byte_array = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("sort");
	_method_bindings.method_sort = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("bsearch");
	_method_bindings.method_bsearch = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 219263630);
	_gde_name = StringName("duplicate");
	_method_bindings.method_duplicate = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 2754175465);
	_gde_name = StringName("find");
	_method_bindings.method_find = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3718155780);
	_gde_name = StringName("rfind");
	_method_bindings.method_rfind = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 3718155780);
	_gde_name = StringName("count");
	_method_bindings.method_count = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, _gde_name._native_ptr(), 194580386);
	_method_bindings.indexed_setter = internal::gdextension_interface_variant_get_ptr_indexed_setter(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
	_method_bindings.indexed_getter = internal::gdextension_interface_variant_get_ptr_indexed_getter(GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_multiply_Transform3D = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MULTIPLY, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_TRANSFORM3D);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_equal_PackedVector3Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
	_method_bindings.operator_not_equal_PackedVector3Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
	_method_bindings.operator_add_PackedVector3Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_ADD, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
}

PackedVector3Array::PackedVector3Array() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

PackedVector3Array::PackedVector3Array(const PackedVector3Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

PackedVector3Array::PackedVector3Array(const Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_2, &opaque, &from);
}

PackedVector3Array::PackedVector3Array(PackedVector3Array &&other) {
	std::swap(opaque, other.opaque);
}

PackedVector3Array::~PackedVector3Array() {
	_method_bindings.destructor(&opaque);
}

int64_t PackedVector3Array::size() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_size, (GDExtensionTypePtr)&opaque);
}

bool PackedVector3Array::is_empty() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_empty, (GDExtensionTypePtr)&opaque);
}

void PackedVector3Array::set(int64_t index, const Vector3 &value){
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_set, (GDExtensionTypePtr)&opaque, &index_encoded, &value);
}

bool PackedVector3Array::push_back(const Vector3 &value){
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_push_back, (GDExtensionTypePtr)&opaque, &value);
}

bool PackedVector3Array::append(const Vector3 &value){
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_append, (GDExtensionTypePtr)&opaque, &value);
}

void PackedVector3Array::append_array(const PackedVector3Array &array){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_append_array, (GDExtensionTypePtr)&opaque, &array);
}

void PackedVector3Array::remove_at(int64_t index){
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_remove_at, (GDExtensionTypePtr)&opaque, &index_encoded);
}

int64_t PackedVector3Array::insert(int64_t at_index, const Vector3 &value){
	int64_t at_index_encoded;
	PtrToArg<int64_t>::encode(at_index, &at_index_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_insert, (GDExtensionTypePtr)&opaque, &at_index_encoded, &value);
}

void PackedVector3Array::fill(const Vector3 &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_fill, (GDExtensionTypePtr)&opaque, &value);
}

int64_t PackedVector3Array::resize(int64_t new_size){
	int64_t new_size_encoded;
	PtrToArg<int64_t>::encode(new_size, &new_size_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_resize, (GDExtensionTypePtr)&opaque, &new_size_encoded);
}

void PackedVector3Array::clear(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_clear, (GDExtensionTypePtr)&opaque);
}

bool PackedVector3Array::has(const Vector3 &value) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_has, (GDExtensionTypePtr)&opaque, &value);
}

void PackedVector3Array::reverse(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_reverse, (GDExtensionTypePtr)&opaque);
}

PackedVector3Array PackedVector3Array::slice(int64_t begin, int64_t end) const{
	int64_t begin_encoded;
	PtrToArg<int64_t>::encode(begin, &begin_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	return internal::_call_builtin_method_ptr_ret<PackedVector3Array>(_method_bindings.method_slice, (GDExtensionTypePtr)&opaque, &begin_encoded, &end_encoded);
}

PackedByteArray PackedVector3Array::to_byte_array() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_byte_array, (GDExtensionTypePtr)&opaque);
}

void PackedVector3Array::sort(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_sort, (GDExtensionTypePtr)&opaque);
}

int64_t PackedVector3Array::bsearch(const Vector3 &value, bool before){
	int8_t before_encoded;
	PtrToArg<bool>::encode(before, &before_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_bsearch, (GDExtensionTypePtr)&opaque, &value, &before_encoded);
}

PackedVector3Array PackedVector3Array::duplicate(){
	return internal::_call_builtin_method_ptr_ret<PackedVector3Array>(_method_bindings.method_duplicate, (GDExtensionTypePtr)&opaque);
}

int64_t PackedVector3Array::find(const Vector3 &value, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_find, (GDExtensionTypePtr)&opaque, &value, &from_encoded);
}

int64_t PackedVector3Array::rfind(const Vector3 &value, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_rfind, (GDExtensionTypePtr)&opaque, &value, &from_encoded);
}

int64_t PackedVector3Array::count(const Vector3 &value) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_count, (GDExtensionTypePtr)&opaque, &value);
}

bool PackedVector3Array::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedVector3Array::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedVector3Array::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

PackedVector3Array PackedVector3Array::operator*(const Transform3D &other) const {
	return internal::_call_builtin_operator_ptr<PackedVector3Array>(_method_bindings.operator_multiply_Transform3D, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedVector3Array::operator==(const PackedVector3Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_PackedVector3Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedVector3Array::operator!=(const PackedVector3Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_PackedVector3Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

PackedVector3Array PackedVector3Array::operator+(const PackedVector3Array &other) const {
	return internal::_call_builtin_operator_ptr<PackedVector3Array>(_method_bindings.operator_add_PackedVector3Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

PackedVector3Array &PackedVector3Array::operator=(const PackedVector3Array &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

PackedVector3Array &PackedVector3Array::operator=(PackedVector3Array &&other) {
	std::swap(opaque, other.opaque);
	return *this;
}

} //namespace godot