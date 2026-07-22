#pragma once

struct AI_Motor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CGlobalSymbol current_movement_gait_set; // offset 0x8, size 0x8, align 8
    CGlobalSymbol current_movement_gait; // offset 0x10, size 0x8, align 8
    CGlobalSymbol movement_setting_id; // offset 0x18, size 0x8, align 8
};
