/**************************************************************************/
/*  string.cpp                                                            */
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


#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/signal.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/variant/vector4.hpp>
#include <godot_cpp/variant/vector4i.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

String::_MethodBindings String::_method_bindings;

void String::_init_bindings_constructors_destructor() {
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_STRING, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_STRING, 1);
	_method_bindings.constructor_2 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_STRING, 2);
	_method_bindings.constructor_3 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_STRING, 3);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_STRING);
}
void String::init_bindings() {
	String::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("casecmp_to");
	_method_bindings.method_casecmp_to = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2920860731);
	_gde_name = StringName("nocasecmp_to");
	_method_bindings.method_nocasecmp_to = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2920860731);
	_gde_name = StringName("naturalcasecmp_to");
	_method_bindings.method_naturalcasecmp_to = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2920860731);
	_gde_name = StringName("naturalnocasecmp_to");
	_method_bindings.method_naturalnocasecmp_to = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2920860731);
	_gde_name = StringName("length");
	_method_bindings.method_length = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("substr");
	_method_bindings.method_substr = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 787537301);
	_gde_name = StringName("get_slice");
	_method_bindings.method_get_slice = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3535100402);
	_gde_name = StringName("get_slicec");
	_method_bindings.method_get_slicec = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 787537301);
	_gde_name = StringName("get_slice_count");
	_method_bindings.method_get_slice_count = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2920860731);
	_gde_name = StringName("find");
	_method_bindings.method_find = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("count");
	_method_bindings.method_count = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2343087891);
	_gde_name = StringName("countn");
	_method_bindings.method_countn = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2343087891);
	_gde_name = StringName("findn");
	_method_bindings.method_findn = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("rfind");
	_method_bindings.method_rfind = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("rfindn");
	_method_bindings.method_rfindn = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("match");
	_method_bindings.method_match = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("matchn");
	_method_bindings.method_matchn = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("begins_with");
	_method_bindings.method_begins_with = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("ends_with");
	_method_bindings.method_ends_with = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("is_subsequence_of");
	_method_bindings.method_is_subsequence_of = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("is_subsequence_ofn");
	_method_bindings.method_is_subsequence_ofn = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("bigrams");
	_method_bindings.method_bigrams = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 747180633);
	_gde_name = StringName("similarity");
	_method_bindings.method_similarity = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2697460964);
	_gde_name = StringName("format");
	_method_bindings.method_format = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3212199029);
	_gde_name = StringName("replace");
	_method_bindings.method_replace = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1340436205);
	_gde_name = StringName("replacen");
	_method_bindings.method_replacen = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1340436205);
	_gde_name = StringName("repeat");
	_method_bindings.method_repeat = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2162347432);
	_gde_name = StringName("reverse");
	_method_bindings.method_reverse = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("insert");
	_method_bindings.method_insert = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 248737229);
	_gde_name = StringName("erase");
	_method_bindings.method_erase = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 787537301);
	_gde_name = StringName("capitalize");
	_method_bindings.method_capitalize = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("to_camel_case");
	_method_bindings.method_to_camel_case = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("to_pascal_case");
	_method_bindings.method_to_pascal_case = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("to_snake_case");
	_method_bindings.method_to_snake_case = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("split");
	_method_bindings.method_split = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1252735785);
	_gde_name = StringName("rsplit");
	_method_bindings.method_rsplit = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1252735785);
	_gde_name = StringName("split_floats");
	_method_bindings.method_split_floats = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2092079095);
	_gde_name = StringName("join");
	_method_bindings.method_join = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3595973238);
	_gde_name = StringName("to_upper");
	_method_bindings.method_to_upper = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("to_lower");
	_method_bindings.method_to_lower = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("left");
	_method_bindings.method_left = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2162347432);
	_gde_name = StringName("right");
	_method_bindings.method_right = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2162347432);
	_gde_name = StringName("strip_edges");
	_method_bindings.method_strip_edges = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 907855311);
	_gde_name = StringName("strip_escapes");
	_method_bindings.method_strip_escapes = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("lstrip");
	_method_bindings.method_lstrip = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("rstrip");
	_method_bindings.method_rstrip = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("get_extension");
	_method_bindings.method_get_extension = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("get_basename");
	_method_bindings.method_get_basename = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("path_join");
	_method_bindings.method_path_join = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("unicode_at");
	_method_bindings.method_unicode_at = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 4103005248);
	_gde_name = StringName("indent");
	_method_bindings.method_indent = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("dedent");
	_method_bindings.method_dedent = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("hash");
	_method_bindings.method_hash = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("md5_text");
	_method_bindings.method_md5_text = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("sha1_text");
	_method_bindings.method_sha1_text = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("sha256_text");
	_method_bindings.method_sha256_text = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("md5_buffer");
	_method_bindings.method_md5_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("sha1_buffer");
	_method_bindings.method_sha1_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("sha256_buffer");
	_method_bindings.method_sha256_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("is_empty");
	_method_bindings.method_is_empty = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("contains");
	_method_bindings.method_contains = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("is_absolute_path");
	_method_bindings.method_is_absolute_path = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_relative_path");
	_method_bindings.method_is_relative_path = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("simplify_path");
	_method_bindings.method_simplify_path = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("get_base_dir");
	_method_bindings.method_get_base_dir = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("get_file");
	_method_bindings.method_get_file = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("xml_escape");
	_method_bindings.method_xml_escape = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3429816538);
	_gde_name = StringName("xml_unescape");
	_method_bindings.method_xml_unescape = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("uri_encode");
	_method_bindings.method_uri_encode = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("uri_decode");
	_method_bindings.method_uri_decode = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("c_escape");
	_method_bindings.method_c_escape = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("c_unescape");
	_method_bindings.method_c_unescape = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("json_escape");
	_method_bindings.method_json_escape = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("validate_node_name");
	_method_bindings.method_validate_node_name = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("validate_filename");
	_method_bindings.method_validate_filename = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3942272618);
	_gde_name = StringName("is_valid_identifier");
	_method_bindings.method_is_valid_identifier = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_valid_int");
	_method_bindings.method_is_valid_int = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_valid_float");
	_method_bindings.method_is_valid_float = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_valid_hex_number");
	_method_bindings.method_is_valid_hex_number = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 593672999);
	_gde_name = StringName("is_valid_html_color");
	_method_bindings.method_is_valid_html_color = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_valid_ip_address");
	_method_bindings.method_is_valid_ip_address = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_valid_filename");
	_method_bindings.method_is_valid_filename = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("to_int");
	_method_bindings.method_to_int = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("to_float");
	_method_bindings.method_to_float = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 466405837);
	_gde_name = StringName("hex_to_int");
	_method_bindings.method_hex_to_int = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("bin_to_int");
	_method_bindings.method_bin_to_int = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("lpad");
	_method_bindings.method_lpad = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 248737229);
	_gde_name = StringName("rpad");
	_method_bindings.method_rpad = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 248737229);
	_gde_name = StringName("pad_decimals");
	_method_bindings.method_pad_decimals = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2162347432);
	_gde_name = StringName("pad_zeros");
	_method_bindings.method_pad_zeros = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2162347432);
	_gde_name = StringName("trim_prefix");
	_method_bindings.method_trim_prefix = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("trim_suffix");
	_method_bindings.method_trim_suffix = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 3134094431);
	_gde_name = StringName("to_ascii_buffer");
	_method_bindings.method_to_ascii_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("to_utf8_buffer");
	_method_bindings.method_to_utf8_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("to_utf16_buffer");
	_method_bindings.method_to_utf16_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("to_utf32_buffer");
	_method_bindings.method_to_utf32_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("hex_decode");
	_method_bindings.method_hex_decode = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("to_wchar_buffer");
	_method_bindings.method_to_wchar_buffer = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("num_scientific");
	_method_bindings.method_num_scientific = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2710373411);
	_gde_name = StringName("num");
	_method_bindings.method_num = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 1555901022);
	_gde_name = StringName("num_int64");
	_method_bindings.method_num_int64 = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2111271071);
	_gde_name = StringName("num_uint64");
	_method_bindings.method_num_uint64 = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 2111271071);
	_gde_name = StringName("chr");
	_method_bindings.method_chr = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 897497541);
	_gde_name = StringName("humanize_size");
	_method_bindings.method_humanize_size = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_STRING, _gde_name._native_ptr(), 897497541);
	_method_bindings.indexed_setter = internal::gdextension_interface_variant_get_ptr_indexed_setter(GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.indexed_getter = internal::gdextension_interface_variant_get_ptr_indexed_getter(GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_module_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_module_bool = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_BOOL);
	_method_bindings.operator_module_int = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_INT);
	_method_bindings.operator_module_float = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_FLOAT);
	_method_bindings.operator_equal_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_not_equal_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_less_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_LESS, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_less_equal_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_LESS_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_greater_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_GREATER, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_greater_equal_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_GREATER_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_add_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_ADD, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_module_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_in_String = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING);
	_method_bindings.operator_module_Vector2 = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR2);
	_method_bindings.operator_module_Vector2i = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR2I);
	_method_bindings.operator_module_Rect2 = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_RECT2);
	_method_bindings.operator_module_Rect2i = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_RECT2I);
	_method_bindings.operator_module_Vector3 = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR3);
	_method_bindings.operator_module_Vector3i = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR3I);
	_method_bindings.operator_module_Transform2D = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_TRANSFORM2D);
	_method_bindings.operator_module_Vector4 = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR4);
	_method_bindings.operator_module_Vector4i = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_VECTOR4I);
	_method_bindings.operator_module_Plane = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PLANE);
	_method_bindings.operator_module_Quaternion = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_QUATERNION);
	_method_bindings.operator_module_AABB = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_AABB);
	_method_bindings.operator_module_Basis = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_BASIS);
	_method_bindings.operator_module_Transform3D = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_TRANSFORM3D);
	_method_bindings.operator_module_Projection = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PROJECTION);
	_method_bindings.operator_module_Color = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_COLOR);
	_method_bindings.operator_equal_StringName = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING_NAME);
	_method_bindings.operator_not_equal_StringName = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING_NAME);
	_method_bindings.operator_add_StringName = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_ADD, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING_NAME);
	_method_bindings.operator_module_StringName = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING_NAME);
	_method_bindings.operator_in_StringName = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_STRING_NAME);
	_method_bindings.operator_module_NodePath = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_NODE_PATH);
	_method_bindings.operator_module_Object = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_OBJECT);
	_method_bindings.operator_in_Object = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_OBJECT);
	_method_bindings.operator_module_Callable = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_CALLABLE);
	_method_bindings.operator_module_Signal = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_SIGNAL);
	_method_bindings.operator_module_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_module_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_module_PackedByteArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_BYTE_ARRAY);
	_method_bindings.operator_module_PackedInt32Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_INT32_ARRAY);
	_method_bindings.operator_module_PackedInt64Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_INT64_ARRAY);
	_method_bindings.operator_module_PackedFloat32Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_FLOAT32_ARRAY);
	_method_bindings.operator_module_PackedFloat64Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_FLOAT64_ARRAY);
	_method_bindings.operator_module_PackedStringArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.operator_in_PackedStringArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.operator_module_PackedVector2Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR2_ARRAY);
	_method_bindings.operator_module_PackedVector3Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY);
	_method_bindings.operator_module_PackedColorArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_MODULE, GDEXTENSION_VARIANT_TYPE_STRING, GDEXTENSION_VARIANT_TYPE_PACKED_COLOR_ARRAY);
}

String::String() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

String::String(const String &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

String::String(const StringName &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_2, &opaque, &from);
}

String::String(const NodePath &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_3, &opaque, &from);
}

String::String(String &&other) {
	std::swap(opaque, other.opaque);
}

String::~String() {
	_method_bindings.destructor(&opaque);
}

int64_t String::casecmp_to(const String &to) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_casecmp_to, (GDExtensionTypePtr)&opaque, &to);
}

int64_t String::nocasecmp_to(const String &to) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_nocasecmp_to, (GDExtensionTypePtr)&opaque, &to);
}

int64_t String::naturalcasecmp_to(const String &to) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_naturalcasecmp_to, (GDExtensionTypePtr)&opaque, &to);
}

int64_t String::naturalnocasecmp_to(const String &to) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_naturalnocasecmp_to, (GDExtensionTypePtr)&opaque, &to);
}

int64_t String::length() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_length, (GDExtensionTypePtr)&opaque);
}

String String::substr(int64_t from, int64_t len) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t len_encoded;
	PtrToArg<int64_t>::encode(len, &len_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_substr, (GDExtensionTypePtr)&opaque, &from_encoded, &len_encoded);
}

String String::get_slice(const String &delimiter, int64_t slice) const{
	int64_t slice_encoded;
	PtrToArg<int64_t>::encode(slice, &slice_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_slice, (GDExtensionTypePtr)&opaque, &delimiter, &slice_encoded);
}

String String::get_slicec(int64_t delimiter, int64_t slice) const{
	int64_t delimiter_encoded;
	PtrToArg<int64_t>::encode(delimiter, &delimiter_encoded);
	int64_t slice_encoded;
	PtrToArg<int64_t>::encode(slice, &slice_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_slicec, (GDExtensionTypePtr)&opaque, &delimiter_encoded, &slice_encoded);
}

int64_t String::get_slice_count(const String &delimiter) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_get_slice_count, (GDExtensionTypePtr)&opaque, &delimiter);
}

int64_t String::find(const String &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_find, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

int64_t String::count(const String &what, int64_t from, int64_t to) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t to_encoded;
	PtrToArg<int64_t>::encode(to, &to_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_count, (GDExtensionTypePtr)&opaque, &what, &from_encoded, &to_encoded);
}

int64_t String::countn(const String &what, int64_t from, int64_t to) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t to_encoded;
	PtrToArg<int64_t>::encode(to, &to_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_countn, (GDExtensionTypePtr)&opaque, &what, &from_encoded, &to_encoded);
}

int64_t String::findn(const String &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_findn, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

int64_t String::rfind(const String &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_rfind, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

int64_t String::rfindn(const String &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_rfindn, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

bool String::match(const String &expr) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_match, (GDExtensionTypePtr)&opaque, &expr);
}

bool String::matchn(const String &expr) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_matchn, (GDExtensionTypePtr)&opaque, &expr);
}

bool String::begins_with(const String &text) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_begins_with, (GDExtensionTypePtr)&opaque, &text);
}

bool String::ends_with(const String &text) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_ends_with, (GDExtensionTypePtr)&opaque, &text);
}

bool String::is_subsequence_of(const String &text) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_subsequence_of, (GDExtensionTypePtr)&opaque, &text);
}

bool String::is_subsequence_ofn(const String &text) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_subsequence_ofn, (GDExtensionTypePtr)&opaque, &text);
}

PackedStringArray String::bigrams() const{
	return internal::_call_builtin_method_ptr_ret<PackedStringArray>(_method_bindings.method_bigrams, (GDExtensionTypePtr)&opaque);
}

double String::similarity(const String &text) const{
	return internal::_call_builtin_method_ptr_ret<double>(_method_bindings.method_similarity, (GDExtensionTypePtr)&opaque, &text);
}

String String::format(const Variant &values, const String &placeholder) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_format, (GDExtensionTypePtr)&opaque, &values, &placeholder);
}

String String::replace(const String &what, const String &forwhat) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_replace, (GDExtensionTypePtr)&opaque, &what, &forwhat);
}

String String::replacen(const String &what, const String &forwhat) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_replacen, (GDExtensionTypePtr)&opaque, &what, &forwhat);
}

String String::repeat(int64_t count) const{
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_repeat, (GDExtensionTypePtr)&opaque, &count_encoded);
}

String String::reverse() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_reverse, (GDExtensionTypePtr)&opaque);
}

String String::insert(int64_t position, const String &what) const{
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_insert, (GDExtensionTypePtr)&opaque, &position_encoded, &what);
}

String String::erase(int64_t position, int64_t chars) const{
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	int64_t chars_encoded;
	PtrToArg<int64_t>::encode(chars, &chars_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_erase, (GDExtensionTypePtr)&opaque, &position_encoded, &chars_encoded);
}

String String::capitalize() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_capitalize, (GDExtensionTypePtr)&opaque);
}

String String::to_camel_case() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_to_camel_case, (GDExtensionTypePtr)&opaque);
}

String String::to_pascal_case() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_to_pascal_case, (GDExtensionTypePtr)&opaque);
}

String String::to_snake_case() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_to_snake_case, (GDExtensionTypePtr)&opaque);
}

PackedStringArray String::split(const String &delimiter, bool allow_empty, int64_t maxsplit) const{
	int8_t allow_empty_encoded;
	PtrToArg<bool>::encode(allow_empty, &allow_empty_encoded);
	int64_t maxsplit_encoded;
	PtrToArg<int64_t>::encode(maxsplit, &maxsplit_encoded);
	return internal::_call_builtin_method_ptr_ret<PackedStringArray>(_method_bindings.method_split, (GDExtensionTypePtr)&opaque, &delimiter, &allow_empty_encoded, &maxsplit_encoded);
}

PackedStringArray String::rsplit(const String &delimiter, bool allow_empty, int64_t maxsplit) const{
	int8_t allow_empty_encoded;
	PtrToArg<bool>::encode(allow_empty, &allow_empty_encoded);
	int64_t maxsplit_encoded;
	PtrToArg<int64_t>::encode(maxsplit, &maxsplit_encoded);
	return internal::_call_builtin_method_ptr_ret<PackedStringArray>(_method_bindings.method_rsplit, (GDExtensionTypePtr)&opaque, &delimiter, &allow_empty_encoded, &maxsplit_encoded);
}

PackedFloat64Array String::split_floats(const String &delimiter, bool allow_empty) const{
	int8_t allow_empty_encoded;
	PtrToArg<bool>::encode(allow_empty, &allow_empty_encoded);
	return internal::_call_builtin_method_ptr_ret<PackedFloat64Array>(_method_bindings.method_split_floats, (GDExtensionTypePtr)&opaque, &delimiter, &allow_empty_encoded);
}

String String::join(const PackedStringArray &parts) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_join, (GDExtensionTypePtr)&opaque, &parts);
}

String String::to_upper() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_to_upper, (GDExtensionTypePtr)&opaque);
}

String String::to_lower() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_to_lower, (GDExtensionTypePtr)&opaque);
}

String String::left(int64_t length) const{
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_left, (GDExtensionTypePtr)&opaque, &length_encoded);
}

String String::right(int64_t length) const{
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_right, (GDExtensionTypePtr)&opaque, &length_encoded);
}

String String::strip_edges(bool left, bool right) const{
	int8_t left_encoded;
	PtrToArg<bool>::encode(left, &left_encoded);
	int8_t right_encoded;
	PtrToArg<bool>::encode(right, &right_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_strip_edges, (GDExtensionTypePtr)&opaque, &left_encoded, &right_encoded);
}

String String::strip_escapes() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_strip_escapes, (GDExtensionTypePtr)&opaque);
}

String String::lstrip(const String &chars) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_lstrip, (GDExtensionTypePtr)&opaque, &chars);
}

String String::rstrip(const String &chars) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_rstrip, (GDExtensionTypePtr)&opaque, &chars);
}

String String::get_extension() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_extension, (GDExtensionTypePtr)&opaque);
}

String String::get_basename() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_basename, (GDExtensionTypePtr)&opaque);
}

String String::path_join(const String &file) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_path_join, (GDExtensionTypePtr)&opaque, &file);
}

int64_t String::unicode_at(int64_t at) const{
	int64_t at_encoded;
	PtrToArg<int64_t>::encode(at, &at_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_unicode_at, (GDExtensionTypePtr)&opaque, &at_encoded);
}

String String::indent(const String &prefix) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_indent, (GDExtensionTypePtr)&opaque, &prefix);
}

String String::dedent() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_dedent, (GDExtensionTypePtr)&opaque);
}

int64_t String::hash() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_hash, (GDExtensionTypePtr)&opaque);
}

String String::md5_text() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_md5_text, (GDExtensionTypePtr)&opaque);
}

String String::sha1_text() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_sha1_text, (GDExtensionTypePtr)&opaque);
}

String String::sha256_text() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_sha256_text, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::md5_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_md5_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::sha1_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_sha1_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::sha256_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_sha256_buffer, (GDExtensionTypePtr)&opaque);
}

bool String::is_empty() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_empty, (GDExtensionTypePtr)&opaque);
}

bool String::contains(const String &what) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_contains, (GDExtensionTypePtr)&opaque, &what);
}

bool String::is_absolute_path() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_absolute_path, (GDExtensionTypePtr)&opaque);
}

bool String::is_relative_path() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_relative_path, (GDExtensionTypePtr)&opaque);
}

String String::simplify_path() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_simplify_path, (GDExtensionTypePtr)&opaque);
}

String String::get_base_dir() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_base_dir, (GDExtensionTypePtr)&opaque);
}

String String::get_file() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_get_file, (GDExtensionTypePtr)&opaque);
}

String String::xml_escape(bool escape_quotes) const{
	int8_t escape_quotes_encoded;
	PtrToArg<bool>::encode(escape_quotes, &escape_quotes_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_xml_escape, (GDExtensionTypePtr)&opaque, &escape_quotes_encoded);
}

String String::xml_unescape() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_xml_unescape, (GDExtensionTypePtr)&opaque);
}

String String::uri_encode() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_uri_encode, (GDExtensionTypePtr)&opaque);
}

String String::uri_decode() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_uri_decode, (GDExtensionTypePtr)&opaque);
}

String String::c_escape() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_c_escape, (GDExtensionTypePtr)&opaque);
}

String String::c_unescape() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_c_unescape, (GDExtensionTypePtr)&opaque);
}

String String::json_escape() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_json_escape, (GDExtensionTypePtr)&opaque);
}

String String::validate_node_name() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_validate_node_name, (GDExtensionTypePtr)&opaque);
}

String String::validate_filename() const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_validate_filename, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_identifier() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_identifier, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_int() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_int, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_float() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_float, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_hex_number(bool with_prefix) const{
	int8_t with_prefix_encoded;
	PtrToArg<bool>::encode(with_prefix, &with_prefix_encoded);
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_hex_number, (GDExtensionTypePtr)&opaque, &with_prefix_encoded);
}

bool String::is_valid_html_color() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_html_color, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_ip_address() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_ip_address, (GDExtensionTypePtr)&opaque);
}

bool String::is_valid_filename() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_valid_filename, (GDExtensionTypePtr)&opaque);
}

int64_t String::to_int() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_to_int, (GDExtensionTypePtr)&opaque);
}

double String::to_float() const{
	return internal::_call_builtin_method_ptr_ret<double>(_method_bindings.method_to_float, (GDExtensionTypePtr)&opaque);
}

int64_t String::hex_to_int() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_hex_to_int, (GDExtensionTypePtr)&opaque);
}

int64_t String::bin_to_int() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_bin_to_int, (GDExtensionTypePtr)&opaque);
}

String String::lpad(int64_t min_length, const String &character) const{
	int64_t min_length_encoded;
	PtrToArg<int64_t>::encode(min_length, &min_length_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_lpad, (GDExtensionTypePtr)&opaque, &min_length_encoded, &character);
}

String String::rpad(int64_t min_length, const String &character) const{
	int64_t min_length_encoded;
	PtrToArg<int64_t>::encode(min_length, &min_length_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_rpad, (GDExtensionTypePtr)&opaque, &min_length_encoded, &character);
}

String String::pad_decimals(int64_t digits) const{
	int64_t digits_encoded;
	PtrToArg<int64_t>::encode(digits, &digits_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_pad_decimals, (GDExtensionTypePtr)&opaque, &digits_encoded);
}

String String::pad_zeros(int64_t digits) const{
	int64_t digits_encoded;
	PtrToArg<int64_t>::encode(digits, &digits_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_pad_zeros, (GDExtensionTypePtr)&opaque, &digits_encoded);
}

String String::trim_prefix(const String &prefix) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_trim_prefix, (GDExtensionTypePtr)&opaque, &prefix);
}

String String::trim_suffix(const String &suffix) const{
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_trim_suffix, (GDExtensionTypePtr)&opaque, &suffix);
}

PackedByteArray String::to_ascii_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_ascii_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::to_utf8_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_utf8_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::to_utf16_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_utf16_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::to_utf32_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_utf32_buffer, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::hex_decode() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_hex_decode, (GDExtensionTypePtr)&opaque);
}

PackedByteArray String::to_wchar_buffer() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_wchar_buffer, (GDExtensionTypePtr)&opaque);
}

String String::num_scientific(double number){
	double number_encoded;
	PtrToArg<double>::encode(number, &number_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_num_scientific, nullptr, &number_encoded);
}

String String::num(double number, int64_t decimals){
	double number_encoded;
	PtrToArg<double>::encode(number, &number_encoded);
	int64_t decimals_encoded;
	PtrToArg<int64_t>::encode(decimals, &decimals_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_num, nullptr, &number_encoded, &decimals_encoded);
}

String String::num_int64(int64_t number, int64_t base, bool capitalize_hex){
	int64_t number_encoded;
	PtrToArg<int64_t>::encode(number, &number_encoded);
	int64_t base_encoded;
	PtrToArg<int64_t>::encode(base, &base_encoded);
	int8_t capitalize_hex_encoded;
	PtrToArg<bool>::encode(capitalize_hex, &capitalize_hex_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_num_int64, nullptr, &number_encoded, &base_encoded, &capitalize_hex_encoded);
}

String String::num_uint64(int64_t number, int64_t base, bool capitalize_hex){
	int64_t number_encoded;
	PtrToArg<int64_t>::encode(number, &number_encoded);
	int64_t base_encoded;
	PtrToArg<int64_t>::encode(base, &base_encoded);
	int8_t capitalize_hex_encoded;
	PtrToArg<bool>::encode(capitalize_hex, &capitalize_hex_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_num_uint64, nullptr, &number_encoded, &base_encoded, &capitalize_hex_encoded);
}

String String::chr(int64_t _char){
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_chr, nullptr, &_char_encoded);
}

String String::humanize_size(int64_t size){
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_builtin_method_ptr_ret<String>(_method_bindings.method_humanize_size, nullptr, &size_encoded);
}

bool String::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

String String::operator%(bool other) const {
	int8_t other_encoded;
	PtrToArg<bool>::encode(other, &other_encoded);
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_bool, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other_encoded);
}

String String::operator%(int64_t other) const {
	int64_t other_encoded;
	PtrToArg<int64_t>::encode(other, &other_encoded);
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_int, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other_encoded);
}

String String::operator%(double other) const {
	double other_encoded;
	PtrToArg<double>::encode(other, &other_encoded);
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_float, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other_encoded);
}

bool String::operator==(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator!=(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator<(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_less_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator<=(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_less_equal_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator>(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_greater_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator>=(const String &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_greater_equal_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator+(const String &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_add_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const String &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_String, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector2 &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector2, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector2i &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector2i, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Rect2 &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Rect2, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Rect2i &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Rect2i, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector3 &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector3, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector3i &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector3i, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Transform2D &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Transform2D, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector4 &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector4, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Vector4i &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Vector4i, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Plane &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Plane, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Quaternion &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Quaternion, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const AABB &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_AABB, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Basis &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Basis, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Transform3D &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Transform3D, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Projection &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Projection, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Color &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Color, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator==(const StringName &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_StringName, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool String::operator!=(const StringName &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_StringName, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator+(const StringName &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_add_StringName, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const StringName &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_StringName, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const NodePath &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_NodePath, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(Object *other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Object, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)(other != nullptr ? &other->_owner : nullptr));
}

String String::operator%(const Callable &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Callable, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Signal &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Signal, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Dictionary &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Dictionary, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedByteArray &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedByteArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedInt32Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedInt32Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedInt64Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedInt64Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedFloat32Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedFloat32Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedFloat64Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedFloat64Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedStringArray &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedStringArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedVector2Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedVector2Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedVector3Array &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedVector3Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String String::operator%(const PackedColorArray &other) const {
	return internal::_call_builtin_operator_ptr<String>(_method_bindings.operator_module_PackedColorArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

String &String::operator=(const String &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

String &String::operator=(String &&other) {
	std::swap(opaque, other.opaque);
	return *this;
}

} //namespace godot