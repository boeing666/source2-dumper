#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x778, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x780, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x798, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x7A0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x7A4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x7A8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x7AC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x7B0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x7B4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x7B8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x7BC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x7C0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x7C4, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x7C8, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x7C9, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x7CA, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x7CB, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x7CC, size 0x1, align 1
    char _pad_07CD[0x3]; // offset 0x7CD
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x7D0, size 0x8, align 8
    char _pad_07D8[0x120]; // offset 0x7D8
    bool m_bInitModelEffects; // offset 0x8F8, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0x8F9, size 0x1, align 1 | MNotSaved
    bool m_bIsStaticProp; // offset 0x8FA, size 0x1, align 1 | MNotSaved
    char _pad_08FB[0x1]; // offset 0x8FB
    int32 m_iViewerID; // offset 0x8FC, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x900, size 0x4, align 4
    int32 m_iOldHealth; // offset 0x904, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x908, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x909, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x90A, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x90B, size 0x1, align 1
    char _pad_090C[0x1C]; // offset 0x90C
    Color m_clrRender; // offset 0x928, size 0x4, align 1
    char _pad_092C[0x4]; // offset 0x92C
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x930, size 0x68, align 8
    char _pad_0998[0x18]; // offset 0x998
    bool m_bRenderToCubemaps; // offset 0x9B0, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x9B1, size 0x1, align 1
    char _pad_09B2[0x6]; // offset 0x9B2
    CCollisionProperty m_Collision; // offset 0x9B8, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0xA70, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xAC8, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xACC, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xAD0, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xAD4, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xAD8, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xADC, size 0x1, align 1
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0xADD, size 0x1, align 1
    char _pad_0ADE[0x2]; // offset 0xADE
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xAE0, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xB08, size 0x28, align 255
    char _pad_0B30[0xC0]; // offset 0xB30
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0xBF0, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0xBF8, size 0x4, align 1 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0xBFC, size 0x1, align 1 | MNotSaved
    char _pad_0BFD[0x3]; // offset 0xBFD
    uint32[1] m_bvDisabledHitGroups; // offset 0xC00, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0C04[0xC]; // offset 0xC04
};
