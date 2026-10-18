#pragma once

class CAnimGraphDoc_MotionMatchingNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItemGroup > > m_groups; // offset 0x48, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CSmartPtr< CAnimGraphDoc_MotionMetric > > m_metrics; // offset 0x60, size 0x18, align 8 | MPropertySuppressField
    CBlendCurve m_blendCurve; // offset 0x78, size 0x8, align 4 | MPropertySuppressField
    int32 m_nRandomSeed; // offset 0x80, size 0x4, align 4 | MPropertySuppressField
    float32 m_flSampleRate; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bSearchEveryTick; // offset 0x88, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0089[0x3]; // offset 0x89
    float32 m_flSearchInterval; // offset 0x8C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bSearchWhenMotionEnds; // offset 0x90, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bSearchWhenGoalChanges; // offset 0x91, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    char _pad_0092[0x2]; // offset 0x92
    float32 m_flBlendTime; // offset 0x94, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSelectionThreshold; // offset 0x98, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReselectionTimeWindow; // offset 0x9C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLockSelectionWhenWaning; // offset 0xA0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableRotationCorrection; // offset 0xA1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGoalAssist; // offset 0xA2, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_00A3[0x1]; // offset 0xA3
    float32 m_flGoalAssistDistance; // offset 0xA4, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flGoalAssistTolerance; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bEnableDistanceScaling; // offset 0xAC, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_00AD[0x3]; // offset 0xAD
    float32 m_flDistanceScale_OuterRadius; // offset 0xB0, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flDistanceScale_InnerRadius; // offset 0xB4, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flDistanceScale_MaxScale; // offset 0xB8, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flDistanceScale_MinScale; // offset 0xBC, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    CAnimInputDamping m_distanceScale_Damping; // offset 0xC0, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
