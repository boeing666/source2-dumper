#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xE90, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD5A]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xD5A, size 0x1, align 1
    char _pad_0D5B[0x1]; // offset 0xD5B
    GameTime_t m_flNextRandAnim; // offset 0xD5C, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xD60, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xD64, size 0x4, align 4
    char _pad_0D68[0x8]; // offset 0xD68
    bool m_bCreateNavObstacle; // offset 0xD70, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xD71, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xD72, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xD73, size 0x1, align 1
    char _pad_0D74[0x4]; // offset 0xD74
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xD78, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xD90, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xDA8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xDC0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xDF0, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xE68, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xE70, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xE74, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xE75, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xE76, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE77, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xE78, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xE79, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE7A, size 0x1, align 1 | MNotSaved
    char _pad_0E7B[0x1]; // offset 0xE7B
    int32 m_iInitialGlowState; // offset 0xE7C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xE80, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xE84, size 0x4, align 4
    Color m_glowColor; // offset 0xE88, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xE8C, size 0x4, align 4
};
