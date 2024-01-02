/**************************************************************************/
/*  image.cpp                                                             */
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

#include <godot_cpp/classes/image.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>

namespace godot {

int32_t Image::get_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Image::get_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_height")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector2i Image::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

bool Image::has_mipmaps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("has_mipmaps")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Image::Format Image::get_format() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_format")._native_ptr(), 3847873762);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Image::Format(0));
	return (Image::Format)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

PackedByteArray Image::get_data() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_data")._native_ptr(), 2362200018);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner);
}

void Image::convert(Image::Format format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("convert")._native_ptr(), 2120693146);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &format);
}

int32_t Image::get_mipmap_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_mipmap_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Image::get_mipmap_offset(int32_t mipmap) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_mipmap_offset")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t mipmap_encoded;
	PtrToArg<int64_t>::encode(mipmap, &mipmap_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mipmap_encoded);
}

void Image::resize_to_po2(bool square, Image::Interpolation interpolation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("resize_to_po2")._native_ptr(), 4189212329);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t square_encoded;
	PtrToArg<bool>::encode(square, &square_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &square_encoded, &interpolation);
}

void Image::resize(int32_t width, int32_t height, Image::Interpolation interpolation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("resize")._native_ptr(), 994498151);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded, &height_encoded, &interpolation);
}

void Image::shrink_x2() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("shrink_x2")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::crop(int32_t width, int32_t height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("crop")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded, &height_encoded);
}

void Image::flip_x() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("flip_x")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::flip_y() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("flip_y")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Error Image::generate_mipmaps(bool renormalize) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("generate_mipmaps")._native_ptr(), 1633102583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t renormalize_encoded;
	PtrToArg<bool>::encode(renormalize, &renormalize_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &renormalize_encoded);
}

void Image::clear_mipmaps() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("clear_mipmaps")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<Image> Image::create(int32_t width, int32_t height, bool use_mipmaps, Image::Format format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("create")._native_ptr(), 986942177);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t use_mipmaps_encoded;
	PtrToArg<bool>::encode(use_mipmaps, &use_mipmaps_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, nullptr, &width_encoded, &height_encoded, &use_mipmaps_encoded, &format));
}

Ref<Image> Image::create_from_data(int32_t width, int32_t height, bool use_mipmaps, Image::Format format, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("create_from_data")._native_ptr(), 299398494);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t use_mipmaps_encoded;
	PtrToArg<bool>::encode(use_mipmaps, &use_mipmaps_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, nullptr, &width_encoded, &height_encoded, &use_mipmaps_encoded, &format, &data));
}

void Image::set_data(int32_t width, int32_t height, bool use_mipmaps, Image::Format format, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("set_data")._native_ptr(), 2740482212);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t use_mipmaps_encoded;
	PtrToArg<bool>::encode(use_mipmaps, &use_mipmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded, &height_encoded, &use_mipmaps_encoded, &format, &data);
}

bool Image::is_empty() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("is_empty")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Error Image::load(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

Ref<Image> Image::load_from_file(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_from_file")._native_ptr(), 736337515);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, nullptr, &path));
}

Error Image::save_png(const String &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_png")._native_ptr(), 2113323047);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

PackedByteArray Image::save_png_to_buffer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_png_to_buffer")._native_ptr(), 2362200018);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner);
}

Error Image::save_jpg(const String &path, double quality) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_jpg")._native_ptr(), 2800019068);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	double quality_encoded;
	PtrToArg<double>::encode(quality, &quality_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &quality_encoded);
}

PackedByteArray Image::save_jpg_to_buffer(double quality) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_jpg_to_buffer")._native_ptr(), 592235273);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	double quality_encoded;
	PtrToArg<double>::encode(quality, &quality_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &quality_encoded);
}

Error Image::save_exr(const String &path, bool grayscale) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_exr")._native_ptr(), 3108122999);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t grayscale_encoded;
	PtrToArg<bool>::encode(grayscale, &grayscale_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &grayscale_encoded);
}

PackedByteArray Image::save_exr_to_buffer(bool grayscale) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_exr_to_buffer")._native_ptr(), 3178917920);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	int8_t grayscale_encoded;
	PtrToArg<bool>::encode(grayscale, &grayscale_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &grayscale_encoded);
}

Error Image::save_webp(const String &path, bool lossy, double quality) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_webp")._native_ptr(), 2781156876);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int8_t lossy_encoded;
	PtrToArg<bool>::encode(lossy, &lossy_encoded);
	double quality_encoded;
	PtrToArg<double>::encode(quality, &quality_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &lossy_encoded, &quality_encoded);
}

PackedByteArray Image::save_webp_to_buffer(bool lossy, double quality) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("save_webp_to_buffer")._native_ptr(), 1214628238);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	int8_t lossy_encoded;
	PtrToArg<bool>::encode(lossy, &lossy_encoded);
	double quality_encoded;
	PtrToArg<double>::encode(quality, &quality_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &lossy_encoded, &quality_encoded);
}

Image::AlphaMode Image::detect_alpha() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("detect_alpha")._native_ptr(), 2030116505);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Image::AlphaMode(0));
	return (Image::AlphaMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Image::is_invisible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("is_invisible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Image::UsedChannels Image::detect_used_channels(Image::CompressSource source) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("detect_used_channels")._native_ptr(), 2703139984);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Image::UsedChannels(0));
	return (Image::UsedChannels)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &source);
}

Error Image::compress(Image::CompressMode mode, Image::CompressSource source, Image::ASTCFormat astc_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("compress")._native_ptr(), 2975424957);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mode, &source, &astc_format);
}

Error Image::compress_from_channels(Image::CompressMode mode, Image::UsedChannels channels, Image::ASTCFormat astc_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("compress_from_channels")._native_ptr(), 4212890953);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mode, &channels, &astc_format);
}

Error Image::decompress() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("decompress")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Image::is_compressed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("is_compressed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Image::rotate_90(ClockDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("rotate_90")._native_ptr(), 1901204267);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

void Image::rotate_180() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("rotate_180")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::fix_alpha_edges() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("fix_alpha_edges")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::premultiply_alpha() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("premultiply_alpha")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::srgb_to_linear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("srgb_to_linear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Image::normal_map_to_xy() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("normal_map_to_xy")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<Image> Image::rgbe_to_srgb() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("rgbe_to_srgb")._native_ptr(), 564927088);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner));
}

void Image::bump_map_to_normal_map(double bump_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("bump_map_to_normal_map")._native_ptr(), 3423495036);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bump_scale_encoded;
	PtrToArg<double>::encode(bump_scale, &bump_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bump_scale_encoded);
}

Dictionary Image::compute_image_metrics(const Ref<Image> &compared_image, bool use_luma) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("compute_image_metrics")._native_ptr(), 3080961247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int8_t use_luma_encoded;
	PtrToArg<bool>::encode(use_luma, &use_luma_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, (compared_image != nullptr ? &compared_image->_owner : nullptr), &use_luma_encoded);
}

void Image::blit_rect(const Ref<Image> &src, const Rect2i &src_rect, const Vector2i &dst) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("blit_rect")._native_ptr(), 2903928755);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (src != nullptr ? &src->_owner : nullptr), &src_rect, &dst);
}

void Image::blit_rect_mask(const Ref<Image> &src, const Ref<Image> &mask, const Rect2i &src_rect, const Vector2i &dst) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("blit_rect_mask")._native_ptr(), 3383581145);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (src != nullptr ? &src->_owner : nullptr), (mask != nullptr ? &mask->_owner : nullptr), &src_rect, &dst);
}

void Image::blend_rect(const Ref<Image> &src, const Rect2i &src_rect, const Vector2i &dst) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("blend_rect")._native_ptr(), 2903928755);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (src != nullptr ? &src->_owner : nullptr), &src_rect, &dst);
}

void Image::blend_rect_mask(const Ref<Image> &src, const Ref<Image> &mask, const Rect2i &src_rect, const Vector2i &dst) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("blend_rect_mask")._native_ptr(), 3383581145);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (src != nullptr ? &src->_owner : nullptr), (mask != nullptr ? &mask->_owner : nullptr), &src_rect, &dst);
}

void Image::fill(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("fill")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

void Image::fill_rect(const Rect2i &rect, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("fill_rect")._native_ptr(), 514693913);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rect, &color);
}

Rect2i Image::get_used_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_used_rect")._native_ptr(), 410525958);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2i());
	return internal::_call_native_mb_ret<Rect2i>(_gde_method_bind, _owner);
}

Ref<Image> Image::get_region(const Rect2i &region) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_region")._native_ptr(), 2601441065);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &region));
}

void Image::copy_from(const Ref<Image> &src) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("copy_from")._native_ptr(), 532598488);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (src != nullptr ? &src->_owner : nullptr));
}

Color Image::get_pixelv(const Vector2i &point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_pixelv")._native_ptr(), 1532707496);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &point);
}

Color Image::get_pixel(int32_t x, int32_t y) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("get_pixel")._native_ptr(), 2165839948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &x_encoded, &y_encoded);
}

void Image::set_pixelv(const Vector2i &point, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("set_pixelv")._native_ptr(), 287851464);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point, &color);
}

void Image::set_pixel(int32_t x, int32_t y, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("set_pixel")._native_ptr(), 3733378741);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &x_encoded, &y_encoded, &color);
}

void Image::adjust_bcs(double brightness, double contrast, double saturation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("adjust_bcs")._native_ptr(), 2385087082);
	CHECK_METHOD_BIND(_gde_method_bind);
	double brightness_encoded;
	PtrToArg<double>::encode(brightness, &brightness_encoded);
	double contrast_encoded;
	PtrToArg<double>::encode(contrast, &contrast_encoded);
	double saturation_encoded;
	PtrToArg<double>::encode(saturation, &saturation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &brightness_encoded, &contrast_encoded, &saturation_encoded);
}

Error Image::load_png_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_png_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_jpg_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_jpg_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_webp_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_webp_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_tga_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_tga_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_bmp_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_bmp_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_ktx_from_buffer(const PackedByteArray &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_ktx_from_buffer")._native_ptr(), 680677267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer);
}

Error Image::load_svg_from_buffer(const PackedByteArray &buffer, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_svg_from_buffer")._native_ptr(), 311853421);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer, &scale_encoded);
}

Error Image::load_svg_from_string(const String &svg_str, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Image::get_class_static()._native_ptr(), StringName("load_svg_from_string")._native_ptr(), 3254053600);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &svg_str, &scale_encoded);
}


} // namespace godot 