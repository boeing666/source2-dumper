#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xC90, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBD0]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xBD0, size 0x1, align 1
    char _pad_0BD1[0xF]; // offset 0xBD1
    bool m_bCreateNavObstacle; // offset 0xBE0, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xBE1, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xBE2, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xBE3, size 0x1, align 1
    char _pad_0BE4[0x4]; // offset 0xBE4
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xBE8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xC00, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xC18, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xC48, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xC60, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xC68, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xC6C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xC6D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xC6E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xC6F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xC70, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xC71, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xC72, size 0x1, align 1 | MNotSaved
    char _pad_0C73[0x1]; // offset 0xC73
    int32 m_iInitialGlowState; // offset 0xC74, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xC78, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xC7C, size 0x4, align 4
    Color m_glowColor; // offset 0xC80, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xC84, size 0x4, align 4
    char _pad_0C88[0x8]; // offset 0xC88
};
