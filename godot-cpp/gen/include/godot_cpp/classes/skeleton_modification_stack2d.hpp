/**************************************************************************/
/*  skeleton_modification_stack2d.hpp                                     */
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

#ifndef GODOT_CPP_SKELETON_MODIFICATION_STACK2D_HPP
#define GODOT_CPP_SKELETON_MODIFICATION_STACK2D_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Skeleton2D;
class SkeletonModification2D;

class SkeletonModificationStack2D : public Resource {
	GDEXTENSION_CLASS(SkeletonModificationStack2D, Resource)

public:

	void setup();
	void execute(double delta, int32_t execution_mode);
	void enable_all_modifications(bool enabled);
	Ref<SkeletonModification2D> get_modification(int32_t mod_idx) const;
	void add_modification(const Ref<SkeletonModification2D> &modification);
	void delete_modification(int32_t mod_idx);
	void set_modification(int32_t mod_idx, const Ref<SkeletonModification2D> &modification);
	void set_modification_count(int32_t count);
	int32_t get_modification_count() const;
	bool get_is_setup() const;
	void set_enabled(bool enabled);
	bool get_enabled() const;
	void set_strength(double strength);
	double get_strength() const;
	Skeleton2D *get_skeleton() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_SKELETON_MODIFICATION_STACK2D_HPP