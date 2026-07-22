#pragma once

struct VMixDualCompressorDesc_t  // sizeof 0x34, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flRMSTimeMS; // offset 0x0, size 0x4, align 4
    float32 m_fldbKneeWidth; // offset 0x4, size 0x4, align 4
    float32 m_flWetMix; // offset 0x8, size 0x4, align 4
    bool m_bPeakMode; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    VMixDynamicsBand_t m_bandDesc; // offset 0x10, size 0x24, align 4
};
