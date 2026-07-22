#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xE60, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xC48, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xC49, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xC4A, size 0x1, align 1 | MNotSaved
    char _pad_0C4B[0x5]; // offset 0xC4B
    CTransform m_anchorDeltaTransform; // offset 0xC50, size 0x20, align 16 | MNotSaved
    char _pad_0C70[0x168]; // offset 0xC70
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xDD8, size 0x8, align 8 | MNotSaved
    char _pad_0DE0[0x20]; // offset 0xDE0
    bool m_bIgnoreInput; // offset 0xE00, size 0x1, align 1
    bool m_bLit; // offset 0xE01, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xE02, size 0x1, align 1
    char _pad_0E03[0x1]; // offset 0xE03
    float32 m_flWidth; // offset 0xE04, size 0x4, align 4
    float32 m_flHeight; // offset 0xE08, size 0x4, align 4
    float32 m_flDPI; // offset 0xE0C, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xE10, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xE14, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xE18, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xE1C, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xE20, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xE24, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xE28, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xE2C, size 0x1, align 1
    char _pad_0E2D[0x3]; // offset 0xE2D
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xE30, size 0x18, align 8
    bool m_bOpaque; // offset 0xE48, size 0x1, align 1
    bool m_bNoDepth; // offset 0xE49, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xE4A, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xE4B, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xE4C, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xE4D, size 0x1, align 1
    bool m_bGrabbable; // offset 0xE4E, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xE4F, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xE50, size 0x1, align 1
    char _pad_0E51[0x3]; // offset 0xE51
    int32 m_nExplicitImageLayout; // offset 0xE54, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xE58, size 0x1, align 1
    char _pad_0E59[0x7]; // offset 0xE59
};
