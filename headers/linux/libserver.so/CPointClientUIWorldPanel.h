#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC90]; // offset 0x0
    bool m_bIgnoreInput; // offset 0xC90, size 0x1, align 1
    bool m_bLit; // offset 0xC91, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xC92, size 0x1, align 1
    char _pad_0C93[0x1]; // offset 0xC93
    float32 m_flWidth; // offset 0xC94, size 0x4, align 4
    float32 m_flHeight; // offset 0xC98, size 0x4, align 4
    float32 m_flDPI; // offset 0xC9C, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xCA0, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xCA4, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xCA8, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xCAC, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xCB0, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xCB4, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xCB8, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xCBC, size 0x1, align 1
    char _pad_0CBD[0x3]; // offset 0xCBD
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xCC0, size 0x18, align 8
    bool m_bOpaque; // offset 0xCD8, size 0x1, align 1
    bool m_bNoDepth; // offset 0xCD9, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xCDA, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xCDB, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xCDC, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xCDD, size 0x1, align 1
    bool m_bGrabbable; // offset 0xCDE, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xCDF, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xCE0, size 0x1, align 1
    char _pad_0CE1[0x3]; // offset 0xCE1
    int32 m_nExplicitImageLayout; // offset 0xCE4, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xCE8, size 0x1, align 1
    char _pad_0CE9[0x7]; // offset 0xCE9
};
