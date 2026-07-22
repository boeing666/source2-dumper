#pragma once

class CEnvWindVolume : public CBaseEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bActive; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    Vector m_vBoxMins; // offset 0x78C, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x798, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    int32 m_nShape; // offset 0x7A8, size 0x4, align 4
    float32 m_fWindSpeedMultiplier; // offset 0x7AC, size 0x4, align 4
    float32 m_fWindTurbulenceMultiplier; // offset 0x7B0, size 0x4, align 4
    float32 m_fWindSpeedVariationMultiplier; // offset 0x7B4, size 0x4, align 4
    float32 m_fWindDirectionVariationMultiplier; // offset 0x7B8, size 0x4, align 4
    char _pad_07BC[0x4]; // offset 0x7BC
};
