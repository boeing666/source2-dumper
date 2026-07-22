#pragma once

struct VMixDynamics3BandDesc_t  // sizeof 0x90, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbGainOutput; // offset 0x0, size 0x4, align 4
    float32 m_flRMSTimeMS; // offset 0x4, size 0x4, align 4
    float32 m_fldbKneeWidth; // offset 0x8, size 0x4, align 4
    float32 m_flDepth; // offset 0xC, size 0x4, align 4
    float32 m_flWetMix; // offset 0x10, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x14, size 0x4, align 4
    float32 m_flLowCutoffFreq; // offset 0x18, size 0x4, align 4
    float32 m_flHighCutoffFreq; // offset 0x1C, size 0x4, align 4
    bool m_bPeakMode; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    VMixDynamicsBand_t[3] m_bandDesc; // offset 0x24, size 0x6C, align 4
};
