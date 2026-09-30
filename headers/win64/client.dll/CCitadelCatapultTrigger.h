#pragma once

class CCitadelCatapultTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCAC]; // offset 0x0
    VectorWS m_vLaunchTarget; // offset 0xCAC, size 0xC, align 4
    float32 m_flLaunchSpeed; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0x4]; // offset 0xCBC
    CUtlSymbolLarge m_nameTarget; // offset 0xCC0, size 0x8, align 8
    bool m_bPickupTrailEnabled; // offset 0xCC8, size 0x1, align 1
    char _pad_0CC9[0x7]; // offset 0xCC9
    CUtlSymbolLarge m_iszTrailPickupSubclass; // offset 0xCD0, size 0x8, align 8
    int32 m_nTrailPickupCount; // offset 0xCD8, size 0x4, align 4
    float32 m_flTrailStartDelay; // offset 0xCDC, size 0x4, align 4
    float32 m_flTrailSpawnInterval; // offset 0xCE0, size 0x4, align 4
    bool m_bTrailAutoSpace; // offset 0xCE4, size 0x1, align 1
    char _pad_0CE5[0x3]; // offset 0xCE5
    float32 m_flTrailTrajectoryTimeSpacing; // offset 0xCE8, size 0x4, align 4
    char _pad_0CEC[0x4]; // offset 0xCEC
};
