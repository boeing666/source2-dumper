#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xD50, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0xF]; // offset 0xC21
    bool m_bCreateNavObstacle; // offset 0xC30, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xC31, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xC32, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xC33, size 0x1, align 1
    char _pad_0C34[0x4]; // offset 0xC34
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xC50, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xC68, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xC80, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xC98, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xCB0, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xD28, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xD30, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xD34, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xD35, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xD36, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xD37, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xD38, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xD39, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xD3A, size 0x1, align 1 | MNotSaved
    char _pad_0D3B[0x1]; // offset 0xD3B
    int32 m_iInitialGlowState; // offset 0xD3C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xD40, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xD44, size 0x4, align 4
    Color m_glowColor; // offset 0xD48, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xD4C, size 0x4, align 4
};
