#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x1070, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF18]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xF18, size 0x1, align 1
    char _pad_0F19[0x3]; // offset 0xF19
    GameTime_t m_flNextRandAnim; // offset 0xF1C, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xF20, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xF24, size 0x4, align 4
    bool m_bUseHitboxesForRenderBox; // offset 0xF28, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xF29, size 0x1, align 1
    char _pad_0F2A[0x6]; // offset 0xF2A
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xF30, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xF48, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xF60, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xF78, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xF90, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xFA8, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0x1020, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0x1028, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0x102C, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x102D, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0x102E, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0x102F, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0x1030, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0x1031, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0x1032, size 0x1, align 1 | MNotSaved
    char _pad_1033[0x1]; // offset 0x1033
    int32 m_iInitialGlowState; // offset 0x1034, size 0x4, align 4
    int32 m_nGlowRange; // offset 0x1038, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0x103C, size 0x4, align 4
    Color m_glowColor; // offset 0x1040, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0x1044, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0x1048, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0x104C, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0x1058, size 0xC, align 4 | MNotSaved
    char _pad_1064[0xC]; // offset 0x1064
};
