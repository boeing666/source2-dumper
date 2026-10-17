#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xDE0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xBB0, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xBB1, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xBB2, size 0x1, align 1 | MNotSaved
    char _pad_0BB3[0xD]; // offset 0xBB3
    CTransform m_anchorDeltaTransform; // offset 0xBC0, size 0x20, align 16 | MNotSaved
    char _pad_0BE0[0x170]; // offset 0xBE0
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xD50, size 0x8, align 8 | MNotSaved
    char _pad_0D58[0x20]; // offset 0xD58
    bool m_bIgnoreInput; // offset 0xD78, size 0x1, align 1
    bool m_bLit; // offset 0xD79, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xD7A, size 0x1, align 1
    char _pad_0D7B[0x1]; // offset 0xD7B
    float32 m_flWidth; // offset 0xD7C, size 0x4, align 4
    float32 m_flHeight; // offset 0xD80, size 0x4, align 4
    float32 m_flDPI; // offset 0xD84, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xD88, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xD8C, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xD90, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xD94, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xD98, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xD9C, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xDA0, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xDA4, size 0x1, align 1
    char _pad_0DA5[0x3]; // offset 0xDA5
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xDA8, size 0x18, align 8
    bool m_bOpaque; // offset 0xDC0, size 0x1, align 1
    bool m_bNoDepth; // offset 0xDC1, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xDC2, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xDC3, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xDC4, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xDC5, size 0x1, align 1
    bool m_bGrabbable; // offset 0xDC6, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xDC7, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x3]; // offset 0xDC9
    int32 m_nExplicitImageLayout; // offset 0xDCC, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xDD0, size 0x1, align 1
    char _pad_0DD1[0xF]; // offset 0xDD1
};
