#pragma once

struct AI_BaseNPCAnimGraph_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol e_action_desired; // offset 0x8, size 0x8, align 8
    bool b_action_restart; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
    CGlobalSymbol e_movement_type_desired; // offset 0x18, size 0x8, align 8
    bool b_movement_type_restart; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
