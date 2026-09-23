#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAF8]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0xAF8, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0xB00, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0xB18, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0xB20, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0xB24, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0xB28, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0xB2C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0xB30, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0xB34, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0xB38, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0xB3C, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0xB40, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0xB44, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0xB48, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0xB49, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0xB4A, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0xB4B, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0xB4C, size 0x1, align 1
    char _pad_0B4D[0x3]; // offset 0xB4D
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0xB50, size 0x8, align 8
    char _pad_0B58[0x120]; // offset 0xB58
    bool m_bInitModelEffects; // offset 0xC78, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0xC79, size 0x1, align 1 | MNotSaved
    char _pad_0C7A[0x2]; // offset 0xC7A
    int32 m_iOldHealth; // offset 0xC7C, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0xC80, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0xC81, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0xC82, size 0x1, align 1
    char _pad_0C83[0x1D]; // offset 0xC83
    Color m_clrRender; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0xCA8, size 0x68, align 8
    char _pad_0D10[0x18]; // offset 0xD10
    bool m_bRenderToCubemaps; // offset 0xD28, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0xD29, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0xD2A, size 0x1, align 1
    char _pad_0D2B[0x5]; // offset 0xD2B
    CCollisionProperty m_Collision; // offset 0xD30, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0xDE8, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xE40, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xE44, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xE48, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xE4C, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xE50, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xE54, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xE55, size 0x1, align 1
    char _pad_0E56[0x2]; // offset 0xE56
    uint32 m_bodyGroupTotalRequestCount; // offset 0xE58, size 0x4, align 4
    char _pad_0E5C[0x4]; // offset 0xE5C
    CUtlVectorFixedGrowable< C_BaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0xE60, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xF38, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xF60, size 0x28, align 255
    char _pad_0F88[0xB8]; // offset 0xF88
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0x1040, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0x1048, size 0x4, align 4 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0x104C, size 0x1, align 1 | MNotSaved
    char _pad_104D[0x3B]; // offset 0x104D
    uint32[1] m_bvDisabledHitGroups; // offset 0x1088, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_108C[0xC]; // offset 0x108C
};
