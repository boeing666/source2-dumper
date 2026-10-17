#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xF50, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xD38, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xD39, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xD3A, size 0x1, align 1 | MNotSaved
    char _pad_0D3B[0x5]; // offset 0xD3B
    CTransform m_anchorDeltaTransform; // offset 0xD40, size 0x20, align 16 | MNotSaved
    char _pad_0D60[0x168]; // offset 0xD60
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xEC8, size 0x8, align 8 | MNotSaved
    char _pad_0ED0[0x20]; // offset 0xED0
    bool m_bIgnoreInput; // offset 0xEF0, size 0x1, align 1
    bool m_bLit; // offset 0xEF1, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xEF2, size 0x1, align 1
    char _pad_0EF3[0x1]; // offset 0xEF3
    float32 m_flWidth; // offset 0xEF4, size 0x4, align 4
    float32 m_flHeight; // offset 0xEF8, size 0x4, align 4
    float32 m_flDPI; // offset 0xEFC, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xF00, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xF04, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xF08, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xF0C, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xF10, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xF14, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xF18, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xF1C, size 0x1, align 1
    char _pad_0F1D[0x3]; // offset 0xF1D
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xF20, size 0x18, align 8
    bool m_bOpaque; // offset 0xF38, size 0x1, align 1
    bool m_bNoDepth; // offset 0xF39, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xF3A, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xF3B, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xF3C, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xF3D, size 0x1, align 1
    bool m_bGrabbable; // offset 0xF3E, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xF3F, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xF40, size 0x1, align 1
    char _pad_0F41[0x3]; // offset 0xF41
    int32 m_nExplicitImageLayout; // offset 0xF44, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xF48, size 0x1, align 1
    char _pad_0F49[0x7]; // offset 0xF49
};
