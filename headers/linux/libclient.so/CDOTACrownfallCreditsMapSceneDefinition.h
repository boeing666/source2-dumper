#pragma once

class CDOTACrownfallCreditsMapSceneDefinition  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CPanoramaImageName m_strImage; // offset 0x0, size 0x10, align 8
    CPanoramaImageName m_strImageMask; // offset 0x10, size 0x10, align 8
    Vector2D m_vViewStart; // offset 0x20, size 0x8, align 4
    Vector2D m_vViewEnd; // offset 0x28, size 0x8, align 4
    CrownfallCreditsAABB_t m_bounds; // offset 0x30, size 0x10, align 4
    int32 m_nAnimOffsetX; // offset 0x40, size 0x4, align 4
    int32 m_nAnimOffsetY; // offset 0x44, size 0x4, align 4
    CUtlVector< CDOTACrownfallCreditsMapSceneAnimateableDefinition > m_vecAnimations; // offset 0x48, size 0x18, align 8
    bool m_bScale; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x7]; // offset 0x61
};
