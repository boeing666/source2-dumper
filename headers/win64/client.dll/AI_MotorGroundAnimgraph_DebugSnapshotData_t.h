#pragma once

struct AI_MotorGroundAnimgraph_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol state; // offset 0x8, size 0x8, align 8
    bool b_has_path; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 f_remaining_ground_path_length; // offset 0x14, size 0x4, align 4
    float32 f_current_speed; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CGlobalSymbol move_type; // offset 0x20, size 0x8, align 8
    float32 f_move_heading_actual; // offset 0x28, size 0x4, align 4
    float32 f_move_heading_desired; // offset 0x2C, size 0x4, align 4
    CUtlVector< AI_MotorGroundAnimgraph_DebugSnapshotData_t::Event_t > vec_events; // offset 0x30, size 0x18, align 8
};
