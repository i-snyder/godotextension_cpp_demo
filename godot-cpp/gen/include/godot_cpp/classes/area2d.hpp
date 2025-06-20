/**************************************************************************/
/*  area2d.hpp                                                            */
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

#ifndef GODOT_CPP_AREA2D_HPP
#define GODOT_CPP_AREA2D_HPP

#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Node;
class Node2D;

class Area2D : public CollisionObject2D {
	GDEXTENSION_CLASS(Area2D, CollisionObject2D)

public:

	enum SpaceOverride {
		SPACE_OVERRIDE_DISABLED = 0,
		SPACE_OVERRIDE_COMBINE = 1,
		SPACE_OVERRIDE_COMBINE_REPLACE = 2,
		SPACE_OVERRIDE_REPLACE = 3,
		SPACE_OVERRIDE_REPLACE_COMBINE = 4,
	};

	void set_gravity_space_override_mode(Area2D::SpaceOverride space_override_mode);
	Area2D::SpaceOverride get_gravity_space_override_mode() const;
	void set_gravity_is_point(bool enable);
	bool is_gravity_a_point() const;
	void set_gravity_point_unit_distance(double distance_scale);
	double get_gravity_point_unit_distance() const;
	void set_gravity_point_center(const Vector2 &center);
	Vector2 get_gravity_point_center() const;
	void set_gravity_direction(const Vector2 &direction);
	Vector2 get_gravity_direction() const;
	void set_gravity(double gravity);
	double get_gravity() const;
	void set_linear_damp_space_override_mode(Area2D::SpaceOverride space_override_mode);
	Area2D::SpaceOverride get_linear_damp_space_override_mode() const;
	void set_angular_damp_space_override_mode(Area2D::SpaceOverride space_override_mode);
	Area2D::SpaceOverride get_angular_damp_space_override_mode() const;
	void set_linear_damp(double linear_damp);
	double get_linear_damp() const;
	void set_angular_damp(double angular_damp);
	double get_angular_damp() const;
	void set_priority(int32_t priority);
	int32_t get_priority() const;
	void set_monitoring(bool enable);
	bool is_monitoring() const;
	void set_monitorable(bool enable);
	bool is_monitorable() const;
	TypedArray<Node2D> get_overlapping_bodies() const;
	TypedArray<Area2D> get_overlapping_areas() const;
	bool has_overlapping_bodies() const;
	bool has_overlapping_areas() const;
	bool overlaps_body(Node *body) const;
	bool overlaps_area(Node *area) const;
	void set_audio_bus_name(const StringName &name);
	StringName get_audio_bus_name() const;
	void set_audio_bus_override(bool enable);
	bool is_overriding_audio_bus() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		CollisionObject2D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(Area2D::SpaceOverride);

#endif // ! GODOT_CPP_AREA2D_HPP