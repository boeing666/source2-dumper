#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xE10, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBE8]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xBE8, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xBE9, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xBEA, size 0x1, align 1 | MNotSaved
    char _pad_0BEB[0x5]; // offset 0xBEB
    CTransform m_anchorDeltaTransform; // offset 0xBF0, size 0x20, align 16 | MNotSaved
    char _pad_0C10[0x170]; // offset 0xC10
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xD80, size 0x8, align 8 | MNotSaved
    char _pad_0D88[0x20]; // offset 0xD88
    bool m_bIgnoreInput; // offset 0xDA8, size 0x1, align 1
    bool m_bLit; // offset 0xDA9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xDAA, size 0x1, align 1
    char _pad_0DAB[0x1]; // offset 0xDAB
    float32 m_flWidth; // offset 0xDAC, size 0x4, align 4
    float32 m_flHeight; // offset 0xDB0, size 0x4, align 4
    float32 m_flDPI; // offset 0xDB4, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xDB8, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xDBC, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xDC0, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xDC4, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xDC8, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xDCC, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xDD0, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xDD4, size 0x1, align 1
    char _pad_0DD5[0x3]; // offset 0xDD5
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xDD8, size 0x18, align 8
    bool m_bOpaque; // offset 0xDF0, size 0x1, align 1
    bool m_bNoDepth; // offset 0xDF1, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xDF2, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xDF3, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xDF4, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xDF5, size 0x1, align 1
    bool m_bGrabbable; // offset 0xDF6, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xDF7, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xDF8, size 0x1, align 1
    char _pad_0DF9[0x3]; // offset 0xDF9
    int32 m_nExplicitImageLayout; // offset 0xDFC, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xE00, size 0x1, align 1
    char _pad_0E01[0xF]; // offset 0xE01
};
