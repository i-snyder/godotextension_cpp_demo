/**************************************************************************/
/*  physical_bone3d.hpp                                                   */
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

#ifndef GODOT_CPP_PHYSICAL_BONE3D_HPP
#define GODOT_CPP_PHYSICAL_BONE3D_HPP

#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class PhysicsDirectBodyState3D;

class PhysicalBone3D : public PhysicsBody3D {
	GDEXTENSION_CLASS(PhysicalBone3D, PhysicsBody3D)

public:

	enum DampMode {
		DAMP_MODE_COMBINE = 0,
		DAMP_MODE_REPLACE = 1,
	};

	enum JointType {
		JOINT_TYPE_NONE = 0,
		JOINT_TYPE_PIN = 1,
		JOINT_TYPE_CONE = 2,
		JOINT_TYPE_HINGE = 3,
		JOINT_TYPE_SLIDER = 4,
		JOINT_TYPE_6DOF = 5,
	};

	void apply_central_impulse(const Vector3 &impulse);
	void apply_impulse(const Vector3 &impulse, const Vector3 &position = Vector3(0, 0, 0));
	void set_joint_type(PhysicalBone3D::JointType joint_type);
	PhysicalBone3D::JointType get_joint_type() const;
	void set_joint_offset(const Transform3D &offset);
	Transform3D get_joint_offset() const;
	void set_joint_rotation(const Vector3 &euler);
	Vector3 get_joint_rotation() const;
	void set_body_offset(const Transform3D &offset);
	Transform3D get_body_offset() const;
	bool get_simulate_physics();
	bool is_simulating_physics();
	int32_t get_bone_id() const;
	void set_mass(double mass);
	double get_mass() const;
	void set_friction(double friction);
	double get_friction() const;
	void set_bounce(double bounce);
	double get_bounce() const;
	void set_gravity_scale(double gravity_scale);
	double get_gravity_scale() const;
	void set_linear_damp_mode(PhysicalBone3D::DampMode linear_damp_mode);
	PhysicalBone3D::DampMode get_linear_damp_mode() const;
	void set_angular_damp_mode(PhysicalBone3D::DampMode angular_damp_mode);
	PhysicalBone3D::DampMode get_angular_damp_mode() const;
	void set_linear_damp(double linear_damp);
	double get_linear_damp() const;
	void set_angular_damp(double angular_damp);
	double get_angular_damp() const;
	void set_linear_velocity(const Vector3 &linear_velocity);
	Vector3 get_linear_velocity() const;
	void set_angular_velocity(const Vector3 &angular_velocity);
	Vector3 get_angular_velocity() const;
	void set_use_custom_integrator(bool enable);
	bool is_using_custom_integrator();
	void set_can_sleep(bool able_to_sleep);
	bool is_able_to_sleep() const;
	virtual void _integrate_forces(PhysicsDirectBodyState3D *state);
protected:
	template <class T, class B>
	static void register_virtuals() {
		PhysicsBody3D::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_integrate_forces),decltype(&T::_integrate_forces)>) {
			BIND_VIRTUAL_METHOD(T, _integrate_forces);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(PhysicalBone3D::DampMode);
VARIANT_ENUM_CAST(PhysicalBone3D::JointType);

#endif // ! GODOT_CPP_PHYSICAL_BONE3D_HPP