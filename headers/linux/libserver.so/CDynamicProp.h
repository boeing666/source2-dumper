#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xE80, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDD0]; // offset 0x0
    bool m_bCreateNavObstacle; // offset 0xDD0, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xDD1, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xDD2, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xDD3, size 0x1, align 1
    char _pad_0DD4[0x4]; // offset 0xDD4
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xE20, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xE38, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xE50, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xE58, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xE5C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xE5D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xE5E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE5F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xE60, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xE61, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE62, size 0x1, align 1 | MNotSaved
    char _pad_0E63[0x1]; // offset 0xE63
    int32 m_iInitialGlowState; // offset 0xE64, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xE68, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xE6C, size 0x4, align 4
    Color m_glowColor; // offset 0xE70, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xE74, size 0x4, align 4
    char _pad_0E78[0x8]; // offset 0xE78
};
