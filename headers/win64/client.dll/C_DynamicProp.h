#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x14B0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x13E0]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0x13E0, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0x13E1, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0x13E2, size 0x1, align 1
    char _pad_13E3[0x5]; // offset 0x13E3
    CEntityIOOutput m_pOutputAnimBegun; // offset 0x13E8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0x1400, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0x1418, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0x1430, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0x1448, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x1460, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1468, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x146C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x146D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x146E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x146F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1470, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1471, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x1472, size 0x1, align 1 | MNotSaved
    char _pad_1473[0x1]; // offset 0x1473
    int32 m_iInitialGlowState; // offset 0x1474, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1478, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x147C, size 0x4, align 4
    Color m_glowColor; // offset 0x1480, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0x1484, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1488, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x148C, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x1498, size 0xC, align 4 | MNotSaved
    char _pad_14A4[0xC]; // offset 0x14A4
};
