/**************************************************************************/
/*  translation_server.cpp                                                */
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

#include <godot_cpp/classes/translation_server.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/translation.hpp>

namespace godot {

TranslationServer *TranslationServer::get_singleton() {
	static TranslationServer *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(TranslationServer::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<TranslationServer *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &TranslationServer::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

void TranslationServer::set_locale(const String &locale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("set_locale")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &locale);
}

String TranslationServer::get_locale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_locale")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String TranslationServer::get_tool_locale() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_tool_locale")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int32_t TranslationServer::compare_locales(const String &locale_a, const String &locale_b) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("compare_locales")._native_ptr(), 2878152881);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &locale_a, &locale_b);
}

String TranslationServer::standardize_locale(const String &locale) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("standardize_locale")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &locale);
}

PackedStringArray TranslationServer::get_all_languages() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_all_languages")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String TranslationServer::get_language_name(const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_language_name")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &language);
}

PackedStringArray TranslationServer::get_all_scripts() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_all_scripts")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String TranslationServer::get_script_name(const String &script) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_script_name")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &script);
}

PackedStringArray TranslationServer::get_all_countries() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_all_countries")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

String TranslationServer::get_country_name(const String &country) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_country_name")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &country);
}

String TranslationServer::get_locale_name(const String &locale) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_locale_name")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &locale);
}

StringName TranslationServer::translate(const StringName &message, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("translate")._native_ptr(), 1829228469);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &message, &context);
}

StringName TranslationServer::translate_plural(const StringName &message, const StringName &plural_message, int32_t n, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("translate_plural")._native_ptr(), 229954002);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t n_encoded;
	PtrToArg<int64_t>::encode(n, &n_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &message, &plural_message, &n_encoded, &context);
}

void TranslationServer::add_translation(const Ref<Translation> &translation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("add_translation")._native_ptr(), 1466479800);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (translation != nullptr ? &translation->_owner : nullptr));
}

void TranslationServer::remove_translation(const Ref<Translation> &translation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("remove_translation")._native_ptr(), 1466479800);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (translation != nullptr ? &translation->_owner : nullptr));
}

Ref<Translation> TranslationServer::get_translation_object(const String &locale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_translation_object")._native_ptr(), 2065240175);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Translation>());
	return Ref<Translation>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Translation>(_gde_method_bind, _owner, &locale));
}

void TranslationServer::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

PackedStringArray TranslationServer::get_loaded_locales() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("get_loaded_locales")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

bool TranslationServer::is_pseudolocalization_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("is_pseudolocalization_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TranslationServer::set_pseudolocalization_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("set_pseudolocalization_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

void TranslationServer::reload_pseudolocalization() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("reload_pseudolocalization")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

StringName TranslationServer::pseudolocalize(const StringName &message) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TranslationServer::get_class_static()._native_ptr(), StringName("pseudolocalize")._native_ptr(), 1965194235);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &message);
}


} // namespace godot 