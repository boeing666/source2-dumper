#pragma once

class CDOTACrownfallCreditsCharacterDefinition  // sizeof 0xA0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CPanoramaImageName m_strImage; // offset 0x0, size 0x10, align 8
    CUtlString m_strLocCharacterName; // offset 0x10, size 0x8, align 8
    CUtlString m_strLocCharacterTitle; // offset 0x18, size 0x8, align 8
    int32 m_nUniqueClickKey; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CPanoramaImageName m_strImageAlt; // offset 0x28, size 0x10, align 8
    CUtlString m_strLocCharacterNameAlt; // offset 0x38, size 0x8, align 8
    CUtlString m_strLocCharacterTitleAlt; // offset 0x40, size 0x8, align 8
    bool m_bFlipFacing; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
    CrownfallCreditsAABB_t m_bounds; // offset 0x4C, size 0x10, align 4
    char _pad_005C[0x4]; // offset 0x5C
    CUtlString m_strLocCharacterTitleAlt2; // offset 0x60, size 0x8, align 8
    CUtlString m_strLocCharacterTitleAlt3; // offset 0x68, size 0x8, align 8
    CUtlString m_strLocCharacterTitleAlt4; // offset 0x70, size 0x8, align 8
    CUtlString m_strLocCharacterTitleAlt5; // offset 0x78, size 0x8, align 8
    CUtlString m_strLocCharacterTitleAlt6; // offset 0x80, size 0x8, align 8
    int32 m_nAltImageW; // offset 0x88, size 0x4, align 4
    int32 m_nAltImageH; // offset 0x8C, size 0x4, align 4
    int32 m_nAltImageFrameTime; // offset 0x90, size 0x4, align 4
    int32 m_nYOffset; // offset 0x94, size 0x4, align 4
    uint16 m_unFrameTime; // offset 0x98, size 0x2, align 2
    char _pad_009A[0x6]; // offset 0x9A
};
