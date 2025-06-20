/**************************************************************************/
/*  rich_text_label.hpp                                                   */
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

#ifndef GODOT_CPP_RICH_TEXT_LABEL_HPP
#define GODOT_CPP_RICH_TEXT_LABEL_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Font;
class PackedStringArray;
class PopupMenu;
class RichTextEffect;
class Texture2D;
class VScrollBar;
struct Vector2;

class RichTextLabel : public Control {
	GDEXTENSION_CLASS(RichTextLabel, Control)

public:

	enum ListType {
		LIST_NUMBERS = 0,
		LIST_LETTERS = 1,
		LIST_ROMAN = 2,
		LIST_DOTS = 3,
	};

	enum MenuItems {
		MENU_COPY = 0,
		MENU_SELECT_ALL = 1,
		MENU_MAX = 2,
	};

	enum ImageUpdateMask : uint64_t {
		UPDATE_TEXTURE = 1,
		UPDATE_SIZE = 2,
		UPDATE_COLOR = 4,
		UPDATE_ALIGNMENT = 8,
		UPDATE_REGION = 16,
		UPDATE_PAD = 32,
		UPDATE_TOOLTIP = 64,
		UPDATE_WIDTH_IN_PERCENT = 128,
	};

	String get_parsed_text() const;
	void add_text(const String &text);
	void set_text(const String &text);
	void add_image(const Ref<Texture2D> &image, int32_t width = 0, int32_t height = 0, const Color &color = Color(1, 1, 1, 1), InlineAlignment inline_align = (InlineAlignment)5, const Rect2 &region = Rect2(0, 0, 0, 0), const Variant &key = nullptr, bool pad = false, const String &tooltip = String(), bool size_in_percent = false);
	void update_image(const Variant &key, BitField<RichTextLabel::ImageUpdateMask> mask, const Ref<Texture2D> &image, int32_t width = 0, int32_t height = 0, const Color &color = Color(1, 1, 1, 1), InlineAlignment inline_align = (InlineAlignment)5, const Rect2 &region = Rect2(0, 0, 0, 0), bool pad = false, const String &tooltip = String(), bool size_in_percent = false);
	void newline();
	bool remove_paragraph(int32_t paragraph);
	void push_font(const Ref<Font> &font, int32_t font_size = 0);
	void push_font_size(int32_t font_size);
	void push_normal();
	void push_bold();
	void push_bold_italics();
	void push_italics();
	void push_mono();
	void push_color(const Color &color);
	void push_outline_size(int32_t outline_size);
	void push_outline_color(const Color &color);
	void push_paragraph(HorizontalAlignment alignment, Control::TextDirection base_direction = (Control::TextDirection)0, const String &language = String(), TextServer::StructuredTextParser st_parser = (TextServer::StructuredTextParser)0, BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)163, const PackedFloat32Array &tab_stops = PackedFloat32Array());
	void push_indent(int32_t level);
	void push_list(int32_t level, RichTextLabel::ListType type, bool capitalize, const String &bullet = "•");
	void push_meta(const Variant &data);
	void push_hint(const String &description);
	void push_language(const String &language);
	void push_underline();
	void push_strikethrough();
	void push_table(int32_t columns, InlineAlignment inline_align = (InlineAlignment)0, int32_t align_to_row = -1);
	void push_dropcap(const String &string, const Ref<Font> &font, int32_t size, const Rect2 &dropcap_margins = Rect2(0, 0, 0, 0), const Color &color = Color(1, 1, 1, 1), int32_t outline_size = 0, const Color &outline_color = Color(0, 0, 0, 0));
	void set_table_column_expand(int32_t column, bool expand, int32_t ratio = 1);
	void set_cell_row_background_color(const Color &odd_row_bg, const Color &even_row_bg);
	void set_cell_border_color(const Color &color);
	void set_cell_size_override(const Vector2 &min_size, const Vector2 &max_size);
	void set_cell_padding(const Rect2 &padding);
	void push_cell();
	void push_fgcolor(const Color &fgcolor);
	void push_bgcolor(const Color &bgcolor);
	void push_customfx(const Ref<RichTextEffect> &effect, const Dictionary &env);
	void push_context();
	void pop_context();
	void pop();
	void pop_all();
	void clear();
	void set_structured_text_bidi_override(TextServer::StructuredTextParser parser);
	TextServer::StructuredTextParser get_structured_text_bidi_override() const;
	void set_structured_text_bidi_override_options(const Array &args);
	Array get_structured_text_bidi_override_options() const;
	void set_text_direction(Control::TextDirection direction);
	Control::TextDirection get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_autowrap_mode(TextServer::AutowrapMode autowrap_mode);
	TextServer::AutowrapMode get_autowrap_mode() const;
	void set_meta_underline(bool enable);
	bool is_meta_underlined() const;
	void set_hint_underline(bool enable);
	bool is_hint_underlined() const;
	void set_scroll_active(bool active);
	bool is_scroll_active() const;
	void set_scroll_follow(bool follow);
	bool is_scroll_following() const;
	VScrollBar *get_v_scroll_bar();
	void scroll_to_line(int32_t line);
	void scroll_to_paragraph(int32_t paragraph);
	void scroll_to_selection();
	void set_tab_size(int32_t spaces);
	int32_t get_tab_size() const;
	void set_fit_content(bool enabled);
	bool is_fit_content_enabled() const;
	void set_selection_enabled(bool enabled);
	bool is_selection_enabled() const;
	void set_context_menu_enabled(bool enabled);
	bool is_context_menu_enabled() const;
	void set_shortcut_keys_enabled(bool enabled);
	bool is_shortcut_keys_enabled() const;
	void set_deselect_on_focus_loss_enabled(bool enable);
	bool is_deselect_on_focus_loss_enabled() const;
	void set_drag_and_drop_selection_enabled(bool enable);
	bool is_drag_and_drop_selection_enabled() const;
	int32_t get_selection_from() const;
	int32_t get_selection_to() const;
	void select_all();
	String get_selected_text() const;
	void deselect();
	void parse_bbcode(const String &bbcode);
	void append_text(const String &bbcode);
	String get_text() const;
	bool is_ready() const;
	void set_threaded(bool threaded);
	bool is_threaded() const;
	void set_progress_bar_delay(int32_t delay_ms);
	int32_t get_progress_bar_delay() const;
	void set_visible_characters(int32_t amount);
	int32_t get_visible_characters() const;
	TextServer::VisibleCharactersBehavior get_visible_characters_behavior() const;
	void set_visible_characters_behavior(TextServer::VisibleCharactersBehavior behavior);
	void set_visible_ratio(double ratio);
	double get_visible_ratio() const;
	int32_t get_character_line(int32_t character);
	int32_t get_character_paragraph(int32_t character);
	int32_t get_total_character_count() const;
	void set_use_bbcode(bool enable);
	bool is_using_bbcode() const;
	int32_t get_line_count() const;
	int32_t get_visible_line_count() const;
	int32_t get_paragraph_count() const;
	int32_t get_visible_paragraph_count() const;
	int32_t get_content_height() const;
	int32_t get_content_width() const;
	double get_line_offset(int32_t line);
	double get_paragraph_offset(int32_t paragraph);
	Dictionary parse_expressions_for_values(const PackedStringArray &expressions);
	void set_effects(const Array &effects);
	Array get_effects();
	void install_effect(const Variant &effect);
	PopupMenu *get_menu() const;
	bool is_menu_visible() const;
	void menu_option(int32_t option);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(RichTextLabel::ListType);
VARIANT_ENUM_CAST(RichTextLabel::MenuItems);
VARIANT_BITFIELD_CAST(RichTextLabel::ImageUpdateMask);

#endif // ! GODOT_CPP_RICH_TEXT_LABEL_HPP