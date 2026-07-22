#pragma once

struct AI_DefaultNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol s_npc_current_ability; // offset 0x8, size 0x8, align 8
    CGlobalSymbol s_npc_tactic_current; // offset 0x10, size 0x8, align 8
    CGlobalSymbol s_npc_tactic_phase; // offset 0x18, size 0x8, align 8
    CUtlVector< CGlobalSymbol > tactic_interrupt_conditions; // offset 0x20, size 0x18, align 8
    AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t path_query; // offset 0x38, size 0x28, align 8
    CUtlVector< AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t > path_queries_speculative; // offset 0x60, size 0x18, align 8
};
