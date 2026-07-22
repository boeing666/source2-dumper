#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x1340, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    bool m_bUseHitboxesForRenderBox; // offset 0x1278, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0x1279, size 0x1, align 1
    char _pad_127A[0x6]; // offset 0x127A
    CEntityIOOutput m_pOutputAnimBegun; // offset 0x1280, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0x1298, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0x12B0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0x12C8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0x12E0, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x12F8, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1300, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x1304, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x1305, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x1306, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x1307, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1308, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1309, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x130A, size 0x1, align 1 | MNotSaved
    char _pad_130B[0x1]; // offset 0x130B
    int32 m_iInitialGlowState; // offset 0x130C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1310, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x1314, size 0x4, align 4
    Color m_glowColor; // offset 0x1318, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0x131C, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1320, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x1324, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x1330, size 0xC, align 4 | MNotSaved
    char _pad_133C[0x4]; // offset 0x133C
};
