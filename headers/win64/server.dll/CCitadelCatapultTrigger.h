#pragma once

class CCitadelCatapultTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    VectorWS m_vLaunchTarget; // offset 0xA00, size 0xC, align 4
    float32 m_flLaunchSpeed; // offset 0xA0C, size 0x4, align 4
    CUtlSymbolLarge m_nameTarget; // offset 0xA10, size 0x8, align 8
    bool m_bPickupTrailEnabled; // offset 0xA18, size 0x1, align 1
    char _pad_0A19[0x7]; // offset 0xA19
    CUtlSymbolLarge m_iszTrailPickupSubclass; // offset 0xA20, size 0x8, align 8
    int32 m_nTrailPickupCount; // offset 0xA28, size 0x4, align 4
    float32 m_flTrailStartDelay; // offset 0xA2C, size 0x4, align 4
    float32 m_flTrailSpawnInterval; // offset 0xA30, size 0x4, align 4
    bool m_bTrailAutoSpace; // offset 0xA34, size 0x1, align 1
    char _pad_0A35[0x3]; // offset 0xA35
    float32 m_flTrailTrajectoryTimeSpacing; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x1C]; // offset 0xA3C
};
