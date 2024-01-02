/**************************************************************************/
/*  menu_bar.hpp                                                          */
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

#ifndef GODOT_CPP_MENU_BAR_HPP
#define GODOT_CPP_MENU_BAR_HPP

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class PopupMenu;

class MenuBar : public Control {
	GDEXTENSION_CLASS(MenuBar, Control)

public:

	void set_switch_on_hover(bool enable);
	bool is_switch_on_hover();
	void set_disable_shortcuts(bool disabled);
	void set_prefer_global_menu(bool enabled);
	bool is_prefer_global_menu() const;
	bool is_native_menu() const;
	int32_t get_menu_count() const;
	void set_text_direction(Control::TextDirection direction);
	Control::TextDirection get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_flat(bool enabled);
	bool is_flat() const;
	void set_start_index(int32_t enabled);
	int32_t get_start_index() const;
	void set_menu_title(int32_t menu, const String &title);
	String get_menu_title(int32_t menu) const;
	void set_menu_tooltip(int32_t menu, const String &tooltip);
	String get_menu_tooltip(int32_t menu) const;
	void set_menu_disabled(int32_t menu, bool disabled);
	bool is_menu_disabled(int32_t menu) const;
	void set_menu_hidden(int32_t menu, bool hidden);
	bool is_menu_hidden(int32_t menu) const;
	PopupMenu *get_menu_popup(int32_t menu) const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_MENU_BAR_HPP