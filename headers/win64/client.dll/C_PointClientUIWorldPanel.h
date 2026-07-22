#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1210, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFE8]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xFE8, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xFE9, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xFEA, size 0x1, align 1 | MNotSaved
    char _pad_0FEB[0x5]; // offset 0xFEB
    CTransform m_anchorDeltaTransform; // offset 0xFF0, size 0x20, align 16 | MNotSaved
    char _pad_1010[0x170]; // offset 0x1010
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0x1180, size 0x8, align 8 | MNotSaved
    char _pad_1188[0x20]; // offset 0x1188
    bool m_bIgnoreInput; // offset 0x11A8, size 0x1, align 1
    bool m_bLit; // offset 0x11A9, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x11AA, size 0x1, align 1
    char _pad_11AB[0x1]; // offset 0x11AB
    float32 m_flWidth; // offset 0x11AC, size 0x4, align 4
    float32 m_flHeight; // offset 0x11B0, size 0x4, align 4
    float32 m_flDPI; // offset 0x11B4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x11B8, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x11BC, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x11C0, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x11C4, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x11C8, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x11CC, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x11D0, size 0x1, align 1
    char _pad_11D1[0x7]; // offset 0x11D1
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x11D8, size 0x18, align 8
    bool m_bOpaque; // offset 0x11F0, size 0x1, align 1
    bool m_bNoDepth; // offset 0x11F1, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x11F2, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x11F3, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x11F4, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x11F5, size 0x1, align 1
    bool m_bGrabbable; // offset 0x11F6, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x11F7, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x11F8, size 0x1, align 1
    char _pad_11F9[0x3]; // offset 0x11F9
    int32 m_nExplicitImageLayout; // offset 0x11FC, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x1200, size 0x1, align 1
    char _pad_1201[0xF]; // offset 0x1201
};
