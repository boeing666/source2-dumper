#pragma once

struct VMixConvolutionDesc_t  // sizeof 0x20, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbGain; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flPreDelayMS; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flWetMix; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbLow; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbMid; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbHigh; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flLowCutoffFreq; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHighCutoffFreq; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
};
