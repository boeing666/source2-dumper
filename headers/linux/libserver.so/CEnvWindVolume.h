#pragma once

class CEnvWindVolume : public CBaseEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bActive; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    Vector m_vBoxMins; // offset 0x77C, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x788, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
    int32 m_nShape; // offset 0x798, size 0x4, align 4
    float32 m_fWindSpeedMultiplier; // offset 0x79C, size 0x4, align 4
    float32 m_fWindTurbulenceMultiplier; // offset 0x7A0, size 0x4, align 4
    float32 m_fWindSpeedVariationMultiplier; // offset 0x7A4, size 0x4, align 4
    float32 m_fWindDirectionVariationMultiplier; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
};
