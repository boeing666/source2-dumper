#pragma once

struct AI_GroundRootMotionMotor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x278, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName MDebugSnapshotDataSortPriority MDebugSnapshotDataStartCollapsed}
{
    char _pad_0000[0x8]; // offset 0x0
    DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait_set; // offset 0x8, size 0x50, align 8
    DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait; // offset 0x58, size 0x50, align 8
    DebugSnapshotMotorSettingsResolveTrace_t desired_stance; // offset 0xA8, size 0x50, align 8
    DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait_set; // offset 0xF8, size 0x50, align 8
    DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait; // offset 0x148, size 0x50, align 8
    DebugSnapshotMotorSettingsResolveTrace_t current_stance; // offset 0x198, size 0x50, align 8
    CGlobalSymbol movement_setting_id; // offset 0x1E8, size 0x8, align 8
    DebugSnapshotVDataRef_t current_movement_settings_vdata; // offset 0x1F0, size 0x10, align 8
    DebugSnapshotVDataRef_t desired_movement_settings_vdata; // offset 0x200, size 0x10, align 8
    CGlobalSymbol pending_settings_changes; // offset 0x210, size 0x8, align 8
    CGlobalSymbol settings_change_transition; // offset 0x218, size 0x8, align 8
    bool b_goal_completion_allowed; // offset 0x220, size 0x1, align 1
    char _pad_0221[0x7]; // offset 0x221
    CGlobalSymbol state; // offset 0x228, size 0x8, align 8
    int32 n_state_active_tick_count; // offset 0x230, size 0x4, align 4
    bool b_has_path; // offset 0x234, size 0x1, align 1
    char _pad_0235[0x3]; // offset 0x235
    float32 f_remaining_ground_path_length; // offset 0x238, size 0x4, align 4
    float32 f_current_speed; // offset 0x23C, size 0x4, align 4
    CGlobalSymbol move_type; // offset 0x240, size 0x8, align 8
    float32 f_forward_strafing_angle_actual; // offset 0x248, size 0x4, align 4
    float32 f_forward_strafing_angle_desired; // offset 0x24C, size 0x4, align 4
    float32 f_forward_strafing_angle_committed; // offset 0x250, size 0x4, align 4
    float32 f_current_lean; // offset 0x254, size 0x4, align 4
    float32 f_target_lean; // offset 0x258, size 0x4, align 4
    char _pad_025C[0x4]; // offset 0x25C
    CUtlVector< AI_GroundRootMotionMotor_DebugSnapshotData_t::Event_t > vec_events; // offset 0x260, size 0x18, align 8
};
