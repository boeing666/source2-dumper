#pragma once

class CMixBoxverb2 : public CMixPropertyBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flSizeMax; // offset 0x20, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flSizeMin; // offset 0x24, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flComplexity; // offset 0x28, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModDepth; // offset 0x2C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModRate; // offset 0x30, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    bool m_bParallel; // offset 0x34, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    char _pad_0035[0x3]; // offset 0x35
    VMixFilterDesc_t m_filterType; // offset 0x38, size 0x10, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyGroupName
    float32 m_flWidth; // offset 0x48, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flHeight; // offset 0x4C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDepth; // offset 0x50, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackScale; // offset 0x54, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackWidth; // offset 0x58, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackHeight; // offset 0x5C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackDepth; // offset 0x60, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flWetMix; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputGain; // offset 0x68, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTaps; // offset 0x6C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeRange
};
