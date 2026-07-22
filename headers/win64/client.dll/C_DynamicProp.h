#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0xD10, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    bool m_bRandomAnimator; // offset 0xC30, size 0x1, align 1
    char _pad_0C31[0x3]; // offset 0xC31
    GameTime_t m_flNextRandAnim; // offset 0xC34, size 0x4, align 255
    float32 m_flMinRandAnimDuration; // offset 0xC38, size 0x4, align 4
    float32 m_flMaxRandAnimDuration; // offset 0xC3C, size 0x4, align 4
    bool m_bUseHitboxesForRenderBox; // offset 0xC40, size 0x1, align 1
    bool m_bUseAnimGraph; // offset 0xC41, size 0x1, align 1
    char _pad_0C42[0x6]; // offset 0xC42
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xC78, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xC90, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xCA8, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xCC0, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xCC8, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xCCC, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xCCD, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xCCE, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xCCF, size 0x1, align 1 | MNotSaved
    bool m_bCreateMovableSurfaceGraph; // offset 0xCD0, size 0x1, align 1
    bool m_bCreateNonSolid; // offset 0xCD1, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xCD2, size 0x1, align 1 | MNotSaved
    char _pad_0CD3[0x1]; // offset 0xCD3
    int32 m_iInitialGlowState; // offset 0xCD4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xCD8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xCDC, size 0x4, align 4
    Color m_glowColor; // offset 0xCE0, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xCE4, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0xCE8, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0xCEC, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0xCF8, size 0xC, align 4 | MNotSaved
    char _pad_0D04[0xC]; // offset 0xD04
};
