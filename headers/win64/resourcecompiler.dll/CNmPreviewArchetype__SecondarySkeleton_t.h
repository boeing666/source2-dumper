#pragma once

struct CNmPreviewArchetype::SecondarySkeleton_t  // sizeof 0x20, align 0x8 (animdoclib) {MGetKV3ClassDefaults}
{
    CUtlString m_skeleton; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_previewModel; // offset 0x8, size 0x8, align 8 | MPropertyAttributeEditor
    CUtlString m_bodyPartChoiceName; // offset 0x10, size 0x8, align 8
    CUtlString m_attachToBoneName; // offset 0x18, size 0x8, align 8
};
