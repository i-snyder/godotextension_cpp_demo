/**************************************************************************/
/*  worker_thread_pool.cpp                                                */
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

#include <godot_cpp/classes/worker_thread_pool.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>

namespace godot {

WorkerThreadPool *WorkerThreadPool::get_singleton() {
	static WorkerThreadPool *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(WorkerThreadPool::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<WorkerThreadPool *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &WorkerThreadPool::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

int64_t WorkerThreadPool::add_task(const Callable &action, bool high_priority, const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("add_task")._native_ptr(), 3745067146);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t high_priority_encoded;
	PtrToArg<bool>::encode(high_priority, &high_priority_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &action, &high_priority_encoded, &description);
}

bool WorkerThreadPool::is_task_completed(int64_t task_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("is_task_completed")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t task_id_encoded;
	PtrToArg<int64_t>::encode(task_id, &task_id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &task_id_encoded);
}

Error WorkerThreadPool::wait_for_task_completion(int64_t task_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("wait_for_task_completion")._native_ptr(), 844576869);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t task_id_encoded;
	PtrToArg<int64_t>::encode(task_id, &task_id_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &task_id_encoded);
}

int64_t WorkerThreadPool::add_group_task(const Callable &action, int32_t elements, int32_t tasks_needed, bool high_priority, const String &description) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("add_group_task")._native_ptr(), 1801953219);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t elements_encoded;
	PtrToArg<int64_t>::encode(elements, &elements_encoded);
	int64_t tasks_needed_encoded;
	PtrToArg<int64_t>::encode(tasks_needed, &tasks_needed_encoded);
	int8_t high_priority_encoded;
	PtrToArg<bool>::encode(high_priority, &high_priority_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &action, &elements_encoded, &tasks_needed_encoded, &high_priority_encoded, &description);
}

bool WorkerThreadPool::is_group_task_completed(int64_t group_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("is_group_task_completed")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t group_id_encoded;
	PtrToArg<int64_t>::encode(group_id, &group_id_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &group_id_encoded);
}

uint32_t WorkerThreadPool::get_group_processed_element_count(int64_t group_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("get_group_processed_element_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t group_id_encoded;
	PtrToArg<int64_t>::encode(group_id, &group_id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &group_id_encoded);
}

void WorkerThreadPool::wait_for_group_task_completion(int64_t group_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WorkerThreadPool::get_class_static()._native_ptr(), StringName("wait_for_group_task_completion")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t group_id_encoded;
	PtrToArg<int64_t>::encode(group_id, &group_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group_id_encoded);
}


} // namespace godot 