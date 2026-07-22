#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    bool m_bIgnoreInput; // offset 0x8D0, size 0x1, align 1
    bool m_bLit; // offset 0x8D1, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x8D2, size 0x1, align 1
    char _pad_08D3[0x1]; // offset 0x8D3
    float32 m_flWidth; // offset 0x8D4, size 0x4, align 4
    float32 m_flHeight; // offset 0x8D8, size 0x4, align 4
    float32 m_flDPI; // offset 0x8DC, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x8E0, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x8E4, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x8E8, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x8EC, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x8F0, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x8F4, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x8F8, size 0x1, align 1
    char _pad_08F9[0x7]; // offset 0x8F9
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x900, size 0x18, align 8
    bool m_bOpaque; // offset 0x918, size 0x1, align 1
    bool m_bNoDepth; // offset 0x919, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x91A, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x91B, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x91C, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x91D, size 0x1, align 1
    bool m_bGrabbable; // offset 0x91E, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x91F, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x920, size 0x1, align 1
    char _pad_0921[0x3]; // offset 0x921
    int32 m_nExplicitImageLayout; // offset 0x924, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x928, size 0x1, align 1
    char _pad_0929[0x7]; // offset 0x929
};
