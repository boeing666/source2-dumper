#pragma once

struct DebugSnapshotMotorSettingsResolveTrace_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MDebugSnapshotDataSummaryFn}
{
    CGlobalSymbol requested; // offset 0x0, size 0x8, align 8
    CGlobalSymbol request_source; // offset 0x8, size 0x8, align 8
    float32 requested_speed; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< DebugSnapshotMotorSettingsResolveTrace_t::Step_t > steps; // offset 0x18, size 0x18, align 8
    CGlobalSymbol result; // offset 0x30, size 0x8, align 8
    float32 result_speed; // offset 0x38, size 0x4, align 4
    float32 result_speed_scale; // offset 0x3C, size 0x4, align 4
    CGlobalSymbol not_applied_reason; // offset 0x40, size 0x8, align 8
    int32 applied_tick; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
