#pragma once

class CAnimGraphDoc_FootLockNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CUtlVector< CFootLockItem > m_items; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    CUtlString m_hipBoneName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flBlendTime; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bApplyFootRotationLimits; // offset 0x6C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetChild; // offset 0x6D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_006E[0x2]; // offset 0x6E
    IKSolverType m_ikSolverType; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    bool m_bAlwaysUseFallbackHinge; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bApplyLegTwistLimits; // offset 0x75, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    char _pad_0076[0x2]; // offset 0x76
    float32 m_flMaxLegTwist; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flStrideCurveScale; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    float32 m_flStrideCurveLimitScale; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    bool m_bEnableVerticalCurvedPaths; // offset 0x84, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    bool m_bModulateStepHeight; // offset 0x85, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0086[0x2]; // offset 0x86
    float32 m_flStepHeightIncreaseScale; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flStepHeightDecreaseScale; // offset 0x8C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bEnableHipShift; // offset 0x90, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0091[0x3]; // offset 0x91
    float32 m_flHipShiftScale; // offset 0x94, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    CAnimInputDamping m_hipShiftDamping; // offset 0x98, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName
    bool m_bApplyTilt; // offset 0xB0, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_00B1[0x3]; // offset 0xB1
    float32 m_flTiltPlanePitchSpringStrength; // offset 0xB4, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flTiltPlaneRollSpringStrength; // offset 0xB8, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    bool m_bEnableLockBreaking; // offset 0xBC, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_00BD[0x3]; // offset 0xBD
    float32 m_flLockBreakTolerance; // offset 0xC0, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flLockBreakBlendTime; // offset 0xC4, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    bool m_bEnableStretching; // offset 0xC8, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_00C9[0x3]; // offset 0xC9
    float32 m_flMaxStretchAmount; // offset 0xCC, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flStretchExtensionScale; // offset 0xD0, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange
    bool m_bEnableGroundTracing; // offset 0xD4, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_00D5[0x3]; // offset 0xD5
    float32 m_flTraceAngleBlend; // offset 0xD8, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeRange MPropertyAttrStateCallback
    bool m_bApplyHipDrop; // offset 0xDC, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_00DD[0x3]; // offset 0xDD
    float32 m_flMaxFootHeight; // offset 0xE0, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flExtensionScale; // offset 0xE4, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    CAnimInputDamping m_hipDampingSettings; // offset 0xE8, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bEnableRootHeightDamping; // offset 0x100, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0101[0x7]; // offset 0x101
    CAnimInputDamping m_rootHeightDamping; // offset 0x108, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flMaxRootHeightOffset; // offset 0x120, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    float32 m_flMinRootHeightOffset; // offset 0x124, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
