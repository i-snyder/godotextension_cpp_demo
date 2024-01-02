/**************************************************************************/
/*  packed_string_array.hpp                                               */
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

#ifndef GODOT_CPP_PACKED_STRING_ARRAY_HPP
#define GODOT_CPP_PACKED_STRING_ARRAY_HPP

#include <godot_cpp/core/defs.hpp>

#include <godot_cpp/variant/string.hpp>
#include <gdextension_interface.h>

namespace godot {

class Array;
class Dictionary;
class PackedByteArray;
class String;
class Variant;

class PackedStringArray {
	static constexpr size_t PACKED_STRING_ARRAY_SIZE = 16;
	uint8_t opaque[PACKED_STRING_ARRAY_SIZE] = {};

	friend class Variant;

	static struct _MethodBindings {
		GDExtensionPtrConstructor constructor_0;
		GDExtensionPtrConstructor constructor_1;
		GDExtensionPtrConstructor constructor_2;
		GDExtensionPtrDestructor destructor;
		GDExtensionPtrBuiltInMethod method_size;
		GDExtensionPtrBuiltInMethod method_is_empty;
		GDExtensionPtrBuiltInMethod method_set;
		GDExtensionPtrBuiltInMethod method_push_back;
		GDExtensionPtrBuiltInMethod method_append;
		GDExtensionPtrBuiltInMethod method_append_array;
		GDExtensionPtrBuiltInMethod method_remove_at;
		GDExtensionPtrBuiltInMethod method_insert;
		GDExtensionPtrBuiltInMethod method_fill;
		GDExtensionPtrBuiltInMethod method_resize;
		GDExtensionPtrBuiltInMethod method_clear;
		GDExtensionPtrBuiltInMethod method_has;
		GDExtensionPtrBuiltInMethod method_reverse;
		GDExtensionPtrBuiltInMethod method_slice;
		GDExtensionPtrBuiltInMethod method_to_byte_array;
		GDExtensionPtrBuiltInMethod method_sort;
		GDExtensionPtrBuiltInMethod method_bsearch;
		GDExtensionPtrBuiltInMethod method_duplicate;
		GDExtensionPtrBuiltInMethod method_find;
		GDExtensionPtrBuiltInMethod method_rfind;
		GDExtensionPtrBuiltInMethod method_count;
		GDExtensionPtrIndexedSetter indexed_setter;
		GDExtensionPtrIndexedGetter indexed_getter;
		GDExtensionPtrOperatorEvaluator operator_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not;
		GDExtensionPtrOperatorEvaluator operator_in_Dictionary;
		GDExtensionPtrOperatorEvaluator operator_in_Array;
		GDExtensionPtrOperatorEvaluator operator_equal_PackedStringArray;
		GDExtensionPtrOperatorEvaluator operator_not_equal_PackedStringArray;
		GDExtensionPtrOperatorEvaluator operator_add_PackedStringArray;
	} _method_bindings;

	static void init_bindings();
	static void _init_bindings_constructors_destructor();

public:
	_FORCE_INLINE_ GDExtensionTypePtr _native_ptr() const { return const_cast<uint8_t (*)[PACKED_STRING_ARRAY_SIZE]>(&opaque); }
	PackedStringArray();
	PackedStringArray(const PackedStringArray &from);
	PackedStringArray(const Array &from);
	PackedStringArray(PackedStringArray &&other);
	~PackedStringArray();
	int64_t size() const;
	bool is_empty() const;
	void set(int64_t index, const String &value);
	bool push_back(const String &value);
	bool append(const String &value);
	void append_array(const PackedStringArray &array);
	void remove_at(int64_t index);
	int64_t insert(int64_t at_index, const String &value);
	void fill(const String &value);
	int64_t resize(int64_t new_size);
	void clear();
	bool has(const String &value) const;
	void reverse();
	PackedStringArray slice(int64_t begin, int64_t end = 2147483647) const;
	PackedByteArray to_byte_array() const;
	void sort();
	int64_t bsearch(const String &value, bool before = true);
	PackedStringArray duplicate();
	int64_t find(const String &value, int64_t from = 0) const;
	int64_t rfind(const String &value, int64_t from = -1) const;
	int64_t count(const String &value) const;
	bool operator==(const Variant &other) const;
	bool operator!=(const Variant &other) const;
	bool operatornot() const;
	bool operator==(const PackedStringArray &other) const;
	bool operator!=(const PackedStringArray &other) const;
	PackedStringArray operator+(const PackedStringArray &other) const;
	PackedStringArray &operator=(const PackedStringArray &other);
	PackedStringArray &operator=(PackedStringArray &&other);
	const String &operator[](int p_index) const;
	String &operator[](int p_index);
	const String *ptr() const;
	String *ptrw();

    struct Iterator {
		_FORCE_INLINE_ String &operator*() const {
			return *elem_ptr;
		}
		_FORCE_INLINE_ String *operator->() const { return elem_ptr; }
		_FORCE_INLINE_ Iterator &operator++() {
			elem_ptr++;
			return *this;
		}
		_FORCE_INLINE_ Iterator &operator--() {
			elem_ptr--;
			return *this;
		}

		_FORCE_INLINE_ bool operator==(const Iterator &b) const { return elem_ptr == b.elem_ptr; }
		_FORCE_INLINE_ bool operator!=(const Iterator &b) const { return elem_ptr != b.elem_ptr; }

		Iterator(String *p_ptr) { elem_ptr = p_ptr; }
		Iterator() {}
		Iterator(const Iterator &p_it) { elem_ptr = p_it.elem_ptr; }

	private:
		String *elem_ptr = nullptr;
	};

	struct ConstIterator {
		_FORCE_INLINE_ const String &operator*() const {
			return *elem_ptr;
		}
		_FORCE_INLINE_ const String *operator->() const { return elem_ptr; }
		_FORCE_INLINE_ ConstIterator &operator++() {
			elem_ptr++;
			return *this;
		}
		_FORCE_INLINE_ ConstIterator &operator--() {
			elem_ptr--;
			return *this;
		}

		_FORCE_INLINE_ bool operator==(const ConstIterator &b) const { return elem_ptr == b.elem_ptr; }
		_FORCE_INLINE_ bool operator!=(const ConstIterator &b) const { return elem_ptr != b.elem_ptr; }

		ConstIterator(const String *p_ptr) { elem_ptr = p_ptr; }
		ConstIterator() {}
		ConstIterator(const ConstIterator &p_it) { elem_ptr = p_it.elem_ptr; }

	private:
		const String *elem_ptr = nullptr;
	};

	_FORCE_INLINE_ Iterator begin() {
		return Iterator(ptrw());
	}
	_FORCE_INLINE_ Iterator end() {
		return Iterator(ptrw() + size());
	}

	_FORCE_INLINE_ ConstIterator begin() const {
		return ConstIterator(ptr());
	}
	_FORCE_INLINE_ ConstIterator end() const {
		return ConstIterator(ptr() + size());
	}

};

} // namespace godot
#endif // ! GODOT_CPP_PACKED_STRING_ARRAY_HPP