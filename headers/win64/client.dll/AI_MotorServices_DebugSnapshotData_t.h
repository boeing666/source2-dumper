#pragma once

struct AI_MotorServices_DebugSnapshotData_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MPropertyFriendlyName MDebugSnapshotDataRenderFn}
{
    CGlobalSymbol active_motor; // offset 0x0, size 0x8, align 8
    float32 desired_speed; // offset 0x8, size 0x4, align 4
    Vector motor_velocity; // offset 0xC, size 0xC, align 4
    CUtlVector< AI_MotorServices_DebugSnapshotData_t::MotorPathWaypoint_t > motor_path; // offset 0x18, size 0x18, align 8
};
