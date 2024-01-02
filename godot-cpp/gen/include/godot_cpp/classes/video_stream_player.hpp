/**************************************************************************/
/*  video_stream_player.hpp                                               */
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

#ifndef GODOT_CPP_VIDEO_STREAM_PLAYER_HPP
#define GODOT_CPP_VIDEO_STREAM_PLAYER_HPP

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Texture2D;
class VideoStream;

class VideoStreamPlayer : public Control {
	GDEXTENSION_CLASS(VideoStreamPlayer, Control)

public:

	void set_stream(const Ref<VideoStream> &stream);
	Ref<VideoStream> get_stream() const;
	void play();
	void stop();
	bool is_playing() const;
	void set_paused(bool paused);
	bool is_paused() const;
	void set_loop(bool loop);
	bool has_loop() const;
	void set_volume(double volume);
	double get_volume() const;
	void set_volume_db(double db);
	double get_volume_db() const;
	void set_audio_track(int32_t track);
	int32_t get_audio_track() const;
	String get_stream_name() const;
	double get_stream_length() const;
	void set_stream_position(double position);
	double get_stream_position() const;
	void set_autoplay(bool enabled);
	bool has_autoplay() const;
	void set_expand(bool enable);
	bool has_expand() const;
	void set_buffering_msec(int32_t msec);
	int32_t get_buffering_msec() const;
	void set_bus(const StringName &bus);
	StringName get_bus() const;
	Ref<Texture2D> get_video_texture() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_VIDEO_STREAM_PLAYER_HPP