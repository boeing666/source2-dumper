#pragma once

struct VMixDynamicsDesc_t  // sizeof 0x30, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbGain; // offset 0x0, size 0x4, align 4
    float32 m_fldbNoiseGateThreshold; // offset 0x4, size 0x4, align 4
    float32 m_fldbCompressionThreshold; // offset 0x8, size 0x4, align 4
    float32 m_fldbLimiterThreshold; // offset 0xC, size 0x4, align 4
    float32 m_fldbKneeWidth; // offset 0x10, size 0x4, align 4
    float32 m_flRatio; // offset 0x14, size 0x4, align 4
    float32 m_flLimiterRatio; // offset 0x18, size 0x4, align 4
    float32 m_flAttackTimeMS; // offset 0x1C, size 0x4, align 4
    float32 m_flReleaseTimeMS; // offset 0x20, size 0x4, align 4
    float32 m_flRMSTimeMS; // offset 0x24, size 0x4, align 4
    float32 m_flWetMix; // offset 0x28, size 0x4, align 4
    bool m_bPeakMode; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
};
