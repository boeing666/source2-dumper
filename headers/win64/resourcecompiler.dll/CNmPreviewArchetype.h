#pragma once

class CNmPreviewArchetype  // sizeof 0x40, align 0x8 (animdoclib) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType}
{
public:
    CUtlString m_primarySkeleton; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor MPropertyGroupName MPropertyAutoExpandSelf
    CUtlString m_previewModel; // offset 0x8, size 0x8, align 8 | MPropertyAttributeEditor MPropertyGroupName MPropertyAutoExpandSelf
    CUtlString m_bodyPartChoiceName; // offset 0x10, size 0x8, align 8 | MPropertyGroupName MPropertyAutoExpandSelf
    CUtlVector< CNmPreviewArchetype::SecondarySkeleton_t > m_secondarySkeletonSettings; // offset 0x18, size 0x18, align 8 | MPropertyGroupName MPropertyAutoExpandSelf
    char _pad_0030[0x10]; // offset 0x30
};
