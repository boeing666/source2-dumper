#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xBC0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA80]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xA80, size 0x1, align 1
    char _pad_0A81[0x3]; // offset 0xA81
    GameTime_t m_flNextRandAnim; // offset 0xA84, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xA88, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xA8C, size 0x4, align 4
    char _pad_0A90[0x8]; // offset 0xA90
    bool m_bCreateNavObstacle; // offset 0xA98, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xA99, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xA9A, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xA9B, size 0x1, align 1
    char _pad_0A9C[0x4]; // offset 0xA9C
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xB18, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xB90, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xB98, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xB9C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xB9D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xB9E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xB9F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xBA0, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xBA1, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xBA2, size 0x1, align 1 | MNotSaved
    char _pad_0BA3[0x1]; // offset 0xBA3
    int32 m_iInitialGlowState; // offset 0xBA4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xBA8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xBAC, size 0x4, align 4
    Color m_glowColor; // offset 0xBB0, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xBB4, size 0x4, align 4
    char _pad_0BB8[0x8]; // offset 0xBB8
};
