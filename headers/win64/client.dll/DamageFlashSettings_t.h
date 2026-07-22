#pragma once

struct DamageFlashSettings_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flDuration; // offset 0x0, size 0x4, align 4
    float32 m_flCoverage; // offset 0x4, size 0x4, align 4
    float32 m_flHardness; // offset 0x8, size 0x4, align 4
    float32 m_flBrightness; // offset 0xC, size 0x4, align 4
    float32 m_flBrightnessInLightSensitivityMode; // offset 0x10, size 0x4, align 4
    bool m_bHeadOnly; // offset 0x14, size 0x1, align 1
    Color m_Color; // offset 0x15, size 0x4, align 1
    char _pad_0019[0x3]; // offset 0x19
};
