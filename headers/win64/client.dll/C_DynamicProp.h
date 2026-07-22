#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x13C0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    bool m_bUseHitboxesForRenderBox; // offset 0x12F0, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0x12F1, size 0x1, align 1
    char _pad_12F2[0x6]; // offset 0x12F2
    CEntityIOOutput m_pOutputAnimBegun; // offset 0x12F8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0x1310, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0x1328, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0x1340, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0x1358, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x1370, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1378, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x137C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x137D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x137E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x137F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1380, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1381, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x1382, size 0x1, align 1 | MNotSaved
    char _pad_1383[0x1]; // offset 0x1383
    int32 m_iInitialGlowState; // offset 0x1384, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1388, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x138C, size 0x4, align 4
    Color m_glowColor; // offset 0x1390, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0x1394, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1398, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x139C, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x13A8, size 0xC, align 4 | MNotSaved
    char _pad_13B4[0xC]; // offset 0x13B4
};
