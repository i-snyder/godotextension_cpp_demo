/**************************************************************************/
/*  audio_effect_delay.hpp                                                */
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

#ifndef GODOT_CPP_AUDIO_EFFECT_DELAY_HPP
#define GODOT_CPP_AUDIO_EFFECT_DELAY_HPP

#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/ref.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class AudioEffectDelay : public AudioEffect {
	GDEXTENSION_CLASS(AudioEffectDelay, AudioEffect)

public:

	void set_dry(double amount);
	double get_dry();
	void set_tap1_active(bool amount);
	bool is_tap1_active() const;
	void set_tap1_delay_ms(double amount);
	double get_tap1_delay_ms() const;
	void set_tap1_level_db(double amount);
	double get_tap1_level_db() const;
	void set_tap1_pan(double amount);
	double get_tap1_pan() const;
	void set_tap2_active(bool amount);
	bool is_tap2_active() const;
	void set_tap2_delay_ms(double amount);
	double get_tap2_delay_ms() const;
	void set_tap2_level_db(double amount);
	double get_tap2_level_db() const;
	void set_tap2_pan(double amount);
	double get_tap2_pan() const;
	void set_feedback_active(bool amount);
	bool is_feedback_active() const;
	void set_feedback_delay_ms(double amount);
	double get_feedback_delay_ms() const;
	void set_feedback_level_db(double amount);
	double get_feedback_level_db() const;
	void set_feedback_lowpass(double amount);
	double get_feedback_lowpass() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		AudioEffect::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_AUDIO_EFFECT_DELAY_HPP