/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/listener/v3/quic_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/listener/v3/quic_config.upbdefs.h"
#include "envoy/config/listener/v3/quic_config.upb.h"

extern _upb_DefPool_Init envoy_config_core_v3_base_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_extension_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_protocol_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_duration_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[1184] = {'\n', '*', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', '/', 'v', 
'3', '/', 'q', 'u', 'i', 'c', '_', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'p', 'r', 'o', 't', 'o', '\022', '\030', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', '.', 'v', '3', '\032', '\037', 'e', 'n', 'v', 
'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 
'o', 't', 'o', '\032', '$', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', 
'/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 'e', 'n', 'v', 'o', 'y', '/', 'c', 
'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '.', 'p', 'r', 
'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'd', 'u', 'r', 'a', 
't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 
'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 
'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 
'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 
't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\266', '\005', '\n', '\023', 'Q', 'u', 'i', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 
'O', 'p', 't', 'i', 'o', 'n', 's', '\022', ']', '\n', '\025', 'q', 'u', 'i', 'c', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '_', 
'o', 'p', 't', 'i', 'o', 'n', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', ')', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'Q', 'u', 'i', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 
'p', 't', 'i', 'o', 'n', 's', 'R', '\023', 'q', 'u', 'i', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 't', 'i', 'o', 
'n', 's', '\022', '<', '\n', '\014', 'i', 'd', 'l', 'e', '_', 't', 'i', 'm', 'e', 'o', 'u', 't', '\030', '\002', ' ', '\001', '(', '\013', '2', 
'\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 
'n', 'R', '\013', 'i', 'd', 'l', 'e', 'T', 'i', 'm', 'e', 'o', 'u', 't', '\022', 'S', '\n', '\030', 'c', 'r', 'y', 'p', 't', 'o', '_', 
'h', 'a', 'n', 'd', 's', 'h', 'a', 'k', 'e', '_', 't', 'i', 'm', 'e', 'o', 'u', 't', '\030', '\003', ' ', '\001', '(', '\013', '2', '\031', 
'.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 
'R', '\026', 'c', 'r', 'y', 'p', 't', 'o', 'H', 'a', 'n', 'd', 's', 'h', 'a', 'k', 'e', 'T', 'i', 'm', 'e', 'o', 'u', 't', '\022', 
'B', '\n', '\007', 'e', 'n', 'a', 'b', 'l', 'e', 'd', '\030', '\004', ' ', '\001', '(', '\013', '2', '(', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'R', 'u', 'n', 't', 'i', 'm', 'e', 'F', 'e', 'a', 
't', 'u', 'r', 'e', 'F', 'l', 'a', 'g', 'R', '\007', 'e', 'n', 'a', 'b', 'l', 'e', 'd', '\022', '}', '\n', ')', 'p', 'a', 'c', 'k', 
'e', 't', 's', '_', 't', 'o', '_', 'r', 'e', 'a', 'd', '_', 't', 'o', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 
'_', 'c', 'o', 'u', 'n', 't', '_', 'r', 'a', 't', 'i', 'o', '\030', '\005', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 
'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'B', '\007', 
'\372', 'B', '\004', '*', '\002', '(', '\001', 'R', '#', 'p', 'a', 'c', 'k', 'e', 't', 's', 'T', 'o', 'R', 'e', 'a', 'd', 'T', 'o', 'C', 
'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'C', 'o', 'u', 'n', 't', 'R', 'a', 't', 'i', 'o', '\022', '\\', '\n', '\024', 'c', 'r', 
'y', 'p', 't', 'o', '_', 's', 't', 'r', 'e', 'a', 'm', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\006', ' ', '\001', '(', '\013', '2', 
'*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'T', 'y', 
'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 'R', '\022', 'c', 'r', 'y', 'p', 't', 
'o', 'S', 't', 'r', 'e', 'a', 'm', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'Z', '\n', '\023', 'p', 'r', 'o', 'o', 'f', '_', 's', 'o', 
'u', 'r', 'c', 'e', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\007', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'T', 'y', 'p', 'e', 'd', 'E', 'x', 't', 'e', 
'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 'R', '\021', 'p', 'r', 'o', 'o', 'f', 'S', 'o', 'u', 'r', 'c', 'e', 'C', 
'o', 'n', 'f', 'i', 'g', ':', '0', '\232', '\305', '\210', '\036', '+', '\n', ')', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', 
'2', '.', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', '.', 'Q', 'u', 'i', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'O', 'p', 
't', 'i', 'o', 'n', 's', 'B', '\217', '\001', '\n', '&', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 
'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', '.', 'v', '3', 'B', '\017', 
'Q', 'u', 'i', 'c', 'C', 'o', 'n', 'f', 'i', 'g', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'J', 'g', 'i', 't', 'h', 'u', 'b', 
'.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 
'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'l', 'i', 's', 't', 
'e', 'n', 'e', 'r', '/', 'v', '3', ';', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', 
'\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[9] = {
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_config_core_v3_extension_proto_upbdefinit,
  &envoy_config_core_v3_protocol_proto_upbdefinit,
  &google_protobuf_duration_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_listener_v3_quic_config_proto_upbdefinit = {
  deps,
  &envoy_config_listener_v3_quic_config_proto_upb_file_layout,
  "envoy/config/listener/v3/quic_config.proto",
  UPB_STRINGVIEW_INIT(descriptor, 1184)
};
