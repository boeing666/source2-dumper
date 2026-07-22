#pragma once

struct CNmSkeletonDocument::SecondarySkeleton_t  // sizeof 0x10, align 0x8 (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_skeleton; // offset 0x0, size 0x8, align 8 | MPropertyAttributeEditor
    CGlobalSymbol m_attachToBoneID; // offset 0x8, size 0x8, align 8 | MPropertyDescription
};
