/**************************************************************************/
/*  navigation_mesh_source_geometry_data3d.hpp                            */
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

#ifndef GODOT_CPP_NAVIGATION_MESH_SOURCE_GEOMETRY_DATA3D_HPP
#define GODOT_CPP_NAVIGATION_MESH_SOURCE_GEOMETRY_DATA3D_HPP

#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Array;
class Mesh;
class PackedVector3Array;
struct Transform3D;

class NavigationMeshSourceGeometryData3D : public Resource {
	GDEXTENSION_CLASS(NavigationMeshSourceGeometryData3D, Resource)

public:

	void set_vertices(const PackedFloat32Array &vertices);
	PackedFloat32Array get_vertices() const;
	void set_indices(const PackedInt32Array &indices);
	PackedInt32Array get_indices() const;
	void clear();
	bool has_data();
	void add_mesh(const Ref<Mesh> &mesh, const Transform3D &xform);
	void add_mesh_array(const Array &mesh_array, const Transform3D &xform);
	void add_faces(const PackedVector3Array &faces, const Transform3D &xform);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_NAVIGATION_MESH_SOURCE_GEOMETRY_DATA3D_HPP