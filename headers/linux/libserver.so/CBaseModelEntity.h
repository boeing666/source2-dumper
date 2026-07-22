#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x788, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x790, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x7A8, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x7B0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x7B4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x7B8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x7BC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x7C0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x7C4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x7C8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x7CC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x7D0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x7D4, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x7D8, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x7D9, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x7DA, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x7DB, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x7DC, size 0x1, align 1
    char _pad_07DD[0x3]; // offset 0x7DD
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x7E0, size 0x8, align 8
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x7E8, size 0x28, align 8
    GameTime_t m_flDissolveStartTime; // offset 0x810, size 0x4, align 255
    char _pad_0814[0x4]; // offset 0x814
    CEntityIOOutput m_OnIgnite; // offset 0x818, size 0x18, align 255
    RenderMode_t m_nRenderMode; // offset 0x830, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x831, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x832, size 0x1, align 1
    char _pad_0833[0x1D]; // offset 0x833
    Color m_clrRender; // offset 0x850, size 0x4, align 1
    char _pad_0854[0x4]; // offset 0x854
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x858, size 0x68, align 8
    bool m_bRenderToCubemaps; // offset 0x8C0, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x8C1, size 0x1, align 1
    char _pad_08C2[0x6]; // offset 0x8C2
    CCollisionProperty m_Collision; // offset 0x8C8, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0x980, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x9D8, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x9DC, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x9E0, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x9E4, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x9E8, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x9EC, size 0x1, align 1
    char _pad_09ED[0x3]; // offset 0x9ED
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x9F0, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xA18, size 0x28, align 255
    char _pad_0A40[0x8]; // offset 0xA40
    uint32[1] m_bvDisabledHitGroups; // offset 0xA48, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0A4C[0x4]; // offset 0xA4C
};
