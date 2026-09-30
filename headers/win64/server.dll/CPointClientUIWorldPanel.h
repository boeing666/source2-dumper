#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    bool m_bIgnoreInput; // offset 0x9D8, size 0x1, align 1
    bool m_bLit; // offset 0x9D9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x9DA, size 0x1, align 1
    char _pad_09DB[0x1]; // offset 0x9DB
    float32 m_flWidth; // offset 0x9DC, size 0x4, align 4
    float32 m_flHeight; // offset 0x9E0, size 0x4, align 4
    float32 m_flDPI; // offset 0x9E4, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0x9E8, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x9EC, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x9F0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x9F4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x9F8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x9FC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xA00, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xA04, size 0x1, align 1
    char _pad_0A05[0x3]; // offset 0xA05
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xA08, size 0x18, align 8
    bool m_bOpaque; // offset 0xA20, size 0x1, align 1
    bool m_bNoDepth; // offset 0xA21, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xA22, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xA23, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xA24, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xA25, size 0x1, align 1
    bool m_bGrabbable; // offset 0xA26, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xA27, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xA28, size 0x1, align 1
    char _pad_0A29[0x3]; // offset 0xA29
    int32 m_nExplicitImageLayout; // offset 0xA2C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xA30, size 0x1, align 1
    char _pad_0A31[0x7]; // offset 0xA31
};
