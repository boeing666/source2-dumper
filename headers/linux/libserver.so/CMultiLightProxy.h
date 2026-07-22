#pragma once

class CMultiLightProxy : public CLogicalEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_iszLightNameFilter; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_iszLightClassFilter; // offset 0x790, size 0x8, align 8
    float32 m_flLightRadiusFilter; // offset 0x798, size 0x4, align 4
    float32 m_flBrightnessDelta; // offset 0x79C, size 0x4, align 4
    bool m_bPerformScreenFade; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    float32 m_flTargetBrightnessMultiplier; // offset 0x7A4, size 0x4, align 4
    float32 m_flCurrentBrightnessMultiplier; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CUtlVector< CHandle< CLightEntity > > m_vecLights; // offset 0x7B0, size 0x18, align 8
};
