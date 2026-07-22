#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xF38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0xA70, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0xA78, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0xA90, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0xA98, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0xA9C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0xAA0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0xAA4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0xAA8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0xAAC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0xAB0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0xAB4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0xAB8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0xABC, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0xAC0, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0xAC1, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0xAC2, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0xAC3, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0xAC4, size 0x1, align 1
    char _pad_0AC5[0x3]; // offset 0xAC5
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0xAC8, size 0x8, align 8
    char _pad_0AD0[0x120]; // offset 0xAD0
    bool m_bInitModelEffects; // offset 0xBF0, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0xBF1, size 0x1, align 1 | MNotSaved
    char _pad_0BF2[0x2]; // offset 0xBF2
    int32 m_iOldHealth; // offset 0xBF4, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0xBF8, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0xBF9, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0xBFA, size 0x1, align 1
    char _pad_0BFB[0x1D]; // offset 0xBFB
    Color m_clrRender; // offset 0xC18, size 0x4, align 1
    char _pad_0C1C[0x4]; // offset 0xC1C
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0xC20, size 0x68, align 8
    char _pad_0C88[0x18]; // offset 0xC88
    bool m_bRenderToCubemaps; // offset 0xCA0, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0xCA1, size 0x1, align 1
    char _pad_0CA2[0x6]; // offset 0xCA2
    CCollisionProperty m_Collision; // offset 0xCA8, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0xD60, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xDB8, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xDBC, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xDC0, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xDC4, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xDC8, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xDCC, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xDCD, size 0x1, align 1
    char _pad_0DCE[0x2]; // offset 0xDCE
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xDD0, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xDF8, size 0x28, align 255
    char _pad_0E20[0xC0]; // offset 0xE20
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xEE0, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xEE8, size 0x4, align 1 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xEEC, size 0x1, align 1 | MNotSaved
    char _pad_0EED[0x3B]; // offset 0xEED
    uint32[1] m_bvDisabledHitGroups; // offset 0xF28, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0F2C[0xC]; // offset 0xF2C
};
