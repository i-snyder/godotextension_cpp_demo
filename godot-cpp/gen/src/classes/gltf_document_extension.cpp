/**************************************************************************/
/*  gltf_document_extension.cpp                                           */
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

#include <godot_cpp/classes/gltf_document_extension.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>

namespace godot {

Error GLTFDocumentExtension::_import_preflight(const Ref<GLTFState> &state, const PackedStringArray &extensions) {
	return Error(0);
}

PackedStringArray GLTFDocumentExtension::_get_supported_extensions() {
	return PackedStringArray();
}

Error GLTFDocumentExtension::_parse_node_extensions(const Ref<GLTFState> &state, const Ref<GLTFNode> &gltf_node, const Dictionary &extensions) {
	return Error(0);
}

Error GLTFDocumentExtension::_parse_image_data(const Ref<GLTFState> &state, const PackedByteArray &image_data, const String &mime_type, const Ref<Image> &ret_image) {
	return Error(0);
}

String GLTFDocumentExtension::_get_image_file_extension() {
	return String();
}

Error GLTFDocumentExtension::_parse_texture_json(const Ref<GLTFState> &state, const Dictionary &texture_json, const Ref<GLTFTexture> &ret_gltf_texture) {
	return Error(0);
}

Node3D *GLTFDocumentExtension::_generate_scene_node(const Ref<GLTFState> &state, const Ref<GLTFNode> &gltf_node, Node *scene_parent) {
	return nullptr;
}

Error GLTFDocumentExtension::_import_post_parse(const Ref<GLTFState> &state) {
	return Error(0);
}

Error GLTFDocumentExtension::_import_node(const Ref<GLTFState> &state, const Ref<GLTFNode> &gltf_node, const Dictionary &json, Node *node) {
	return Error(0);
}

Error GLTFDocumentExtension::_import_post(const Ref<GLTFState> &state, Node *root) {
	return Error(0);
}

Error GLTFDocumentExtension::_export_preflight(const Ref<GLTFState> &state, Node *root) {
	return Error(0);
}

void GLTFDocumentExtension::_convert_scene_node(const Ref<GLTFState> &state, const Ref<GLTFNode> &gltf_node, Node *scene_node) {}

Error GLTFDocumentExtension::_export_preserialize(const Ref<GLTFState> &state) {
	return Error(0);
}

PackedStringArray GLTFDocumentExtension::_get_saveable_image_formats() {
	return PackedStringArray();
}

PackedByteArray GLTFDocumentExtension::_serialize_image_to_bytes(const Ref<GLTFState> &state, const Ref<Image> &image, const Dictionary &image_dict, const String &image_format, double lossy_quality) {
	return PackedByteArray();
}

Error GLTFDocumentExtension::_save_image_at_path(const Ref<GLTFState> &state, const Ref<Image> &image, const String &file_path, const String &image_format, double lossy_quality) {
	return Error(0);
}

Error GLTFDocumentExtension::_serialize_texture_json(const Ref<GLTFState> &state, const Dictionary &texture_json, const Ref<GLTFTexture> &gltf_texture, const String &image_format) {
	return Error(0);
}

Error GLTFDocumentExtension::_export_node(const Ref<GLTFState> &state, const Ref<GLTFNode> &gltf_node, const Dictionary &json, Node *node) {
	return Error(0);
}

Error GLTFDocumentExtension::_export_post(const Ref<GLTFState> &state) {
	return Error(0);
}


} // namespace godot 