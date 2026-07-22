#pragma once

struct VMixUtilityDesc_t  // sizeof 0x18, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixChannelOperation_t m_nOp; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputPan; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flOutputBalance; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbOutputGain; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bBassMono; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flBassFreq; // offset 0x14, size 0x4, align 4
};
