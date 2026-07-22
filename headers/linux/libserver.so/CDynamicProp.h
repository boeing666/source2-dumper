#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xCB0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBF2]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xBF2, size 0x1, align 1
    char _pad_0BF3[0x1]; // offset 0xBF3
    GameTime_t m_flNextRandAnim; // offset 0xBF4, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xBF8, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xBFC, size 0x4, align 4
    char _pad_0C00[0x8]; // offset 0xC00
    bool m_bCreateNavObstacle; // offset 0xC08, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xC09, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xC0A, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xC0B, size 0x1, align 1
    char _pad_0C0C[0x4]; // offset 0xC0C
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xC10, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xC28, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xC40, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xC58, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xC70, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xC88, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xC90, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xC94, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xC95, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xC96, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xC97, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xC98, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xC99, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xC9A, size 0x1, align 1 | MNotSaved
    char _pad_0C9B[0x1]; // offset 0xC9B
    int32 m_iInitialGlowState; // offset 0xC9C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xCA0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xCA4, size 0x4, align 4
    Color m_glowColor; // offset 0xCA8, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xCAC, size 0x4, align 4
};
