#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xB60, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA20]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xA20, size 0x1, align 1
    char _pad_0A21[0x3]; // offset 0xA21
    GameTime_t m_flNextRandAnim; // offset 0xA24, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xA28, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xA2C, size 0x4, align 4
    char _pad_0A30[0x8]; // offset 0xA30
    bool m_bCreateNavObstacle; // offset 0xA38, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xA39, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xA3A, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xA3B, size 0x1, align 1
    char _pad_0A3C[0x4]; // offset 0xA3C
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xA40, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xAB8, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xB30, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xB38, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xB3C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xB3D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xB3E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xB3F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xB40, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xB41, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xB42, size 0x1, align 1 | MNotSaved
    char _pad_0B43[0x1]; // offset 0xB43
    int32 m_iInitialGlowState; // offset 0xB44, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xB48, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xB4C, size 0x4, align 4
    Color m_glowColor; // offset 0xB50, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xB54, size 0x4, align 4
    char _pad_0B58[0x8]; // offset 0xB58
};
