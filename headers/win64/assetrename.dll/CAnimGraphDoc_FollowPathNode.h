#pragma once

class CAnimGraphDoc_FollowPathNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    float32 m_flBlendOutTime; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBlockNonPathMovement; // offset 0x4C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bStopFeetAtGoal; // offset 0x4D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bScaleSpeed; // offset 0x4E, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_004F[0x1]; // offset 0x4F
    float32 m_flScale; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange MPropertyAttrStateCallback
    float32 m_flMinAngle; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange MPropertyAttrStateCallback
    float32 m_flMaxAngle; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange MPropertyAttrStateCallback
    float32 m_flSpeedScaleBlending; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bTurnToFace; // offset 0x60, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0061[0x3]; // offset 0x61
    AnimValueSource m_facingTarget; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    CUtlString m_paramName; // offset 0x68, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_param; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    float32 m_flTurnToFaceOffset; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange MPropertyAttrStateCallback
    CAnimInputDamping m_damping; // offset 0x78, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
