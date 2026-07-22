#pragma once

class CMixFlanger : public CMixPropertyBase /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flDelay; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedback; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flFeedfoward; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModRate; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flModDepth; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bPhaseInvert; // offset 0x34, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0035[0x3]; // offset 0x35
    float32 m_flGlideTime; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bAntialiasing; // offset 0x3C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flGain; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0044[0x4]; // offset 0x44
};
