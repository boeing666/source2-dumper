#pragma once

struct AI_BaseNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x178, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol npc_state; // offset 0x8, size 0x8, align 8
    CHandle< C_BaseEntity > current_enemy; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString s_current_schedule; // offset 0x18, size 0x8, align 8
    CGlobalSymbol s_current_task; // offset 0x20, size 0x8, align 8
    CUtlString s_prev_schedule; // offset 0x28, size 0x8, align 8
    CUtlString s_npc_current_movement; // offset 0x30, size 0x8, align 8
    CUtlString s_last_task_end_location; // offset 0x38, size 0x8, align 8
    CUtlVector< CGlobalSymbol > conditions; // offset 0x40, size 0x18, align 8
    CUtlVector< CGlobalSymbol > anim_events; // offset 0x58, size 0x18, align 8
    AI_BaseNPCAnimGraph_DebugSnapshotData_t animgraph; // offset 0x70, size 0x40, align 8
    AI_Navigator_DebugSnapshotData_t navigator; // offset 0xB0, size 0x50, align 8
    AI_MotorServices_DebugSnapshotData_t motorServices; // offset 0x100, size 0x30, align 8
    AI_FacingServices_DebugSnapshotData_t facingServices; // offset 0x130, size 0x48, align 8
};
