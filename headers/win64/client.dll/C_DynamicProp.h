#pragma once

class C_DynamicProp : public C_BreakableProp /*0x0*/  // sizeof 0xEF0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    bool m_bUseHitboxesForRenderBox; // offset 0xE20, size 0x1, align 1 | MNetworkEnable
    bool m_bUseAnimGraph; // offset 0xE21, size 0x1, align 1 | MNetworkEnable
    char _pad_0E22[0x6]; // offset 0xE22
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xE28, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xE40, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xE58, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xE70, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xE88, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xEA0, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xEA8, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xEAC, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xEAD, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xEAE, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xEAF, size 0x1, align 1 | MNotSaved
    bool m_bCreateNonSolid; // offset 0xEB0, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xEB1, size 0x1, align 1 | MNotSaved
    char _pad_0EB2[0x2]; // offset 0xEB2
    int32 m_iInitialGlowState; // offset 0xEB4, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xEB8, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xEBC, size 0x4, align 4
    Color m_glowColor; // offset 0xEC0, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xEC4, size 0x4, align 4
    int32 m_iCachedFrameCount; // offset 0xEC8, size 0x4, align 4 | MNotSaved
    Vector m_vecCachedRenderMins; // offset 0xECC, size 0xC, align 4 | MNotSaved
    Vector m_vecCachedRenderMaxs; // offset 0xED8, size 0xC, align 4 | MNotSaved
    char _pad_0EE4[0xC]; // offset 0xEE4
};
