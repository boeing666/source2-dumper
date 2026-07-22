#pragma once

class CNmTarget  // sizeof 0x30, align 0x10 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
public:
    CTransform m_transform; // offset 0x0, size 0x20, align 16
    CGlobalSymbol m_boneID; // offset 0x20, size 0x8, align 8
    bool m_bIsBoneTarget; // offset 0x28, size 0x1, align 1
    bool m_bIsUsingBoneSpaceOffsets; // offset 0x29, size 0x1, align 1
    bool m_bHasOffsets; // offset 0x2A, size 0x1, align 1
    bool m_bIsSet; // offset 0x2B, size 0x1, align 1
    char _pad_002C[0x4]; // offset 0x2C
};
