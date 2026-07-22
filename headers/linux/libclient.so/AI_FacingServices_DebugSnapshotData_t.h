#pragma once

struct AI_FacingServices_DebugSnapshotData_t  // sizeof 0x48, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyFriendlyName MDebugSnapshotDataRenderFn}
{
    VectorWS npc_position; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    CGlobalSymbol facing_target_source; // offset 0x10, size 0x8, align 8
    VectorWS facing_target; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
    CGlobalSymbol schedule_facing_priority; // offset 0x28, size 0x8, align 8
    CGlobalSymbol strafing_source; // offset 0x30, size 0x8, align 8
    bool strafing_enabled; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
    CGlobalSymbol movement_id; // offset 0x40, size 0x8, align 8
};
