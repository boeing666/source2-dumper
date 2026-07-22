#pragma once

class CDOTACrownfallCreditsMapSceneAnimateableDefinition  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CPanoramaImageName m_strImage; // offset 0x0, size 0x10, align 8
    CrownfallCreditsAABB_t m_bounds; // offset 0x10, size 0x10, align 4
    uint16 m_unFrameTime; // offset 0x20, size 0x2, align 2
    bool m_bClickable; // offset 0x22, size 0x1, align 1
    char _pad_0023[0x1]; // offset 0x23
    int32 m_nNumFrames; // offset 0x24, size 0x4, align 4
    CUtlString m_strSound; // offset 0x28, size 0x8, align 8
};
