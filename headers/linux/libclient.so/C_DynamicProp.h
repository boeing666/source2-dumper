#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0xE80, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xDA8, size 0x1, align 1
    char _pad_0DA9[0x3]; // offset 0xDA9
    GameTime_t m_flNextRandAnim; // offset 0xDAC, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xDB0, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xDB4, size 0x4, align 4
    bool m_bUseHitboxesForRenderBox; // offset 0xDB8, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xDB9, size 0x1, align 1
    char _pad_0DBA[0x6]; // offset 0xDBA
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xDC0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xE20, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xE38, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xE40, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xE44, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xE45, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xE46, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xE47, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xE48, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xE49, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xE4A, size 0x1, align 1 | MNotSaved
    char _pad_0E4B[0x1]; // offset 0xE4B
    int32 m_iInitialGlowState; // offset 0xE4C, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xE50, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xE54, size 0x4, align 4
    Color m_glowColor; // offset 0xE58, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xE5C, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0xE60, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0xE64, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0xE70, size 0xC, align 4 | MNotSaved
    char _pad_0E7C[0x4]; // offset 0xE7C
};
