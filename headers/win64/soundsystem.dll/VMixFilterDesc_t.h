#pragma once

struct VMixFilterDesc_t  // sizeof 0x10, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbGain; // offset 0x0, size 0x4, align 4
    float32 m_flCutoffFreq; // offset 0x4, size 0x4, align 4
    float32 m_flQ; // offset 0x8, size 0x4, align 4
    VMixFilterType_t m_nFilterType; // offset 0xC, size 0x1, align 1
    VMixFilterSlope_t m_nFilterSlope; // offset 0xD, size 0x1, align 1
    bool m_bEnabled; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
};
