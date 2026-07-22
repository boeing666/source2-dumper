#pragma once

struct CrownfallSurvivorsLightingOverride_t  // sizeof 0x30, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 flTimeRemaining; // offset 0x0, size 0x4, align 4
    bool bOverrideBackToDefault; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    CrownfallSurvivorsLightingEnvironment_t Lighting; // offset 0x8, size 0x28, align 4
};
