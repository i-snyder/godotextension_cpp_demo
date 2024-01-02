/**************************************************************************/
/*  option_button.cpp                                                     */
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

#include <godot_cpp/classes/option_button.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

void OptionButton::add_item(const String &label, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("add_item")._native_ptr(), 2697778442);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &id_encoded);
}

void OptionButton::add_icon_item(const Ref<Texture2D> &texture, const String &label, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("add_icon_item")._native_ptr(), 3781678508);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &label, &id_encoded);
}

void OptionButton::set_item_text(int32_t idx, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_text")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &text);
}

void OptionButton::set_item_icon(int32_t idx, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, (texture != nullptr ? &texture->_owner : nullptr));
}

void OptionButton::set_item_disabled(int32_t idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &disabled_encoded);
}

void OptionButton::set_item_id(int32_t idx, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_id")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &id_encoded);
}

void OptionButton::set_item_metadata(int32_t idx, const Variant &metadata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_metadata")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &metadata);
}

void OptionButton::set_item_tooltip(int32_t idx, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_tooltip")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &tooltip);
}

String OptionButton::get_item_text(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_text")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &idx_encoded);
}

Ref<Texture2D> OptionButton::get_item_icon(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &idx_encoded));
}

int32_t OptionButton::get_item_id(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_id")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &idx_encoded);
}

int32_t OptionButton::get_item_index(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_index")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded);
}

Variant OptionButton::get_item_metadata(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_metadata")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &idx_encoded);
}

String OptionButton::get_item_tooltip(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_tooltip")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &idx_encoded);
}

bool OptionButton::is_item_disabled(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("is_item_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

bool OptionButton::is_item_separator(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("is_item_separator")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

void OptionButton::add_separator(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("add_separator")._native_ptr(), 3005725572);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

void OptionButton::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void OptionButton::select(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("select")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

int32_t OptionButton::get_selected() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_selected")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t OptionButton::get_selected_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_selected_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Variant OptionButton::get_selected_metadata() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_selected_metadata")._native_ptr(), 1214101251);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner);
}

void OptionButton::remove_item(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("remove_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

PopupMenu *OptionButton::get_popup() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_popup")._native_ptr(), 229722558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner);
}

void OptionButton::show_popup() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("show_popup")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void OptionButton::set_item_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_item_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t OptionButton::get_item_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_item_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool OptionButton::has_selectable_items() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("has_selectable_items")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t OptionButton::get_selectable_item(bool from_last) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_selectable_item")._native_ptr(), 894402480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t from_last_encoded;
	PtrToArg<bool>::encode(from_last, &from_last_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_last_encoded);
}

void OptionButton::set_fit_to_longest_item(bool fit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_fit_to_longest_item")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t fit_encoded;
	PtrToArg<bool>::encode(fit, &fit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fit_encoded);
}

bool OptionButton::is_fit_to_longest_item() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("is_fit_to_longest_item")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void OptionButton::set_allow_reselect(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_allow_reselect")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool OptionButton::get_allow_reselect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("get_allow_reselect")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void OptionButton::set_disable_shortcuts(bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OptionButton::get_class_static()._native_ptr(), StringName("set_disable_shortcuts")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disabled_encoded);
}


} // namespace godot 