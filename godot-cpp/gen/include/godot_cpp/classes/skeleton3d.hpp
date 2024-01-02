/**************************************************************************/
/*  skeleton3d.hpp                                                        */
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

#ifndef GODOT_CPP_SKELETON3D_HPP
#define GODOT_CPP_SKELETON3D_HPP

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class RID;
class Skin;
class SkinReference;

class Skeleton3D : public Node3D {
	GDEXTENSION_CLASS(Skeleton3D, Node3D)

public:

	static const int NOTIFICATION_UPDATE_SKELETON = 50;

	void add_bone(const String &name);
	int32_t find_bone(const String &name) const;
	String get_bone_name(int32_t bone_idx) const;
	void set_bone_name(int32_t bone_idx, const String &name);
	int32_t get_bone_parent(int32_t bone_idx) const;
	void set_bone_parent(int32_t bone_idx, int32_t parent_idx);
	int32_t get_bone_count() const;
	uint64_t get_version() const;
	void unparent_bone_and_rest(int32_t bone_idx);
	PackedInt32Array get_bone_children(int32_t bone_idx) const;
	PackedInt32Array get_parentless_bones() const;
	Transform3D get_bone_rest(int32_t bone_idx) const;
	void set_bone_rest(int32_t bone_idx, const Transform3D &rest);
	Transform3D get_bone_global_rest(int32_t bone_idx) const;
	Ref<Skin> create_skin_from_rest_transforms();
	Ref<SkinReference> register_skin(const Ref<Skin> &skin);
	void localize_rests();
	void clear_bones();
	Transform3D get_bone_pose(int32_t bone_idx) const;
	void set_bone_pose_position(int32_t bone_idx, const Vector3 &position);
	void set_bone_pose_rotation(int32_t bone_idx, const Quaternion &rotation);
	void set_bone_pose_scale(int32_t bone_idx, const Vector3 &scale);
	Vector3 get_bone_pose_position(int32_t bone_idx) const;
	Quaternion get_bone_pose_rotation(int32_t bone_idx) const;
	Vector3 get_bone_pose_scale(int32_t bone_idx) const;
	void reset_bone_pose(int32_t bone_idx);
	void reset_bone_poses();
	bool is_bone_enabled(int32_t bone_idx) const;
	void set_bone_enabled(int32_t bone_idx, bool enabled = true);
	void clear_bones_global_pose_override();
	void set_bone_global_pose_override(int32_t bone_idx, const Transform3D &pose, double amount, bool persistent = false);
	Transform3D get_bone_global_pose_override(int32_t bone_idx) const;
	Transform3D get_bone_global_pose(int32_t bone_idx) const;
	Transform3D get_bone_global_pose_no_override(int32_t bone_idx) const;
	void force_update_all_bone_transforms();
	void force_update_bone_child_transform(int32_t bone_idx);
	void set_motion_scale(double motion_scale);
	double get_motion_scale() const;
	void set_show_rest_only(bool enabled);
	bool is_show_rest_only() const;
	void set_animate_physical_bones(bool enabled);
	bool get_animate_physical_bones() const;
	void physical_bones_stop_simulation();
	void physical_bones_start_simulation(const TypedArray<StringName> &bones = Array());
	void physical_bones_add_collision_exception(const RID &exception);
	void physical_bones_remove_collision_exception(const RID &exception);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Node3D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_SKELETON3D_HPP