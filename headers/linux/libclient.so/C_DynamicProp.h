#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0x1000, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xEA8]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xEA8, size 0x1, align 1
    char _pad_0EA9[0x3]; // offset 0xEA9
    GameTime_t m_flNextRandAnim; // offset 0xEAC, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xEB0, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xEB4, size 0x4, align 4
    bool m_bUseHitboxesForRenderBox; // offset 0xEB8, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xEB9, size 0x1, align 1
    char _pad_0EBA[0x6]; // offset 0xEBA
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xEC0, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xED8, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xEF0, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xF08, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xF20, size 0x18, align 255
    CEntityIOOutput[5] m_OnScriptFireEvent; // offset 0xF38, size 0x78, align 8
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xFB0, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xFB8, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xFBC, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xFBD, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xFBE, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xFBF, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xFC0, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xFC1, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xFC2, size 0x1, align 1 | MNotSaved
    char _pad_0FC3[0x1]; // offset 0xFC3
    int32 m_iInitialGlowState; // offset 0xFC4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xFC8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xFCC, size 0x4, align 4
    Color m_glowColor; // offset 0xFD0, size 0x4, align 4
    int32 m_nGlowTeam; // offset 0xFD4, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0xFD8, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0xFDC, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0xFE8, size 0xC, align 4 | MNotSaved
    char _pad_0FF4[0xC]; // offset 0xFF4
};
