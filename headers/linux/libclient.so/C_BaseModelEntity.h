#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xD68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x780, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x788, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x7A0, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x7A8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x7AC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x7B0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x7B4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x7B8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x7BC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x7C0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x7C4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x7C8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x7CC, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x7D0, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x7D1, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x7D2, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x7D3, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x7D4, size 0x1, align 1
    char _pad_07D5[0x3]; // offset 0x7D5
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x7D8, size 0x8, align 8
    char _pad_07E0[0x120]; // offset 0x7E0
    bool m_bInitModelEffects; // offset 0x900, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0x901, size 0x1, align 1 | MNotSaved
    bool m_bIsStaticProp; // offset 0x902, size 0x1, align 1 | MNotSaved
    char _pad_0903[0x55]; // offset 0x903
    int32 m_iViewerID; // offset 0x958, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x95C, size 0x4, align 4
    int32 m_iOldHealth; // offset 0x960, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x964, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x965, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x966, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x967, size 0x1, align 1
    char _pad_0968[0x18]; // offset 0x968
    Color m_clrRender; // offset 0x980, size 0x4, align 4
    char _pad_0984[0x4]; // offset 0x984
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x988, size 0x68, align 8
    char _pad_09F0[0x18]; // offset 0x9F0
    bool m_bRenderToCubemaps; // offset 0xA08, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0xA09, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0xA0A, size 0x1, align 1
    char _pad_0A0B[0x5]; // offset 0xA0B
    CCollisionProperty m_Collision; // offset 0xA10, size 0xD0, align 8
    CGlowProperty m_Glow; // offset 0xAE0, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xB38, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xB3C, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xB40, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xB44, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xB48, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xB4C, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xB4D, size 0x1, align 1
    char _pad_0B4E[0x2]; // offset 0xB4E
    uint32 m_bodyGroupTotalRequestCount; // offset 0xB50, size 0x4, align 4
    char _pad_0B54[0x4]; // offset 0xB54
    CUtlVectorFixedGrowable< C_BaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0xB58, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xC30, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xC58, size 0x28, align 255
    char _pad_0C80[0xC0]; // offset 0xC80
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xD40, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xD48, size 0x4, align 4 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xD4C, size 0x1, align 1 | MNotSaved
    char _pad_0D4D[0x3]; // offset 0xD4D
    uint32[1] m_bvDisabledHitGroups; // offset 0xD50, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0D54[0x14]; // offset 0xD54
};
