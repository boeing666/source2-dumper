#pragma once

class C_EnvWindVolume : public C_BaseEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bActive; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x3]; // offset 0x601
    Vector m_vBoxMins; // offset 0x604, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x610, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x61C, size 0x1, align 1
    char _pad_061D[0x3]; // offset 0x61D
    int32 m_nShape; // offset 0x620, size 0x4, align 4
    float32 m_fWindSpeedMultiplier; // offset 0x624, size 0x4, align 4
    float32 m_fWindTurbulenceMultiplier; // offset 0x628, size 0x4, align 4
    float32 m_fWindSpeedVariationMultiplier; // offset 0x62C, size 0x4, align 4
    float32 m_fWindDirectionVariationMultiplier; // offset 0x630, size 0x4, align 4
    char _pad_0634[0x4]; // offset 0x634
};
