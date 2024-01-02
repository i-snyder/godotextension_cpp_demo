/**************************************************************************/
/*  option_button.hpp                                                     */
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

#ifndef GODOT_CPP_OPTION_BUTTON_HPP
#define GODOT_CPP_OPTION_BUTTON_HPP

#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class PopupMenu;
class Texture2D;

class OptionButton : public Button {
	GDEXTENSION_CLASS(OptionButton, Button)

public:

	void add_item(const String &label, int32_t id = -1);
	void add_icon_item(const Ref<Texture2D> &texture, const String &label, int32_t id = -1);
	void set_item_text(int32_t idx, const String &text);
	void set_item_icon(int32_t idx, const Ref<Texture2D> &texture);
	void set_item_disabled(int32_t idx, bool disabled);
	void set_item_id(int32_t idx, int32_t id);
	void set_item_metadata(int32_t idx, const Variant &metadata);
	void set_item_tooltip(int32_t idx, const String &tooltip);
	String get_item_text(int32_t idx) const;
	Ref<Texture2D> get_item_icon(int32_t idx) const;
	int32_t get_item_id(int32_t idx) const;
	int32_t get_item_index(int32_t id) const;
	Variant get_item_metadata(int32_t idx) const;
	String get_item_tooltip(int32_t idx) const;
	bool is_item_disabled(int32_t idx) const;
	bool is_item_separator(int32_t idx) const;
	void add_separator(const String &text = String());
	void clear();
	void select(int32_t idx);
	int32_t get_selected() const;
	int32_t get_selected_id() const;
	Variant get_selected_metadata() const;
	void remove_item(int32_t idx);
	PopupMenu *get_popup() const;
	void show_popup();
	void set_item_count(int32_t count);
	int32_t get_item_count() const;
	bool has_selectable_items() const;
	int32_t get_selectable_item(bool from_last = false) const;
	void set_fit_to_longest_item(bool fit);
	bool is_fit_to_longest_item() const;
	void set_allow_reselect(bool allow);
	bool get_allow_reselect() const;
	void set_disable_shortcuts(bool disabled);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Button::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_OPTION_BUTTON_HPP