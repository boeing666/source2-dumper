#pragma once

struct VMixDynamicsBand_t  // sizeof 0x24, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_fldbGainInput; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbGainOutput; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbThresholdBelow; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fldbThresholdAbove; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRatioBelow; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRatioAbove; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttackTimeMS; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReleaseTimeMS; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bEnable; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSolo; // offset 0x21, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0022[0x2]; // offset 0x22
};
