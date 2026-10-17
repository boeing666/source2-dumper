#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xCEA]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xCEA, size 0x1, align 1
    char _pad_0CEB[0x1]; // offset 0xCEB
    GameTime_t m_flNextRandAnim; // offset 0xCEC, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xCF0, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xCF4, size 0x4, align 4
    char _pad_0CF8[0x8]; // offset 0xCF8
    bool m_bCreateNavObstacle; // offset 0xD00, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xD01, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xD02, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xD03, size 0x1, align 1
    char _pad_0D04[0x4]; // offset 0xD04
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xD08, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xD20, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xD38, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xD50, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xD68, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xD80, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xDF8, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xE00, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xE04, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xE05, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xE06, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE07, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xE08, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xE09, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE0A, size 0x1, align 1 | MNotSaved
    char _pad_0E0B[0x1]; // offset 0xE0B
    int32 m_iInitialGlowState; // offset 0xE0C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xE10, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xE14, size 0x4, align 4
    Color m_glowColor; // offset 0xE18, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xE1C, size 0x4, align 4
};
