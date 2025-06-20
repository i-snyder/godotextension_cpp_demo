/**************************************************************************/
/*  web_socket_multiplayer_peer.cpp                                       */
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

#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/web_socket_peer.hpp>

namespace godot {

Error WebSocketMultiplayerPeer::create_client(const String &url, const Ref<TLSOptions> &tls_client_options) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("create_client")._native_ptr(), 1966198364);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &url, (tls_client_options != nullptr ? &tls_client_options->_owner : nullptr));
}

Error WebSocketMultiplayerPeer::create_server(int32_t port, const String &bind_address, const Ref<TLSOptions> &tls_server_options) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("create_server")._native_ptr(), 2400822951);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded, &bind_address, (tls_server_options != nullptr ? &tls_server_options->_owner : nullptr));
}

Ref<WebSocketPeer> WebSocketMultiplayerPeer::get_peer(int32_t peer_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_peer")._native_ptr(), 1381378851);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<WebSocketPeer>());
	int64_t peer_id_encoded;
	PtrToArg<int64_t>::encode(peer_id, &peer_id_encoded);
	return Ref<WebSocketPeer>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<WebSocketPeer>(_gde_method_bind, _owner, &peer_id_encoded));
}

String WebSocketMultiplayerPeer::get_peer_address(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_peer_address")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &id_encoded);
}

int32_t WebSocketMultiplayerPeer::get_peer_port(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_peer_port")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded);
}

PackedStringArray WebSocketMultiplayerPeer::get_supported_protocols() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_supported_protocols")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void WebSocketMultiplayerPeer::set_supported_protocols(const PackedStringArray &protocols) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_supported_protocols")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &protocols);
}

PackedStringArray WebSocketMultiplayerPeer::get_handshake_headers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_handshake_headers")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void WebSocketMultiplayerPeer::set_handshake_headers(const PackedStringArray &protocols) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_handshake_headers")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &protocols);
}

int32_t WebSocketMultiplayerPeer::get_inbound_buffer_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_inbound_buffer_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void WebSocketMultiplayerPeer::set_inbound_buffer_size(int32_t buffer_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_inbound_buffer_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t buffer_size_encoded;
	PtrToArg<int64_t>::encode(buffer_size, &buffer_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &buffer_size_encoded);
}

int32_t WebSocketMultiplayerPeer::get_outbound_buffer_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_outbound_buffer_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void WebSocketMultiplayerPeer::set_outbound_buffer_size(int32_t buffer_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_outbound_buffer_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t buffer_size_encoded;
	PtrToArg<int64_t>::encode(buffer_size, &buffer_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &buffer_size_encoded);
}

double WebSocketMultiplayerPeer::get_handshake_timeout() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_handshake_timeout")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void WebSocketMultiplayerPeer::set_handshake_timeout(double timeout) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_handshake_timeout")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double timeout_encoded;
	PtrToArg<double>::encode(timeout, &timeout_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &timeout_encoded);
}

void WebSocketMultiplayerPeer::set_max_queued_packets(int32_t max_queued_packets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("set_max_queued_packets")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_queued_packets_encoded;
	PtrToArg<int64_t>::encode(max_queued_packets, &max_queued_packets_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_queued_packets_encoded);
}

int32_t WebSocketMultiplayerPeer::get_max_queued_packets() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(WebSocketMultiplayerPeer::get_class_static()._native_ptr(), StringName("get_max_queued_packets")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 