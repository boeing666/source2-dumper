#pragma once

struct AI_GroundRootMotionMotor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol desired_movement_gait_set; // offset 0x8, size 0x8, align 8
    CGlobalSymbol desired_movement_gait; // offset 0x10, size 0x8, align 8
    CGlobalSymbol current_movement_gait_set; // offset 0x18, size 0x8, align 8
    CGlobalSymbol current_movement_gait; // offset 0x20, size 0x8, align 8
    CGlobalSymbol movement_setting_id; // offset 0x28, size 0x8, align 8
    CGlobalSymbol gait_switch_blocked_reason; // offset 0x30, size 0x8, align 8
    bool b_goal_completion_allowed; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
    CGlobalSymbol state; // offset 0x40, size 0x8, align 8
    int32 n_state_active_tick_count; // offset 0x48, size 0x4, align 4
    bool b_has_path; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    float32 f_remaining_ground_path_length; // offset 0x50, size 0x4, align 4
    float32 f_current_speed; // offset 0x54, size 0x4, align 4
    CGlobalSymbol move_type; // offset 0x58, size 0x8, align 8
    float32 f_forward_strafing_angle_actual; // offset 0x60, size 0x4, align 4
    float32 f_forward_strafing_angle_desired; // offset 0x64, size 0x4, align 4
    float32 f_current_lean; // offset 0x68, size 0x4, align 4
    float32 f_target_lean; // offset 0x6C, size 0x4, align 4
    CUtlVector< AI_GroundRootMotionMotor_DebugSnapshotData_t::Event_t > vec_events; // offset 0x70, size 0x18, align 8
};
