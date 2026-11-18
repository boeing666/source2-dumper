#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0xEE0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD90]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xD90, size 0x1, align 1
    char _pad_0D91[0x3]; // offset 0xD91
    GameTime_t m_flNextRandAnim; // offset 0xD94, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xD98, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xD9C, size 0x4, align 4
    bool m_bUseHitboxesForRenderBox; // offset 0xDA0, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xDA1, size 0x1, align 1
    char _pad_0DA2[0x6]; // offset 0xDA2
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xDA8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xDC0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xE20, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xE98, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xEA0, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xEA4, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xEA5, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xEA6, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xEA7, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xEA8, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xEA9, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xEAA, size 0x1, align 1 | MNotSaved
    char _pad_0EAB[0x1]; // offset 0xEAB
    int32 m_iInitialGlowState; // offset 0xEAC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xEB0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xEB4, size 0x4, align 4
    Color m_glowColor; // offset 0xEB8, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xEBC, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0xEC0, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0xEC4, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0xED0, size 0xC, align 4 | MNotSaved
    char _pad_0EDC[0x4]; // offset 0xEDC
};
