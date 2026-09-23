#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xF60, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xEA2]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xEA2, size 0x1, align 1
    char _pad_0EA3[0xD]; // offset 0xEA3
    bool m_bCreateNavObstacle; // offset 0xEB0, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xEB1, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xEB2, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xEB3, size 0x1, align 1
    char _pad_0EB4[0x4]; // offset 0xEB4
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xEB8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xED0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xEE8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xF00, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xF18, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xF30, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xF38, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xF3C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xF3D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xF3E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xF3F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xF40, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xF41, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xF42, size 0x1, align 1 | MNotSaved
    char _pad_0F43[0x1]; // offset 0xF43
    int32 m_iInitialGlowState; // offset 0xF44, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xF48, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xF4C, size 0x4, align 4
    Color m_glowColor; // offset 0xF50, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xF54, size 0x4, align 4
    char _pad_0F58[0x8]; // offset 0xF58
};
