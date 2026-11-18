#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xD58, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    bool m_bIgnoreInput; // offset 0xCF8, size 0x1, align 1
    bool m_bLit; // offset 0xCF9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xCFA, size 0x1, align 1
    char _pad_0CFB[0x1]; // offset 0xCFB
    float32 m_flWidth; // offset 0xCFC, size 0x4, align 4
    float32 m_flHeight; // offset 0xD00, size 0x4, align 4
    float32 m_flDPI; // offset 0xD04, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xD08, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xD0C, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xD10, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xD14, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xD18, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xD1C, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xD20, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xD24, size 0x1, align 1
    char _pad_0D25[0x3]; // offset 0xD25
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xD28, size 0x18, align 8
    bool m_bOpaque; // offset 0xD40, size 0x1, align 1
    bool m_bNoDepth; // offset 0xD41, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xD42, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xD43, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xD44, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xD45, size 0x1, align 1
    bool m_bGrabbable; // offset 0xD46, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xD47, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xD48, size 0x1, align 1
    char _pad_0D49[0x3]; // offset 0xD49
    int32 m_nExplicitImageLayout; // offset 0xD4C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x7]; // offset 0xD51
};
