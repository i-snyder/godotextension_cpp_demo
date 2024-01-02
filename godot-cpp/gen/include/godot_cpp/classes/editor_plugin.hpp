/**************************************************************************/
/*  editor_plugin.hpp                                                     */
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

#ifndef GODOT_CPP_EDITOR_PLUGIN_HPP
#define GODOT_CPP_EDITOR_PLUGIN_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/editor_plugin_registration.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Button;
class Callable;
class Camera3D;
class ConfigFile;
class Control;
class EditorDebuggerPlugin;
class EditorExportPlugin;
class EditorImportPlugin;
class EditorInspectorPlugin;
class EditorInterface;
class EditorNode3DGizmoPlugin;
class EditorResourceConversionPlugin;
class EditorSceneFormatImporter;
class EditorScenePostImportPlugin;
class EditorTranslationParserPlugin;
class EditorUndoRedoManager;
class InputEvent;
class Object;
class PopupMenu;
class Script;
class ScriptCreateDialog;
class Texture2D;

class EditorPlugin : public Node {
	GDEXTENSION_CLASS(EditorPlugin, Node)

public:

	enum CustomControlContainer {
		CONTAINER_TOOLBAR = 0,
		CONTAINER_SPATIAL_EDITOR_MENU = 1,
		CONTAINER_SPATIAL_EDITOR_SIDE_LEFT = 2,
		CONTAINER_SPATIAL_EDITOR_SIDE_RIGHT = 3,
		CONTAINER_SPATIAL_EDITOR_BOTTOM = 4,
		CONTAINER_CANVAS_EDITOR_MENU = 5,
		CONTAINER_CANVAS_EDITOR_SIDE_LEFT = 6,
		CONTAINER_CANVAS_EDITOR_SIDE_RIGHT = 7,
		CONTAINER_CANVAS_EDITOR_BOTTOM = 8,
		CONTAINER_INSPECTOR_BOTTOM = 9,
		CONTAINER_PROJECT_SETTING_TAB_LEFT = 10,
		CONTAINER_PROJECT_SETTING_TAB_RIGHT = 11,
	};

	enum DockSlot {
		DOCK_SLOT_LEFT_UL = 0,
		DOCK_SLOT_LEFT_BL = 1,
		DOCK_SLOT_LEFT_UR = 2,
		DOCK_SLOT_LEFT_BR = 3,
		DOCK_SLOT_RIGHT_UL = 4,
		DOCK_SLOT_RIGHT_BL = 5,
		DOCK_SLOT_RIGHT_UR = 6,
		DOCK_SLOT_RIGHT_BR = 7,
		DOCK_SLOT_MAX = 8,
	};

	enum AfterGUIInput {
		AFTER_GUI_INPUT_PASS = 0,
		AFTER_GUI_INPUT_STOP = 1,
		AFTER_GUI_INPUT_CUSTOM = 2,
	};

	void add_control_to_container(EditorPlugin::CustomControlContainer container, Control *control);
	Button *add_control_to_bottom_panel(Control *control, const String &title);
	void add_control_to_dock(EditorPlugin::DockSlot slot, Control *control);
	void remove_control_from_docks(Control *control);
	void remove_control_from_bottom_panel(Control *control);
	void remove_control_from_container(EditorPlugin::CustomControlContainer container, Control *control);
	void add_tool_menu_item(const String &name, const Callable &callable);
	void add_tool_submenu_item(const String &name, PopupMenu *submenu);
	void remove_tool_menu_item(const String &name);
	PopupMenu *get_export_as_menu();
	void add_custom_type(const String &type, const String &base, const Ref<Script> &script, const Ref<Texture2D> &icon);
	void remove_custom_type(const String &type);
	void add_autoload_singleton(const String &name, const String &path);
	void remove_autoload_singleton(const String &name);
	int32_t update_overlays() const;
	void make_bottom_panel_item_visible(Control *item);
	void hide_bottom_panel();
	EditorUndoRedoManager *get_undo_redo();
	void add_undo_redo_inspector_hook_callback(const Callable &callable);
	void remove_undo_redo_inspector_hook_callback(const Callable &callable);
	void queue_save_layout();
	void add_translation_parser_plugin(const Ref<EditorTranslationParserPlugin> &parser);
	void remove_translation_parser_plugin(const Ref<EditorTranslationParserPlugin> &parser);
	void add_import_plugin(const Ref<EditorImportPlugin> &importer, bool first_priority = false);
	void remove_import_plugin(const Ref<EditorImportPlugin> &importer);
	void add_scene_format_importer_plugin(const Ref<EditorSceneFormatImporter> &scene_format_importer, bool first_priority = false);
	void remove_scene_format_importer_plugin(const Ref<EditorSceneFormatImporter> &scene_format_importer);
	void add_scene_post_import_plugin(const Ref<EditorScenePostImportPlugin> &scene_import_plugin, bool first_priority = false);
	void remove_scene_post_import_plugin(const Ref<EditorScenePostImportPlugin> &scene_import_plugin);
	void add_export_plugin(const Ref<EditorExportPlugin> &plugin);
	void remove_export_plugin(const Ref<EditorExportPlugin> &plugin);
	void add_node_3d_gizmo_plugin(const Ref<EditorNode3DGizmoPlugin> &plugin);
	void remove_node_3d_gizmo_plugin(const Ref<EditorNode3DGizmoPlugin> &plugin);
	void add_inspector_plugin(const Ref<EditorInspectorPlugin> &plugin);
	void remove_inspector_plugin(const Ref<EditorInspectorPlugin> &plugin);
	void add_resource_conversion_plugin(const Ref<EditorResourceConversionPlugin> &plugin);
	void remove_resource_conversion_plugin(const Ref<EditorResourceConversionPlugin> &plugin);
	void set_input_event_forwarding_always_enabled();
	void set_force_draw_over_forwarding_enabled();
	EditorInterface *get_editor_interface();
	ScriptCreateDialog *get_script_create_dialog();
	void add_debugger_plugin(const Ref<EditorDebuggerPlugin> &script);
	void remove_debugger_plugin(const Ref<EditorDebuggerPlugin> &script);
	String get_plugin_version() const;
	virtual bool _forward_canvas_gui_input(const Ref<InputEvent> &event);
	virtual void _forward_canvas_draw_over_viewport(Control *viewport_control);
	virtual void _forward_canvas_force_draw_over_viewport(Control *viewport_control);
	virtual int32_t _forward_3d_gui_input(Camera3D *viewport_camera, const Ref<InputEvent> &event);
	virtual void _forward_3d_draw_over_viewport(Control *viewport_control);
	virtual void _forward_3d_force_draw_over_viewport(Control *viewport_control);
	virtual String _get_plugin_name() const;
	virtual Ref<Texture2D> _get_plugin_icon() const;
	virtual bool _has_main_screen() const;
	virtual void _make_visible(bool visible);
	virtual void _edit(Object *object);
	virtual bool _handles(Object *object) const;
	virtual Dictionary _get_state() const;
	virtual void _set_state(const Dictionary &state);
	virtual void _clear();
	virtual String _get_unsaved_status(const String &for_scene) const;
	virtual void _save_external_data();
	virtual void _apply_changes();
	virtual PackedStringArray _get_breakpoints() const;
	virtual void _set_window_layout(const Ref<ConfigFile> &configuration);
	virtual void _get_window_layout(const Ref<ConfigFile> &configuration);
	virtual bool _build();
	virtual void _enable_plugin();
	virtual void _disable_plugin();
protected:
	template <class T, class B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_forward_canvas_gui_input),decltype(&T::_forward_canvas_gui_input)>) {
			BIND_VIRTUAL_METHOD(T, _forward_canvas_gui_input);
		}
		if constexpr (!std::is_same_v<decltype(&B::_forward_canvas_draw_over_viewport),decltype(&T::_forward_canvas_draw_over_viewport)>) {
			BIND_VIRTUAL_METHOD(T, _forward_canvas_draw_over_viewport);
		}
		if constexpr (!std::is_same_v<decltype(&B::_forward_canvas_force_draw_over_viewport),decltype(&T::_forward_canvas_force_draw_over_viewport)>) {
			BIND_VIRTUAL_METHOD(T, _forward_canvas_force_draw_over_viewport);
		}
		if constexpr (!std::is_same_v<decltype(&B::_forward_3d_gui_input),decltype(&T::_forward_3d_gui_input)>) {
			BIND_VIRTUAL_METHOD(T, _forward_3d_gui_input);
		}
		if constexpr (!std::is_same_v<decltype(&B::_forward_3d_draw_over_viewport),decltype(&T::_forward_3d_draw_over_viewport)>) {
			BIND_VIRTUAL_METHOD(T, _forward_3d_draw_over_viewport);
		}
		if constexpr (!std::is_same_v<decltype(&B::_forward_3d_force_draw_over_viewport),decltype(&T::_forward_3d_force_draw_over_viewport)>) {
			BIND_VIRTUAL_METHOD(T, _forward_3d_force_draw_over_viewport);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_plugin_name),decltype(&T::_get_plugin_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_plugin_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_plugin_icon),decltype(&T::_get_plugin_icon)>) {
			BIND_VIRTUAL_METHOD(T, _get_plugin_icon);
		}
		if constexpr (!std::is_same_v<decltype(&B::_has_main_screen),decltype(&T::_has_main_screen)>) {
			BIND_VIRTUAL_METHOD(T, _has_main_screen);
		}
		if constexpr (!std::is_same_v<decltype(&B::_make_visible),decltype(&T::_make_visible)>) {
			BIND_VIRTUAL_METHOD(T, _make_visible);
		}
		if constexpr (!std::is_same_v<decltype(&B::_edit),decltype(&T::_edit)>) {
			BIND_VIRTUAL_METHOD(T, _edit);
		}
		if constexpr (!std::is_same_v<decltype(&B::_handles),decltype(&T::_handles)>) {
			BIND_VIRTUAL_METHOD(T, _handles);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_state),decltype(&T::_get_state)>) {
			BIND_VIRTUAL_METHOD(T, _get_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_state),decltype(&T::_set_state)>) {
			BIND_VIRTUAL_METHOD(T, _set_state);
		}
		if constexpr (!std::is_same_v<decltype(&B::_clear),decltype(&T::_clear)>) {
			BIND_VIRTUAL_METHOD(T, _clear);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_unsaved_status),decltype(&T::_get_unsaved_status)>) {
			BIND_VIRTUAL_METHOD(T, _get_unsaved_status);
		}
		if constexpr (!std::is_same_v<decltype(&B::_save_external_data),decltype(&T::_save_external_data)>) {
			BIND_VIRTUAL_METHOD(T, _save_external_data);
		}
		if constexpr (!std::is_same_v<decltype(&B::_apply_changes),decltype(&T::_apply_changes)>) {
			BIND_VIRTUAL_METHOD(T, _apply_changes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_breakpoints),decltype(&T::_get_breakpoints)>) {
			BIND_VIRTUAL_METHOD(T, _get_breakpoints);
		}
		if constexpr (!std::is_same_v<decltype(&B::_set_window_layout),decltype(&T::_set_window_layout)>) {
			BIND_VIRTUAL_METHOD(T, _set_window_layout);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_window_layout),decltype(&T::_get_window_layout)>) {
			BIND_VIRTUAL_METHOD(T, _get_window_layout);
		}
		if constexpr (!std::is_same_v<decltype(&B::_build),decltype(&T::_build)>) {
			BIND_VIRTUAL_METHOD(T, _build);
		}
		if constexpr (!std::is_same_v<decltype(&B::_enable_plugin),decltype(&T::_enable_plugin)>) {
			BIND_VIRTUAL_METHOD(T, _enable_plugin);
		}
		if constexpr (!std::is_same_v<decltype(&B::_disable_plugin),decltype(&T::_disable_plugin)>) {
			BIND_VIRTUAL_METHOD(T, _disable_plugin);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(EditorPlugin::CustomControlContainer);
VARIANT_ENUM_CAST(EditorPlugin::DockSlot);
VARIANT_ENUM_CAST(EditorPlugin::AfterGUIInput);

#endif // ! GODOT_CPP_EDITOR_PLUGIN_HPP