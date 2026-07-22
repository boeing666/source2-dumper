#pragma once

class CMixVocoder : public CMixPropertyBase /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nBandCount; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBandwidth; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldBModGain; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flAttackTime; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReleaseTime; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFreqRangeStart; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFreqRangeEnd; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldBUnvoicedGain; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    int32 m_nDebugBand; // offset 0x40, size 0x4, align 4
    bool m_bPeakMode; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
};
