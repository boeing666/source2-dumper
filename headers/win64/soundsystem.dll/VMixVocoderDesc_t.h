#pragma once

struct VMixVocoderDesc_t  // sizeof 0x28, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    int32 m_nBandCount; // offset 0x0, size 0x4, align 4
    float32 m_flBandwidth; // offset 0x4, size 0x4, align 4
    float32 m_fldBModGain; // offset 0x8, size 0x4, align 4
    float32 m_flFreqRangeStart; // offset 0xC, size 0x4, align 4
    float32 m_flFreqRangeEnd; // offset 0x10, size 0x4, align 4
    float32 m_fldBUnvoicedGain; // offset 0x14, size 0x4, align 4
    float32 m_flAttackTimeMS; // offset 0x18, size 0x4, align 4
    float32 m_flReleaseTimeMS; // offset 0x1C, size 0x4, align 4
    int32 m_nDebugBand; // offset 0x20, size 0x4, align 4
    bool m_bPeakMode; // offset 0x24, size 0x1, align 1
    char _pad_0025[0x3]; // offset 0x25
};
