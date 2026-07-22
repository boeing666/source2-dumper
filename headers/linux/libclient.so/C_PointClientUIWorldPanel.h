#pragma once

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x11A0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xF70, size 0x1, align 1 | MNotSaved
    bool m_bMoveViewToPlayerNextThink; // offset 0xF71, size 0x1, align 1 | MNotSaved
    bool m_bCheckCSSClasses; // offset 0xF72, size 0x1, align 1 | MNotSaved
    char _pad_0F73[0xD]; // offset 0xF73
    CTransform m_anchorDeltaTransform; // offset 0xF80, size 0x20, align 16 | MNotSaved
    char _pad_0FA0[0x170]; // offset 0xFA0
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // offset 0x1110, size 0x8, align 8 | MNotSaved
    char _pad_1118[0x20]; // offset 0x1118
    bool m_bIgnoreInput; // offset 0x1138, size 0x1, align 1
    bool m_bLit; // offset 0x1139, size 0x1, align 1
    bool m_bFollowPlayerAcrossTeleport; // offset 0x113A, size 0x1, align 1
    char _pad_113B[0x1]; // offset 0x113B
    float32 m_flWidth; // offset 0x113C, size 0x4, align 4
    float32 m_flHeight; // offset 0x1140, size 0x4, align 4
    float32 m_flDPI; // offset 0x1144, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x1148, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x114C, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x1150, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x1154, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x1158, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x115C, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x1160, size 0x1, align 1
    char _pad_1161[0x7]; // offset 0x1161
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x1168, size 0x18, align 8
    bool m_bOpaque; // offset 0x1180, size 0x1, align 1
    bool m_bNoDepth; // offset 0x1181, size 0x1, align 1
    bool m_bVisibleWhenParentNoDraw; // offset 0x1182, size 0x1, align 1
    bool m_bRenderBackface; // offset 0x1183, size 0x1, align 1
    bool m_bUseOffScreenIndicator; // offset 0x1184, size 0x1, align 1
    bool m_bExcludeFromSaveGames; // offset 0x1185, size 0x1, align 1
    bool m_bGrabbable; // offset 0x1186, size 0x1, align 1
    bool m_bOnlyRenderToTexture; // offset 0x1187, size 0x1, align 1
    bool m_bDisableMipGen; // offset 0x1188, size 0x1, align 1
    char _pad_1189[0x3]; // offset 0x1189
    int32 m_nExplicitImageLayout; // offset 0x118C, size 0x4, align 4
    bool m_bIgnoreParentOrientation; // offset 0x1190, size 0x1, align 1
    char _pad_1191[0xF]; // offset 0x1191
};
