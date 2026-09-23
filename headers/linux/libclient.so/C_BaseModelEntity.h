#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0x1020, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0xA78, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0xA80, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0xA98, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0xAA0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0xAA4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0xAA8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0xAAC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0xAB0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0xAB4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0xAB8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0xABC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0xAC0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0xAC4, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0xAC8, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0xAC9, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0xACA, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0xACB, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0xACC, size 0x1, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0xAD0, size 0x8, align 8
    char _pad_0AD8[0x120]; // offset 0xAD8
    bool m_bInitModelEffects; // offset 0xBF8, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0xBF9, size 0x1, align 1 | MNotSaved
    char _pad_0BFA[0x2]; // offset 0xBFA
    int32 m_iOldHealth; // offset 0xBFC, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0xC00, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0xC01, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0xC02, size 0x1, align 1
    char _pad_0C03[0x1D]; // offset 0xC03
    Color m_clrRender; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0xC28, size 0x68, align 8
    char _pad_0C90[0x18]; // offset 0xC90
    bool m_bRenderToCubemaps; // offset 0xCA8, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0xCA9, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0xCAA, size 0x1, align 1
    char _pad_0CAB[0x5]; // offset 0xCAB
    CCollisionProperty m_Collision; // offset 0xCB0, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0xD68, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xDC0, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xDC4, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xDC8, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xDCC, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xDD0, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xDD4, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xDD5, size 0x1, align 1
    char _pad_0DD6[0x2]; // offset 0xDD6
    uint32 m_bodyGroupTotalRequestCount; // offset 0xDD8, size 0x4, align 4
    char _pad_0DDC[0x4]; // offset 0xDDC
    CUtlVectorFixedGrowable< C_BaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0xDE0, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xEB8, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xEE0, size 0x28, align 255
    char _pad_0F08[0xC0]; // offset 0xF08
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xFC8, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xFD0, size 0x4, align 4 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xFD4, size 0x1, align 1 | MNotSaved
    char _pad_0FD5[0x3B]; // offset 0xFD5
    uint32[1] m_bvDisabledHitGroups; // offset 0x1010, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_1014[0xC]; // offset 0x1014
};
