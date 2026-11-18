#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xFB0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xDA0, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xDA1, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xDA2, size 0x1, align 1 | MNotSaved
    char _pad_0DA3[0xD]; // offset 0xDA3
    CTransform m_anchorDeltaTransform; // offset 0xDB0, size 0x20, align 16 | MNotSaved
    char _pad_0DD0[0x150]; // offset 0xDD0
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0xF20, size 0x8, align 8 | MNotSaved
    char _pad_0F28[0x20]; // offset 0xF28
    bool m_bIgnoreInput; // offset 0xF48, size 0x1, align 1
    bool m_bLit; // offset 0xF49, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0xF4A, size 0x1, align 1
    char _pad_0F4B[0x1]; // offset 0xF4B
    float32 m_flWidth; // offset 0xF4C, size 0x4, align 4
    float32 m_flHeight; // offset 0xF50, size 0x4, align 4
    float32 m_flDPI; // offset 0xF54, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0xF58, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xF5C, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xF60, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xF64, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xF68, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xF6C, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xF70, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xF74, size 0x1, align 1
    char _pad_0F75[0x3]; // offset 0xF75
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xF78, size 0x18, align 8
    bool m_bOpaque; // offset 0xF90, size 0x1, align 1
    bool m_bNoDepth; // offset 0xF91, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0xF92, size 0x1, align 1
    bool m_bRenderBackface; // offset 0xF93, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0xF94, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0xF95, size 0x1, align 1
    bool m_bGrabbable; // offset 0xF96, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0xF97, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0xF98, size 0x1, align 1
    char _pad_0F99[0x3]; // offset 0xF99
    int32 m_nExplicitImageLayout; // offset 0xF9C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0xFA0, size 0x1, align 1
    char _pad_0FA1[0xF]; // offset 0xFA1
};
