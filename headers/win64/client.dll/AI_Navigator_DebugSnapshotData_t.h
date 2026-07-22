#pragma once

struct AI_Navigator_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MDebugSnapshotDataRenderable MDebugSnapshotDataRenderByDefault}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol s_npc_nav_authority; // offset 0x8, size 0x8, align 8
    VectorWS goal_actual_pos; // offset 0x10, size 0xC, align 4
    VectorWS goal_base_pos; // offset 0x1C, size 0xC, align 4
    CUtlVector< AI_Navigator_DebugSnapshotData_t::Waypoint_t > waypoints; // offset 0x28, size 0x18, align 8
};
