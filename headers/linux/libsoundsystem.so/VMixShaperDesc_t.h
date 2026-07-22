#pragma once

struct VMixShaperDesc_t  // sizeof 0x14, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    int32 m_nShape; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbDrive; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbOutputGain; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flWetMix; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOversampleFactor; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
};
