#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x1420, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0x1358, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0x1359, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0x135A, size 0x1, align 1
    char _pad_135B[0x5]; // offset 0x135B
    CEntityIOOutput m_pOutputAnimBegun; // offset 0x1360, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0x1378, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0x1390, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0x13A8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0x13C0, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x13D8, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x13E0, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x13E4, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x13E5, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x13E6, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x13E7, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x13E8, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x13E9, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x13EA, size 0x1, align 1 | MNotSaved
    char _pad_13EB[0x1]; // offset 0x13EB
    int32 m_iInitialGlowState; // offset 0x13EC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x13F0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x13F4, size 0x4, align 4
    Color m_glowColor; // offset 0x13F8, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0x13FC, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1400, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x1404, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x1410, size 0xC, align 4 | MNotSaved
    char _pad_141C[0x4]; // offset 0x141C
};
