#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    bool m_bIgnoreInput; // offset 0x8D8, size 0x1, align 1
    bool m_bLit; // offset 0x8D9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x8DA, size 0x1, align 1
    char _pad_08DB[0x1]; // offset 0x8DB
    float32 m_flWidth; // offset 0x8DC, size 0x4, align 4
    float32 m_flHeight; // offset 0x8E0, size 0x4, align 4
    float32 m_flDPI; // offset 0x8E4, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0x8E8, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x8EC, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x8F0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x8F4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x8F8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x8FC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x900, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x904, size 0x1, align 1
    char _pad_0905[0x3]; // offset 0x905
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x908, size 0x18, align 8
    bool m_bOpaque; // offset 0x920, size 0x1, align 1
    bool m_bNoDepth; // offset 0x921, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x922, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x923, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x924, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x925, size 0x1, align 1
    bool m_bGrabbable; // offset 0x926, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x927, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x928, size 0x1, align 1
    char _pad_0929[0x3]; // offset 0x929
    int32 m_nExplicitImageLayout; // offset 0x92C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x930, size 0x1, align 1
    char _pad_0931[0x7]; // offset 0x931
};
