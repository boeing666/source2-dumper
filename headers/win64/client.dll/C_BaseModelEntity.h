#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x600, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x608, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x620, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x628, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x62C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x630, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x634, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x638, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x63C, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x640, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x644, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x648, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x64C, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x650, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x651, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x652, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x653, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x654, size 0x1, align 1
    char _pad_0655[0x3]; // offset 0x655
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x658, size 0x8, align 8
    char _pad_0660[0x120]; // offset 0x660
    bool m_bInitModelEffects; // offset 0x780, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0x781, size 0x1, align 1 | MNotSaved
    bool m_bIsStaticProp; // offset 0x782, size 0x1, align 1 | MNotSaved
    char _pad_0783[0x55]; // offset 0x783
    int32 m_iViewerID; // offset 0x7D8, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x7DC, size 0x4, align 4
    int32 m_iOldHealth; // offset 0x7E0, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x7E4, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x7E5, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x7E6, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x7E7, size 0x1, align 1
    char _pad_07E8[0x18]; // offset 0x7E8
    Color m_clrRender; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x4]; // offset 0x804
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x808, size 0x68, align 8
    char _pad_0870[0x18]; // offset 0x870
    bool m_bRenderToCubemaps; // offset 0x888, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0x889, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x88A, size 0x1, align 1
    char _pad_088B[0x5]; // offset 0x88B
    CCollisionProperty m_Collision; // offset 0x890, size 0xC8, align 8
    CGlowProperty m_Glow; // offset 0x958, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x9B0, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x9B4, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x9B8, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x9BC, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x9C0, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x9C4, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0x9C5, size 0x1, align 1
    char _pad_09C6[0x2]; // offset 0x9C6
    uint32 m_bodyGroupTotalRequestCount; // offset 0x9C8, size 0x4, align 4
    char _pad_09CC[0x4]; // offset 0x9CC
    CUtlVectorFixedGrowable< C_BaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0x9D0, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xAA8, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xAD0, size 0x28, align 255
    char _pad_0AF8[0xB8]; // offset 0xAF8
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xBB0, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xBBC, size 0x1, align 1 | MNotSaved
    char _pad_0BBD[0x3]; // offset 0xBBD
    uint32[1] m_bvDisabledHitGroups; // offset 0xBC0, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0BC4[0x14]; // offset 0xBC4
};
