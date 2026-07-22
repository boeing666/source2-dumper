#pragma once

class CPlayerVisibility : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flVisibilityStrength; // offset 0x498, size 0x4, align 4
    float32 m_flFogDistanceMultiplier; // offset 0x49C, size 0x4, align 4
    float32 m_flFogMaxDensityMultiplier; // offset 0x4A0, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x4A4, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x4A8, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x4A9, size 0x1, align 1
    char _pad_04AA[0x6]; // offset 0x4AA
};
