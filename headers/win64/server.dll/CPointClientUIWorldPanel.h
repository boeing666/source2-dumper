#pragma once

class CPointClientUIWorldPanel : public CBaseClientUIEntity /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    bool m_bIgnoreInput; // offset 0x8E0, size 0x1, align 1 | MNetworkEnable
    bool m_bLit; // offset 0x8E1, size 0x1, align 1 | MNetworkEnable
    bool m_bFollowPlayerAcrossTeleport; // offset 0x8E2, size 0x1, align 1 | MNetworkEnable
    char _pad_08E3[0x1]; // offset 0x8E3
    float32 m_flWidth; // offset 0x8E4, size 0x4, align 4 | MNetworkEnable
    float32 m_flHeight; // offset 0x8E8, size 0x4, align 4 | MNetworkEnable
    float32 m_flDPI; // offset 0x8EC, size 0x4, align 4 | MNetworkEnable
    float32 m_flInteractDistance; // offset 0x8F0, size 0x4, align 4 | MNetworkEnable
    float32 m_flDepthOffset; // offset 0x8F4, size 0x4, align 4 | MNetworkEnable
    uint32 m_unOwnerContext; // offset 0x8F8, size 0x4, align 4 | MNetworkEnable
    uint32 m_unHorizontalAlign; // offset 0x8FC, size 0x4, align 4 | MNetworkEnable
    uint32 m_unVerticalAlign; // offset 0x900, size 0x4, align 4 | MNetworkEnable
    uint32 m_unOrientation; // offset 0x904, size 0x4, align 4 | MNetworkEnable
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x908, size 0x1, align 1 | MNetworkEnable
    char _pad_0909[0x7]; // offset 0x909
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x910, size 0x18, align 8 | MNetworkEnable
    bool m_bOpaque; // offset 0x928, size 0x1, align 1 | MNetworkEnable
    bool m_bNoDepth; // offset 0x929, size 0x1, align 1 | MNetworkEnable
    bool m_bVisibleWhenParentNoDraw; // offset 0x92A, size 0x1, align 1 | MNetworkEnable
    bool m_bRenderBackface; // offset 0x92B, size 0x1, align 1 | MNetworkEnable
    bool m_bUseOffScreenIndicator; // offset 0x92C, size 0x1, align 1 | MNetworkEnable
    bool m_bExcludeFromSaveGames; // offset 0x92D, size 0x1, align 1 | MNetworkEnable
    bool m_bGrabbable; // offset 0x92E, size 0x1, align 1 | MNetworkEnable
    bool m_bOnlyRenderToTexture; // offset 0x92F, size 0x1, align 1 | MNetworkEnable
    bool m_bDisableMipGen; // offset 0x930, size 0x1, align 1 | MNetworkEnable
    char _pad_0931[0x3]; // offset 0x931
    int32 m_nExplicitImageLayout; // offset 0x934, size 0x4, align 4 | MNetworkEnable
};
