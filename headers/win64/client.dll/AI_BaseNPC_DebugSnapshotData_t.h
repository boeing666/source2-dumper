#pragma once

struct AI_BaseNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol npc_state; // offset 0x8, size 0x8, align 8
    CHandle< C_BaseEntity > current_enemy; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString s_current_schedule; // offset 0x18, size 0x8, align 8
    CGlobalSymbol s_current_task; // offset 0x20, size 0x8, align 8
    CUtlString s_schedule_interrupt_reason; // offset 0x28, size 0x8, align 8
    CUtlString s_schedule_fail_reason; // offset 0x30, size 0x8, align 8
    CUtlVector< CGlobalSymbol > conditions; // offset 0x38, size 0x18, align 8
    CUtlVector< CGlobalSymbol > anim_events; // offset 0x50, size 0x18, align 8
    CGlobalSymbol e_action_body_section; // offset 0x68, size 0x8, align 8
    CGlobalSymbol e_movement_body_section; // offset 0x70, size 0x8, align 8
};
