#pragma once

class CMixPlateverb : public CMixPropertyBase /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flPrefilter; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flInputDiffusion1; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flInputDiffusion2; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDecay; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDamp; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackDiffusion1; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedbackDiffusion2; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_003C[0x4]; // offset 0x3C
};
