#pragma once

class C_PlayerVisibility : public C_BaseEntity /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    float32 m_flVisibilityStrength; // offset 0x600, size 0x4, align 4
    float32 m_flFogDistanceMultiplier; // offset 0x604, size 0x4, align 4
    float32 m_flFogMaxDensityMultiplier; // offset 0x608, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x60C, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x610, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x611, size 0x1, align 1
    char _pad_0612[0x1E]; // offset 0x612
};
