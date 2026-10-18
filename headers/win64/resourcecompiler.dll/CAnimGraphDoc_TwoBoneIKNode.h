#pragma once

class CAnimGraphDoc_TwoBoneIKNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_ikChainName; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bAutoDetectHingeAxis; // offset 0x50, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0051[0x3]; // offset 0x51
    IkEndEffectorType m_endEffectorType; // offset 0x54, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAutoRebuildOnChange
    CUtlString m_endEffectorAttachmentName; // offset 0x58, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    IkTargetType m_targetType; // offset 0x60, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_attachmentName; // offset 0x68, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CUtlString m_targetBoneName; // offset 0x70, size 0x8, align 8 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CUtlString m_targetParamName; // offset 0x78, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_targetParam; // offset 0x80, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bMatchTargetOrientation; // offset 0x84, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0085[0x3]; // offset 0x85
    CUtlString m_rotationParamName; // offset 0x88, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_rotationParam; // offset 0x90, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bConstrainTwist; // offset 0x94, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0095[0x3]; // offset 0x95
    float32 m_flMaxTwist; // offset 0x98, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_009C[0x4]; // offset 0x9C
};
