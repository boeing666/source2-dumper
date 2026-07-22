#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xFB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0xAF0, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0xAF8, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0xB10, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0xB18, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0xB1C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0xB20, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0xB24, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0xB28, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0xB2C, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0xB30, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0xB34, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0xB38, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0xB3C, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0xB40, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0xB41, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0xB42, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0xB43, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0xB44, size 0x1, align 1
    char _pad_0B45[0x3]; // offset 0xB45
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0xB48, size 0x8, align 8
    char _pad_0B50[0x120]; // offset 0xB50
    bool m_bInitModelEffects; // offset 0xC70, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0xC71, size 0x1, align 1 | MNotSaved
    char _pad_0C72[0x2]; // offset 0xC72
    int32 m_iOldHealth; // offset 0xC74, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0xC78, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0xC79, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0xC7A, size 0x1, align 1
    char _pad_0C7B[0x1D]; // offset 0xC7B
    Color m_clrRender; // offset 0xC98, size 0x4, align 1
    char _pad_0C9C[0x4]; // offset 0xC9C
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0xCA0, size 0x68, align 8
    char _pad_0D08[0x18]; // offset 0xD08
    bool m_bRenderToCubemaps; // offset 0xD20, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0xD21, size 0x1, align 1
    char _pad_0D22[0x6]; // offset 0xD22
    CCollisionProperty m_Collision; // offset 0xD28, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0xDE0, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xE38, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xE3C, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xE40, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xE44, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xE48, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xE4C, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xE4D, size 0x1, align 1
    char _pad_0E4E[0x2]; // offset 0xE4E
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xE50, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xE78, size 0x28, align 255
    char _pad_0EA0[0xB8]; // offset 0xEA0
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xF58, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xF60, size 0x4, align 1 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xF64, size 0x1, align 1 | MNotSaved
    char _pad_0F65[0x3B]; // offset 0xF65
    uint32[1] m_bvDisabledHitGroups; // offset 0xFA0, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0FA4[0xC]; // offset 0xFA4
};
