#pragma once

struct AI_BaseNPCAnimGraph_DebugSnapshotData_t  // sizeof 0x48, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    int32 ag2_update_id; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CGlobalSymbol e_action_desired; // offset 0x8, size 0x8, align 8
    CGlobalSymbol e_action_handshake_restart; // offset 0x10, size 0x8, align 8
    CGlobalSymbol e_action_handshake_body_authority_current; // offset 0x18, size 0x8, align 8
    CGlobalSymbol e_action_handshake_body_authority_desired; // offset 0x20, size 0x8, align 8
    CGlobalSymbol e_movement_type_desired; // offset 0x28, size 0x8, align 8
    CGlobalSymbol e_movement_handshake_restart; // offset 0x30, size 0x8, align 8
    CGlobalSymbol e_movement_handshake_body_authority_current; // offset 0x38, size 0x8, align 8
    CGlobalSymbol e_movement_handshake_body_authority_desired; // offset 0x40, size 0x8, align 8
};
