#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xDA0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC70]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xC70, size 0x1, align 1
    char _pad_0C71[0xF]; // offset 0xC71
    bool m_bCreateNavObstacle; // offset 0xC80, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xC81, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xC82, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xC83, size 0x1, align 1
    char _pad_0C84[0x4]; // offset 0xC84
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xC88, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xCA0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xCB8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xCD0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xCE8, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xD00, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xD78, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xD80, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xD84, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xD85, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xD86, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xD87, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xD88, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xD89, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xD8A, size 0x1, align 1 | MNotSaved
    char _pad_0D8B[0x1]; // offset 0xD8B
    int32 m_iInitialGlowState; // offset 0xD8C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xD90, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xD94, size 0x4, align 4
    Color m_glowColor; // offset 0xD98, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xD9C, size 0x4, align 4
};
