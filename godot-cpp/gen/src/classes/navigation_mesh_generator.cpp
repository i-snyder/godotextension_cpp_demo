/**************************************************************************/
/*  navigation_mesh_generator.cpp                                         */
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

#include <godot_cpp/classes/navigation_mesh_generator.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

NavigationMeshGenerator *NavigationMeshGenerator::get_singleton() {
	static NavigationMeshGenerator *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(NavigationMeshGenerator::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<NavigationMeshGenerator *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &NavigationMeshGenerator::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

void NavigationMeshGenerator::bake(const Ref<NavigationMesh> &navigation_mesh, Node *root_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshGenerator::get_class_static()._native_ptr(), StringName("bake")._native_ptr(), 1401173477);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (root_node != nullptr ? &root_node->_owner : nullptr));
}

void NavigationMeshGenerator::clear(const Ref<NavigationMesh> &navigation_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshGenerator::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 2923361153);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr));
}

void NavigationMeshGenerator::parse_source_geometry_data(const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, Node *root_node, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshGenerator::get_class_static()._native_ptr(), StringName("parse_source_geometry_data")._native_ptr(), 685862123);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (source_geometry_data != nullptr ? &source_geometry_data->_owner : nullptr), (root_node != nullptr ? &root_node->_owner : nullptr), &callback);
}

void NavigationMeshGenerator::bake_from_source_geometry_data(const Ref<NavigationMesh> &navigation_mesh, const Ref<NavigationMeshSourceGeometryData3D> &source_geometry_data, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshGenerator::get_class_static()._native_ptr(), StringName("bake_from_source_geometry_data")._native_ptr(), 2469318639);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (navigation_mesh != nullptr ? &navigation_mesh->_owner : nullptr), (source_geometry_data != nullptr ? &source_geometry_data->_owner : nullptr), &callback);
}


} // namespace godot 