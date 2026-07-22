#pragma once

class CAnimGraphDoc_BlendNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlVector< CBlendNodeChild > m_children; // offset 0x50, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    AnimValueSource m_blendValueSource; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_006C[0x4]; // offset 0x6C
    CUtlString m_paramName; // offset 0x70, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    BlendKeyType m_blendKeyType; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLockBlendOnReset; // offset 0x80, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSyncCycles; // offset 0x81, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x82, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockWhenWaning; // offset 0x83, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsAngle; // offset 0x84, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0085[0x3]; // offset 0x85
    CAnimInputDamping m_damping; // offset 0x88, size 0x18, align 8 | MPropertyFriendlyName
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // offset 0xA0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_00A4[0x4]; // offset 0xA4
};
