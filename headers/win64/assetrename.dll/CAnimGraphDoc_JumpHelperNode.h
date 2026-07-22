#pragma once

class CAnimGraphDoc_JumpHelperNode : public CAnimGraphDoc_SequenceNode /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0xB0]; // offset 0x0
    CUtlString m_targetParamName; // offset 0xB0, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_targetParamID; // offset 0xB8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flJumpStartCycle; // offset 0xBC, size 0x4, align 4 | MPropertySuppressField
    float32 m_flJumpDuration; // offset 0xC0, size 0x4, align 4 | MPropertySuppressField
    bool m_bTranslateX; // offset 0xC4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTranslateY; // offset 0xC5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTranslateZ; // offset 0xC6, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleSpeed; // offset 0xC7, size 0x1, align 1 | MPropertyFriendlyName
    JumpCorrectionMethod m_eCorrectionMethod; // offset 0xC8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_00CC[0x4]; // offset 0xCC
};
