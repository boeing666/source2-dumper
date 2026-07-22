#pragma once

class CFilterStage  // sizeof 0x18, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_filterType; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flFrequency; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flQ; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbGain; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    VMixFilterSlope_t m_nFilterSlope; // offset 0x14, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnable; // offset 0x15, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0016[0x2]; // offset 0x16
};
