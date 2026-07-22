#pragma once

class CEnvWindVolume : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bActive; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    Vector m_vBoxMins; // offset 0x4AC, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4B8, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x4C4, size 0x1, align 1
    char _pad_04C5[0x3]; // offset 0x4C5
    int32 m_nShape; // offset 0x4C8, size 0x4, align 4
    float32 m_fWindSpeedMultiplier; // offset 0x4CC, size 0x4, align 4
    float32 m_fWindTurbulenceMultiplier; // offset 0x4D0, size 0x4, align 4
    float32 m_fWindSpeedVariationMultiplier; // offset 0x4D4, size 0x4, align 4
    float32 m_fWindDirectionVariationMultiplier; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
};
