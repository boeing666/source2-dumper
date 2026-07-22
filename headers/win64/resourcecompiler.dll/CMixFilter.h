#pragma once

class CMixFilter : public CMixPropertyBase /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_filterType; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nChannels; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flFrequency; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flQ; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbGain; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    VMixFilterSlope_t m_nFilterSlope; // offset 0x38, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0039[0x7]; // offset 0x39
};
