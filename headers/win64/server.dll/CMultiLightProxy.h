#pragma once

class CMultiLightProxy : public CLogicalEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_iszLightNameFilter; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_iszLightClassFilter; // offset 0x4A8, size 0x8, align 8
    float32 m_flLightRadiusFilter; // offset 0x4B0, size 0x4, align 4
    float32 m_flBrightnessDelta; // offset 0x4B4, size 0x4, align 4
    bool m_bPerformScreenFade; // offset 0x4B8, size 0x1, align 1
    char _pad_04B9[0x3]; // offset 0x4B9
    float32 m_flTargetBrightnessMultiplier; // offset 0x4BC, size 0x4, align 4
    float32 m_flCurrentBrightnessMultiplier; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CUtlVector< CHandle< CLightEntity > > m_vecLights; // offset 0x4C8, size 0x18, align 8
};
