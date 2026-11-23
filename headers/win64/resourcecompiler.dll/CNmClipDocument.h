#pragma once

class CNmClipDocument : public CNmAnimDocument /*0x0*/  // sizeof 0x100, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlString m_sourceFilename; // offset 0x70, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_animationSkeletonName; // offset 0x78, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlVector< CUtlString > m_secondaryAnimationSkeletonNames; // offset 0x80, size 0x18, align 8 | MPropertyAttributeEditor MPropertyAutoExpandSelf
    CUtlLeanVector< CNmClipDocEventTrack > m_eventTracks; // offset 0x98, size 0x10, align 8 | MPropertySuppressField
    int32 m_nStartFrame; // offset 0xA8, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nEndFrame; // offset 0xAC, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    CNmClipDocument::SpeedScale_t m_speedScaleMode; // offset 0xB0, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_00B1[0x3]; // offset 0xB1
    float32 m_flDurationOverrideSeconds; // offset 0xB4, size 0x4, align 4 | MPropertyGroupName MPropertyDescription MPropertyAttrStateCallback
    float32 m_flSpeedScale; // offset 0xB8, size 0x4, align 4 | MPropertyGroupName MPropertyDescription MPropertyAttrStateCallback
    CNmClipDocument::AdditiveType_t m_additiveType; // offset 0xBC, size 0x1, align 1 | MPropertyGroupName
    char _pad_00BD[0x3]; // offset 0xBD
    CUtlString m_additiveBaseFilename; // offset 0xC0, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor MPropertyDescription MPropertyAttrStateCallback
    CNmClipDocument::AdditiveBaseFrame_t m_additiveBaseFrame; // offset 0xC8, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyAttrStateCallback
    char _pad_00C9[0x3]; // offset 0xC9
    int32 m_nAdditiveBaseFrameIdx; // offset 0xCC, size 0x4, align 4 | MPropertyGroupName MPropertyDescription MPropertyAttrStateCallback
    bool m_bUseReferencePoseForSecondaryAnimAdditives; // offset 0xD0, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyAttrStateCallback
    char _pad_00D1[0x7]; // offset 0xD1
    CUtlVector< CUtlString > m_bonesToSampleInModelSpace; // offset 0xD8, size 0x18, align 8 | MPropertyGroupName MPropertyAutoExpandSelf MPropertyDescription
    char _pad_00F0[0x10]; // offset 0xF0
};
