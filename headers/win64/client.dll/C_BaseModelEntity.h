#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client)
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
    char _pad_0782[0x2]; // offset 0x782
    int32 m_iOldHealth; // offset 0x784, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x788, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x789, size 0x1, align 1
    char _pad_078A[0x6]; // offset 0x78A
    CUtlString m_szAddModifier; // offset 0x790, size 0x8, align 8
    bool m_bAllowFadeInView; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x1F]; // offset 0x799
    bool m_bHasCollision; // offset 0x7B8, size 0x1, align 1
    char _pad_07B9[0x3]; // offset 0x7B9
    VectorWS m_vSupport; // offset 0x7BC, size 0xC, align 4
    Color m_clrRender; // offset 0x7C8, size 0x4, align 4
    char _pad_07CC[0x4]; // offset 0x7CC
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x7D0, size 0x68, align 8
    char _pad_0838[0x18]; // offset 0x838
    bool m_bRenderToCubemaps; // offset 0x850, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0x851, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x852, size 0x1, align 1
    char _pad_0853[0x5]; // offset 0x853
    CCollisionProperty m_Collision; // offset 0x858, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0x910, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x968, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x96C, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x970, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x974, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x978, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x97C, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0x97D, size 0x1, align 1
    char _pad_097E[0x2]; // offset 0x97E
    uint32 m_bodyGroupTotalRequestCount; // offset 0x980, size 0x4, align 4
    char _pad_0984[0x4]; // offset 0x984
    CUtlVectorFixedGrowable< C_BaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0x988, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xA60, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xA88, size 0x28, align 255
    char _pad_0AB0[0xB8]; // offset 0xAB0
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xB68, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xB70, size 0x4, align 4 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xB74, size 0x1, align 1 | MNotSaved
    char _pad_0B75[0x23]; // offset 0xB75
    uint32[1] m_bvDisabledHitGroups; // offset 0xB98, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0B9C[0x14]; // offset 0xB9C
};
