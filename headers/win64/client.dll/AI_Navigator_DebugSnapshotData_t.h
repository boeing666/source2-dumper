#pragma once

struct AI_Navigator_DebugSnapshotData_t  // sizeof 0x80, align 0x8 (client) {MGetKV3ClassDefaults MPropertyFriendlyName MDebugSnapshotDataRenderFn}
{
    CGlobalSymbol s_movement_id; // offset 0x0, size 0x8, align 8
    uint32 s_movement_serial_number; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    DebugSnapshotSourceLocation_t s_goal_source_location; // offset 0x10, size 0x38, align 255
    VectorWS last_waypoint_pos; // offset 0x48, size 0xC, align 4
    VectorWS goal_location; // offset 0x54, size 0xC, align 4
    CUtlVector< AI_Navigator_DebugSnapshotData_t::Waypoint_t > waypoints; // offset 0x60, size 0x18, align 8
    CGlobalSymbol s_arrival_movement_gait_set; // offset 0x78, size 0x8, align 8
};
