#pragma once

class CAnimGraphDoc_BoneMaskNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlString m_weightListName; // offset 0x40, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CAnimGraphDoc_NodeConnection m_inputConnection1; // offset 0x48, size 0x8, align 4 | MPropertySuppressField
    CAnimGraphDoc_NodeConnection m_inputConnection2; // offset 0x50, size 0x8, align 4 | MPropertySuppressField
    BoneMaskBlendSpace m_blendSpace; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseBlendScale; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_005D[0x3]; // offset 0x5D
    AnimValueSource m_blendValueSource; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_blendParameterName; // offset 0x68, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_blendParameter; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    BinaryNodeTiming m_timingBehavior; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    float32 m_flTimingBlend; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyAttrStateCallback
    float32 m_flRootMotionBlend; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    BinaryNodeChildOption m_footMotionTiming; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bResetChild1; // offset 0x84, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetChild2; // offset 0x85, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0086[0x2]; // offset 0x86
};
