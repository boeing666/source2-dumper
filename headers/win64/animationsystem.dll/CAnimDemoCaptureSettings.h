#pragma once

class CAnimDemoCaptureSettings  // sizeof 0x80, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    Vector2D m_vecErrorRangeSplineRotation; // offset 0x0, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector2D m_vecErrorRangeSplineTranslation; // offset 0x8, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector2D m_vecErrorRangeSplineScale; // offset 0x10, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flIkRotation_MaxSplineError; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flIkTranslation_MaxSplineError; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector2D m_vecErrorRangeQuantizationRotation; // offset 0x20, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector2D m_vecErrorRangeQuantizationTranslation; // offset 0x28, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector2D m_vecErrorRangeQuantizationScale; // offset 0x30, size 0x8, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flIkRotation_MaxQuantizationError; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flIkTranslation_MaxQuantizationError; // offset 0x3C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    CUtlString m_baseSequence; // offset 0x40, size 0x8, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttributeChoiceName
    int32 m_nBaseSequenceFrame; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    EDemoBoneSelectionMode m_boneSelectionMode; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    CUtlVector< BoneDemoCaptureSettings_t > m_bones; // offset 0x50, size 0x18, align 8 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    CUtlVector< IKDemoCaptureSettings_t > m_ikChains; // offset 0x68, size 0x18, align 8 | MPropertyFriendlyName
};
