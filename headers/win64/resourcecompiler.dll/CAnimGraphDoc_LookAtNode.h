#pragma once

class CAnimGraphDoc_LookAtNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    AnimVectorSource m_target; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_paramName; // offset 0x50, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    bool m_bIsPosition; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_005D[0x3]; // offset 0x5D
    CUtlString m_weightParamName; // offset 0x60, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_weightParam; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_006C[0x4]; // offset 0x6C
    CUtlString m_lookatChainName; // offset 0x70, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_attachmentName; // offset 0x78, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bRotateYawForward; // offset 0x80, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0081[0x3]; // offset 0x81
    float32 m_flYawLimit; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flPitchLimit; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyGroupName
    bool m_bMaintainUpDirection; // offset 0x8C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetBase; // offset 0x8D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockWhenWaning; // offset 0x8E, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseHysteresis; // offset 0x8F, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flHysteresisInnerAngle; // offset 0x90, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flHysteresisOuterAngle; // offset 0x94, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    CAnimInputDamping m_damping; // offset 0x98, size 0x18, align 8 | MPropertyFriendlyName
};
