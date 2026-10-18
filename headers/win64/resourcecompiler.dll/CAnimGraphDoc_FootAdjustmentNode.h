#pragma once

class CAnimGraphDoc_FootAdjustmentNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_facingTargetParam; // offset 0x48, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_facingTarget; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bResetChild; // offset 0x54, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAnimationDriven; // offset 0x55, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0056[0x2]; // offset 0x56
    CUtlString m_baseClipName; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    CUtlVector< CUtlString > m_clips; // offset 0x60, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName MPropertyAttrStateCallback
    float32 m_flTurnTimeMin; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flTurnTimeMax; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flStepHeightMax; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flStepHeightMaxAngle; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
