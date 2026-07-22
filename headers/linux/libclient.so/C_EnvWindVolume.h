#pragma once

class C_EnvWindVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bActive; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    Vector m_vBoxMins; // offset 0x770, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x77C, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    int32 m_nShape; // offset 0x78C, size 0x4, align 4
    float32 m_fWindSpeedMultiplier; // offset 0x790, size 0x4, align 4
    float32 m_fWindTurbulenceMultiplier; // offset 0x794, size 0x4, align 4
    float32 m_fWindSpeedVariationMultiplier; // offset 0x798, size 0x4, align 4
    float32 m_fWindDirectionVariationMultiplier; // offset 0x79C, size 0x4, align 4
};
