#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1270, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1058]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0x1058, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0x1059, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0x105A, size 0x1, align 1 | MNotSaved
    char _pad_105B[0x5]; // offset 0x105B
    CTransform m_anchorDeltaTransform; // offset 0x1060, size 0x20, align 16 | MNotSaved
    char _pad_1080[0x168]; // offset 0x1080
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0x11E8, size 0x8, align 8 | MNotSaved
    char _pad_11F0[0x20]; // offset 0x11F0
    bool m_bIgnoreInput; // offset 0x1210, size 0x1, align 1
    bool m_bLit; // offset 0x1211, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x1212, size 0x1, align 1
    char _pad_1213[0x1]; // offset 0x1213
    float32 m_flWidth; // offset 0x1214, size 0x4, align 4
    float32 m_flHeight; // offset 0x1218, size 0x4, align 4
    float32 m_flDPI; // offset 0x121C, size 0x4, align 4
    float32 m_flWindowUIScale; // offset 0x1220, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x1224, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x1228, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x122C, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x1230, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x1234, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x1238, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x123C, size 0x1, align 1
    char _pad_123D[0x3]; // offset 0x123D
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x1240, size 0x18, align 8
    bool m_bOpaque; // offset 0x1258, size 0x1, align 1
    bool m_bNoDepth; // offset 0x1259, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x125A, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x125B, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x125C, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x125D, size 0x1, align 1
    bool m_bGrabbable; // offset 0x125E, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x125F, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x1260, size 0x1, align 1
    char _pad_1261[0x3]; // offset 0x1261
    int32 m_nExplicitImageLayout; // offset 0x1264, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x1268, size 0x1, align 1
    char _pad_1269[0x7]; // offset 0x1269
};
