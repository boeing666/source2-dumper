#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1300, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x10D0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0x10D0, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0x10D1, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0x10D2, size 0x1, align 1 | MNotSaved
    char _pad_10D3[0xD]; // offset 0x10D3
    CTransform m_anchorDeltaTransform; // offset 0x10E0, size 0x20, align 16 | MNotSaved
    char _pad_1100[0x170]; // offset 0x1100
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0x1270, size 0x8, align 8 | MNotSaved
    char _pad_1278[0x20]; // offset 0x1278
    bool m_bIgnoreInput; // offset 0x1298, size 0x1, align 1
    bool m_bLit; // offset 0x1299, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x129A, size 0x1, align 1
    char _pad_129B[0x1]; // offset 0x129B
    float32 m_flWidth; // offset 0x129C, size 0x4, align 4
    float32 m_flHeight; // offset 0x12A0, size 0x4, align 4
    float32 m_flDPI; // offset 0x12A4, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0x12A8, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x12AC, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x12B0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x12B4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x12B8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x12BC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x12C0, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x12C4, size 0x1, align 1
    char _pad_12C5[0x3]; // offset 0x12C5
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x12C8, size 0x18, align 8
    bool m_bOpaque; // offset 0x12E0, size 0x1, align 1
    bool m_bNoDepth; // offset 0x12E1, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x12E2, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x12E3, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x12E4, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x12E5, size 0x1, align 1
    bool m_bGrabbable; // offset 0x12E6, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x12E7, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x12E8, size 0x1, align 1
    char _pad_12E9[0x3]; // offset 0x12E9
    int32 m_nExplicitImageLayout; // offset 0x12EC, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x12F0, size 0x1, align 1
    char _pad_12F1[0xF]; // offset 0x12F1
};
