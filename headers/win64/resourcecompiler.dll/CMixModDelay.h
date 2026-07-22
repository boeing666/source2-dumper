#pragma once

class CMixModDelay : public CMixPropertyBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool m_bPhaseInvert; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x3]; // offset 0x21
    float32 m_flGlideTime; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDelay; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flFeedback; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flGain; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModRate; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModDepth; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    VMixFilterType_t m_filterType; // offset 0x3C, size 0x2, align 2 | MPropertyFriendlyName MPropertyGroupName
    char _pad_003E[0x2]; // offset 0x3E
    float32 m_flFrequency; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flQ; // offset 0x44, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flFilterGain; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    bool m_bAntialiasing; // offset 0x4C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_004D[0x3]; // offset 0x4D
};
