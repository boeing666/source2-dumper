#pragma once

struct VMixDynamicsCompressorDesc_t  // sizeof 0x24, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbOutputGain; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbCompressionThreshold; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbKneeWidth; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCompressionRatio; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttackTimeMS; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReleaseTimeMS; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRMSTimeMS; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWetMix; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPeakMode; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x3]; // offset 0x21
};
