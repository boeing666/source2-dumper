#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x1050, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF10]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xF10, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xF11, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xF12, size 0x1, align 1
    char _pad_0F13[0x5]; // offset 0xF13
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xF18, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xF30, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xF48, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xF60, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xF78, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xF90, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x1008, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1010, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x1014, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x1015, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x1016, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x1017, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1018, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1019, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x101A, size 0x1, align 1 | MNotSaved
    char _pad_101B[0x1]; // offset 0x101B
    int32 m_iInitialGlowState; // offset 0x101C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1020, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x1024, size 0x4, align 4
    Color m_glowColor; // offset 0x1028, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0x102C, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1030, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x1034, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x1040, size 0xC, align 4 | MNotSaved
    char _pad_104C[0x4]; // offset 0x104C
};
