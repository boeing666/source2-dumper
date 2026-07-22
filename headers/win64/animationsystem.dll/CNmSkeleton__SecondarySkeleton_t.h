#pragma once

struct CNmSkeleton::SecondarySkeleton_t  // sizeof 0x10, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_attachToBoneID; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // offset 0x8, size 0x8, align 8
};
