#pragma once

class CMixDynamics3Band : public CMixPropertyBase /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_fldbOutputGain; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flRMSTime; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDepth; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flWetMix; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTimeScale; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_fldbKneeWidth; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLowCutoffFreq; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHighCutoffFreq; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPeakMode; // offset 0x44, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0045[0x3]; // offset 0x45
    int32 m_nSelectedPage; // offset 0x48, size 0x4, align 4 | MPropertyHideField
    VMixDynamicsBand_t[3] m_bands; // offset 0x4C, size 0x6C, align 4
};
