#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0x9F0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x930]; // offset 0x0
    bool m_bRandomAnimator; // offset 0x930, size 0x1, align 1
    char _pad_0931[0x3]; // offset 0x931
    GameTime_t m_flNextRandAnim; // offset 0x934, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0x938, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0x93C, size 0x4, align 4
    char _pad_0940[0x8]; // offset 0x940
    bool m_bCreateNavObstacle; // offset 0x948, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0x949, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0x94A, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0x94B, size 0x1, align 1
    char _pad_094C[0x4]; // offset 0x94C
    CEntityIOOutput m_pOutputAnimBegun; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0x968, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0x980, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0x998, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0x9B0, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x9C8, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x9D0, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x9D4, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x9D5, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x9D6, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x9D7, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x9D8, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x9D9, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x9DA, size 0x1, align 1 | MNotSaved
    char _pad_09DB[0x1]; // offset 0x9DB
    int32 m_iInitialGlowState; // offset 0x9DC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x9E0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x9E4, size 0x4, align 4
    Color m_glowColor; // offset 0x9E8, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0x9EC, size 0x4, align 4
};
