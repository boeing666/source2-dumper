#pragma once

class CAnimGraphDoc_FootPinningNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlVector< CFootPinningItem > m_items; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    FootPinningTimingSource m_eTimingSource; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBlendTime; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLockBreakDistance; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxLegStraightAmount; // offset 0x6C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bApplyFootRotationLimits; // offset 0x70, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0071[0x7]; // offset 0x71
    CUtlString m_hipBoneName; // offset 0x78, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyGroupName
    bool m_bApplyLegTwistLimits; // offset 0x80, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0081[0x3]; // offset 0x81
    float32 m_flMaxLegTwist; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    bool m_bResetChild; // offset 0x88, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0089[0x7]; // offset 0x89
};
