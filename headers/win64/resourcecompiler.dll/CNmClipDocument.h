#pragma once

class CNmClipDocument : public CNmAnimDocument /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlString m_sourceFilename; // offset 0x70, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_animationSkeletonName; // offset 0x78, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlVector< CUtlString > m_secondaryAnimationSkeletonNames; // offset 0x80, size 0x18, align 8 | MPropertyAttributeEditor MPropertyAutoExpandSelf
    CUtlLeanVector< CNmClipDocEventTrack > m_eventTracks; // offset 0x98, size 0x10, align 8 | MPropertySuppressField
    int32 m_nStartFrame; // offset 0xA8, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    int32 m_nEndFrame; // offset 0xAC, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    float32 m_flDurationOverrideSeconds; // offset 0xB0, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    CNmClipDocument::AdditiveType_t m_additiveType; // offset 0xB4, size 0x1, align 1 | MPropertyGroupName
    char _pad_00B5[0x3]; // offset 0xB5
    CUtlString m_additiveBaseFilename; // offset 0xB8, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor MPropertyDescription
    CNmClipDocument::AdditiveBaseFrame_t m_additiveBaseFrame; // offset 0xC0, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_00C1[0x3]; // offset 0xC1
    int32 m_nAdditiveBaseFrameIdx; // offset 0xC4, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    CUtlVector< CUtlString > m_bonesToSampleInModelSpace; // offset 0xC8, size 0x18, align 8 | MPropertyGroupName MPropertyAutoExpandSelf MPropertyDescription
    char _pad_00E0[0x10]; // offset 0xE0
};
