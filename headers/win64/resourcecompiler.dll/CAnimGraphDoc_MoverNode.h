#pragma once

class CAnimGraphDoc_MoverNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    bool m_bApplyMovement; // offset 0x48, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0049[0x7]; // offset 0x49
    CUtlString m_moveVectorParamName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_moveVectorParam; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bOrientMovement; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_005D[0x3]; // offset 0x5D
    CUtlString m_moveHeadingParamName; // offset 0x60, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_moveHeadingParam; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bAdditive; // offset 0x6C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTurnToFace; // offset 0x6D, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_006E[0x2]; // offset 0x6E
    AnimValueSource m_facingTarget; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_0074[0x4]; // offset 0x74
    CUtlString m_paramName; // offset 0x78, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bLimitOnly; // offset 0x84, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback MPropertyAutoRebuildOnChange
    char _pad_0085[0x3]; // offset 0x85
    float32 m_flTurnToFaceOffset; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flTurnToFaceLimit; // offset 0x8C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyGroupName MPropertyAttrStateCallback
    CAnimInputDamping m_damping; // offset 0x90, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
