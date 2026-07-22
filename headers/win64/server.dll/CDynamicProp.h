#pragma once

class CDynamicProp : public CBreakableProp /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xC28]; // offset 0x0
    bool m_bCreateNavObstacle; // offset 0xC28, size 0x1, align 1
    bool m_bNavObstacleUpdatesOverridden; // offset 0xC29, size 0x1, align 1
    bool m_bUseHitboxesForRenderBox; // offset 0xC2A, size 0x1, align 1 | MNetworkEnable
    bool m_bUseAnimGraph; // offset 0xC2B, size 0x1, align 1 | MNetworkEnable
    char _pad_0C2C[0x4]; // offset 0xC2C
    CEntityIOOutput m_pOutputAnimBegun; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimOver; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedStart; // offset 0xC78, size 0x18, align 255
    CEntityIOOutput m_OnAnimReachedEnd; // offset 0xC90, size 0x18, align 255
    CUtlSymbolLarge m_iszIdleAnim; // offset 0xCA8, size 0x8, align 8
    AnimLoopMode_t m_nIdleAnimLoopMode; // offset 0xCB0, size 0x4, align 4
    bool m_bRandomizeCycle; // offset 0xCB4, size 0x1, align 1
    bool m_bStartDisabled; // offset 0xCB5, size 0x1, align 1
    bool m_bFiredStartEndOutput; // offset 0xCB6, size 0x1, align 1
    bool m_bForceNpcExclude; // offset 0xCB7, size 0x1, align 1 | MNotSaved
    bool m_bCreateNonSolid; // offset 0xCB8, size 0x1, align 1 | MNotSaved
    bool m_bIsOverrideProp; // offset 0xCB9, size 0x1, align 1 | MNotSaved
    char _pad_0CBA[0x2]; // offset 0xCBA
    int32 m_iInitialGlowState; // offset 0xCBC, size 0x4, align 4
    int32 m_nGlowRange; // offset 0xCC0, size 0x4, align 4
    int32 m_nGlowRangeMin; // offset 0xCC4, size 0x4, align 4
    Color m_glowColor; // offset 0xCC8, size 0x4, align 1
    int32 m_nGlowTeam; // offset 0xCCC, size 0x4, align 4
};
