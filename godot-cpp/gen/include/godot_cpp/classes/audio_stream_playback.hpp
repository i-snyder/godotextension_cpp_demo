/**************************************************************************/
/*  audio_stream_playback.hpp                                             */
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

#ifndef GODOT_CPP_AUDIO_STREAM_PLAYBACK_HPP
#define GODOT_CPP_AUDIO_STREAM_PLAYBACK_HPP

#include <godot_cpp/classes/audio_frame.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class AudioStreamPlayback : public RefCounted {
	GDEXTENSION_CLASS(AudioStreamPlayback, RefCounted)

public:

	virtual void _start(double from_pos);
	virtual void _stop();
	virtual bool _is_playing() const;
	virtual int32_t _get_loop_count() const;
	virtual double _get_playback_position() const;
	virtual void _seek(double position);
	virtual int32_t _mix(AudioFrame *buffer, double rate_scale, int32_t frames);
	virtual void _tag_used_streams();
protected:
	template <class T, class B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_start),decltype(&T::_start)>) {
			BIND_VIRTUAL_METHOD(T, _start);
		}
		if constexpr (!std::is_same_v<decltype(&B::_stop),decltype(&T::_stop)>) {
			BIND_VIRTUAL_METHOD(T, _stop);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_playing),decltype(&T::_is_playing)>) {
			BIND_VIRTUAL_METHOD(T, _is_playing);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_loop_count),decltype(&T::_get_loop_count)>) {
			BIND_VIRTUAL_METHOD(T, _get_loop_count);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_playback_position),decltype(&T::_get_playback_position)>) {
			BIND_VIRTUAL_METHOD(T, _get_playback_position);
		}
		if constexpr (!std::is_same_v<decltype(&B::_seek),decltype(&T::_seek)>) {
			BIND_VIRTUAL_METHOD(T, _seek);
		}
		if constexpr (!std::is_same_v<decltype(&B::_mix),decltype(&T::_mix)>) {
			BIND_VIRTUAL_METHOD(T, _mix);
		}
		if constexpr (!std::is_same_v<decltype(&B::_tag_used_streams),decltype(&T::_tag_used_streams)>) {
			BIND_VIRTUAL_METHOD(T, _tag_used_streams);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_AUDIO_STREAM_PLAYBACK_HPP