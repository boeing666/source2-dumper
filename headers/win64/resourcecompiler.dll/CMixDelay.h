#pragma once

class CMixDelay : public CMixPropertyBase /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flDelay; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_fldbDirectGain; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_fldbDelayGain; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_fldbFeedbackGain; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flWidth; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bEnableFilter; // offset 0x38, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0039[0x7]; // offset 0x39
    CUtlString m_filterType; // offset 0x40, size 0x8, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName
    float32 m_flFrequency; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flQ; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_fldbGain; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0054[0x4]; // offset 0x54
};
