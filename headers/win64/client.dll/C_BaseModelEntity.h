#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x5F8, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x600, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x618, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x620, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x624, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x628, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x62C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x630, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x634, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x638, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x63C, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x640, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x644, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x648, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x649, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x64A, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x64B, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x64C, size 0x1, align 1
    char _pad_064D[0x3]; // offset 0x64D
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x650, size 0x8, align 8
    char _pad_0658[0x120]; // offset 0x658
    bool m_bInitModelEffects; // offset 0x778, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0x779, size 0x1, align 1 | MNotSaved
    bool m_bIsStaticProp; // offset 0x77A, size 0x1, align 1 | MNotSaved
    char _pad_077B[0x1]; // offset 0x77B
    int32 m_iViewerID; // offset 0x77C, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x780, size 0x4, align 4
    int32 m_iOldHealth; // offset 0x784, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x788, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x789, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x78A, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x78B, size 0x1, align 1
    char _pad_078C[0x1C]; // offset 0x78C
    Color m_clrRender; // offset 0x7A8, size 0x4, align 1
    char _pad_07AC[0x4]; // offset 0x7AC
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x7B0, size 0x68, align 8
    char _pad_0818[0x18]; // offset 0x818
    bool m_bRenderToCubemaps; // offset 0x830, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x831, size 0x1, align 1
    char _pad_0832[0x6]; // offset 0x832
    CCollisionProperty m_Collision; // offset 0x838, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0x8F0, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x948, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x94C, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x950, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x954, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x958, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x95C, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0x95D, size 0x1, align 1
    char _pad_095E[0x2]; // offset 0x95E
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x960, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x988, size 0x28, align 255
    char _pad_09B0[0xB8]; // offset 0x9B0
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xA68, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xA70, size 0x4, align 1 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xA74, size 0x1, align 1 | MNotSaved
    char _pad_0A75[0x3]; // offset 0xA75
    uint32[1] m_bvDisabledHitGroups; // offset 0xA78, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0A7C[0xC]; // offset 0xA7C
};
