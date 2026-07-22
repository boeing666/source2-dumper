#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bIgnoreInput; // offset 0xBB0, size 0x1, align 1
    bool m_bLit; // offset 0xBB1, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xBB2, size 0x1, align 1
    char _pad_0BB3[0x1]; // offset 0xBB3
    float32 m_flWidth; // offset 0xBB4, size 0x4, align 4
    float32 m_flHeight; // offset 0xBB8, size 0x4, align 4
    float32 m_flDPI; // offset 0xBBC, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xBC0, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xBC4, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xBC8, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xBCC, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xBD0, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xBD4, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xBD8, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xBDC, size 0x1, align 1
    char _pad_0BDD[0x3]; // offset 0xBDD
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xBE0, size 0x18, align 8
    bool m_bOpaque; // offset 0xBF8, size 0x1, align 1
    bool m_bNoDepth; // offset 0xBF9, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xBFA, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xBFB, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xBFC, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xBFD, size 0x1, align 1
    bool m_bGrabbable; // offset 0xBFE, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xBFF, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xC00, size 0x1, align 1
    char _pad_0C01[0x3]; // offset 0xC01
    int32 m_nExplicitImageLayout; // offset 0xC04, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xC08, size 0x1, align 1
    char _pad_0C09[0x7]; // offset 0xC09
};
