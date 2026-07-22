#pragma once

class CCommentarySystem  // sizeof 0x60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x11]; // offset 0x0
    bool m_bCommentaryConvarsChanging; // offset 0x11, size 0x1, align 1
    bool m_bCommentaryEnabledMidGame; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    GameTime_t m_flNextTeleportTime; // offset 0x14, size 0x4, align 255
    int32 m_iTeleportStage; // offset 0x18, size 0x4, align 4
    bool m_bCheatState; // offset 0x1C, size 0x1, align 1
    bool m_bIsFirstSpawnGroupToLoad; // offset 0x1D, size 0x1, align 1
    char _pad_001E[0x1A]; // offset 0x1E
    CHandle< CPointCommentaryNode > m_hCurrentNode; // offset 0x38, size 0x4, align 4
    CHandle< CPointCommentaryNode > m_hActiveCommentaryNode; // offset 0x3C, size 0x4, align 4
    CHandle< CPointCommentaryNode > m_hLastCommentaryNode; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes; // offset 0x48, size 0x18, align 8
};
