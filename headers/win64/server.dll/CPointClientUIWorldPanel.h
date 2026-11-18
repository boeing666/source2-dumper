#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    bool m_bIgnoreInput; // offset 0xA18, size 0x1, align 1
    bool m_bLit; // offset 0xA19, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xA1A, size 0x1, align 1
    char _pad_0A1B[0x1]; // offset 0xA1B
    float32 m_flWidth; // offset 0xA1C, size 0x4, align 4
    float32 m_flHeight; // offset 0xA20, size 0x4, align 4
    float32 m_flDPI; // offset 0xA24, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xA28, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xA2C, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xA30, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xA34, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xA38, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xA3C, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xA40, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xA44, size 0x1, align 1
    char _pad_0A45[0x3]; // offset 0xA45
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xA48, size 0x18, align 8
    bool m_bOpaque; // offset 0xA60, size 0x1, align 1
    bool m_bNoDepth; // offset 0xA61, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xA62, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xA63, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xA64, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xA65, size 0x1, align 1
    bool m_bGrabbable; // offset 0xA66, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xA67, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xA68, size 0x1, align 1
    char _pad_0A69[0x3]; // offset 0xA69
    int32 m_nExplicitImageLayout; // offset 0xA6C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x7]; // offset 0xA71
};
