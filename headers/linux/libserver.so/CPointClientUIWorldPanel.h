#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xCE8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC88]; // offset 0x0
    bool m_bIgnoreInput; // offset 0xC88, size 0x1, align 1
    bool m_bLit; // offset 0xC89, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xC8A, size 0x1, align 1
    char _pad_0C8B[0x1]; // offset 0xC8B
    float32 m_flWidth; // offset 0xC8C, size 0x4, align 4
    float32 m_flHeight; // offset 0xC90, size 0x4, align 4
    float32 m_flDPI; // offset 0xC94, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xC98, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xC9C, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xCA0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xCA4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xCA8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xCAC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xCB0, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xCB4, size 0x1, align 1
    char _pad_0CB5[0x3]; // offset 0xCB5
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xCB8, size 0x18, align 8
    bool m_bOpaque; // offset 0xCD0, size 0x1, align 1
    bool m_bNoDepth; // offset 0xCD1, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xCD2, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xCD3, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xCD4, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xCD5, size 0x1, align 1
    bool m_bGrabbable; // offset 0xCD6, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xCD7, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xCD8, size 0x1, align 1
    char _pad_0CD9[0x3]; // offset 0xCD9
    int32 m_nExplicitImageLayout; // offset 0xCDC, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xCE0, size 0x1, align 1
    char _pad_0CE1[0x7]; // offset 0xCE1
};
