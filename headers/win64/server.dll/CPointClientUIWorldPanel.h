#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x9B8]; // offset 0x0
    bool m_bIgnoreInput; // offset 0x9B8, size 0x1, align 1
    bool m_bLit; // offset 0x9B9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x9BA, size 0x1, align 1
    char _pad_09BB[0x1]; // offset 0x9BB
    float32 m_flWidth; // offset 0x9BC, size 0x4, align 4
    float32 m_flHeight; // offset 0x9C0, size 0x4, align 4
    float32 m_flDPI; // offset 0x9C4, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0x9C8, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x9CC, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x9D0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x9D4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x9D8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x9DC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x9E0, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x9E4, size 0x1, align 1
    char _pad_09E5[0x3]; // offset 0x9E5
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x9E8, size 0x18, align 8
    bool m_bOpaque; // offset 0xA00, size 0x1, align 1
    bool m_bNoDepth; // offset 0xA01, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xA02, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xA03, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xA04, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xA05, size 0x1, align 1
    bool m_bGrabbable; // offset 0xA06, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xA07, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xA08, size 0x1, align 1
    char _pad_0A09[0x3]; // offset 0xA09
    int32 m_nExplicitImageLayout; // offset 0xA0C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xA10, size 0x1, align 1
    char _pad_0A11[0x7]; // offset 0xA11
};
