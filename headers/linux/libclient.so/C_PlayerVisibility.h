#pragma once

class C_PlayerVisibility : public C_BaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    float32 m_flVisibilityStrength; // offset 0x76C, size 0x4, align 4
    float32 m_flFogDistanceMultiplier; // offset 0x770, size 0x4, align 4
    float32 m_flFogMaxDensityMultiplier; // offset 0x774, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x778, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x77C, size 0x1, align 1
    bool m_bIsEnabled; // offset 0x77D, size 0x1, align 1
    char _pad_077E[0x22]; // offset 0x77E
};
