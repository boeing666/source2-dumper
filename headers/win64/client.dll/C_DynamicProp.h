#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x10B0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bGraphControllerEnabled; // offset 0xF70, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xF71, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xF72, size 0x1, align 1
    char _pad_0F73[0x5]; // offset 0xF73
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xF78, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xF90, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xFA8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xFC0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xFD8, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xFF0, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x1068, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1070, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x1074, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x1075, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x1076, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x1077, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1078, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1079, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x107A, size 0x1, align 1 | MNotSaved
    char _pad_107B[0x1]; // offset 0x107B
    int32 m_iInitialGlowState; // offset 0x107C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1080, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x1084, size 0x4, align 4
    Color m_glowColor; // offset 0x1088, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0x108C, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1090, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x1094, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x10A0, size 0xC, align 4 | MNotSaved
    char _pad_10AC[0x4]; // offset 0x10AC
};
