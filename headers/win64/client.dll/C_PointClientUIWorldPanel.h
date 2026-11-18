#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xC10, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xC11, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xC12, size 0x1, align 1 | MNotSaved
    char _pad_0C13[0xD]; // offset 0xC13
    CTransform m_anchorDeltaTransform; // offset 0xC20, size 0x20, align 16 | MNotSaved
    char _pad_0C40[0x158]; // offset 0xC40
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xD98, size 0x8, align 8 | MNotSaved
    char _pad_0DA0[0x20]; // offset 0xDA0
    bool m_bIgnoreInput; // offset 0xDC0, size 0x1, align 1
    bool m_bLit; // offset 0xDC1, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xDC2, size 0x1, align 1
    char _pad_0DC3[0x1]; // offset 0xDC3
    float32 m_flWidth; // offset 0xDC4, size 0x4, align 4
    float32 m_flHeight; // offset 0xDC8, size 0x4, align 4
    float32 m_flDPI; // offset 0xDCC, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xDD0, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xDD4, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xDD8, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xDDC, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xDE0, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xDE4, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xDE8, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xDEC, size 0x1, align 1
    char _pad_0DED[0x3]; // offset 0xDED
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xDF0, size 0x18, align 8
    bool m_bOpaque; // offset 0xE08, size 0x1, align 1
    bool m_bNoDepth; // offset 0xE09, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xE0A, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xE0B, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xE0C, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xE0D, size 0x1, align 1
    bool m_bGrabbable; // offset 0xE0E, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xE0F, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xE10, size 0x1, align 1
    char _pad_0E11[0x3]; // offset 0xE11
    int32 m_nExplicitImageLayout; // offset 0xE14, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x7]; // offset 0xE19
};
