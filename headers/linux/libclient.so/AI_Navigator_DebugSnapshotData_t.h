#pragma once

struct AI_Navigator_DebugSnapshotData_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MPropertyFriendlyName MDebugSnapshotDataRenderFn}
{
    CGlobalSymbol s_movement_id; // offset 0x0, size 0x8, align 8
    uint32 s_movement_serial_number; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString s_goal_source_location; // offset 0x10, size 0x8, align 8
    VectorWS last_waypoint_pos; // offset 0x18, size 0xC, align 4
    VectorWS goal_location; // offset 0x24, size 0xC, align 4
    CUtlVector< AI_Navigator_DebugSnapshotData_t::Waypoint_t > waypoints; // offset 0x30, size 0x18, align 8
    CGlobalSymbol s_arrival_movement_gait_set; // offset 0x48, size 0x8, align 8
};
