#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xBA0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xAF8]; // offset 0x0
    bool m_bCreateNavObstacle; // offset 0xAF8, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xAF9, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xAFA, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xAFB, size 0x1, align 1
    char _pad_0AFC[0x4]; // offset 0xAFC
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xB48, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xB60, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xB78, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xB80, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xB84, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xB85, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xB86, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xB87, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xB88, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xB89, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xB8A, size 0x1, align 1 | MNotSaved
    char _pad_0B8B[0x1]; // offset 0xB8B
    int32 m_iInitialGlowState; // offset 0xB8C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xB90, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xB94, size 0x4, align 4
    Color m_glowColor; // offset 0xB98, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xB9C, size 0x4, align 4
};
