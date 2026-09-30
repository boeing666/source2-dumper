#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x4B0, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x4B8, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x4D0, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x4D8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x4DC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x4E0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x4E4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x4E8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x4EC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x4F0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x4F4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x4F8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x4FC, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x500, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x501, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x502, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x503, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x504, size 0x1, align 1
    char _pad_0505[0x3]; // offset 0x505
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x508, size 0x8, align 8
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x510, size 0x28, align 8
    GameTime_t m_flDissolveStartTime; // offset 0x538, size 0x4, align 255
    char _pad_053C[0x4]; // offset 0x53C
    CEntityIOOutput m_OnIgnite; // offset 0x540, size 0x18, align 255
    RenderMode_t m_nRenderMode; // offset 0x558, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x559, size 0x1, align 1
    char _pad_055A[0x6]; // offset 0x55A
    CUtlString m_szAddModifier; // offset 0x560, size 0x8, align 8
    bool m_bAllowFadeInView; // offset 0x568, size 0x1, align 1
    char _pad_0569[0x1F]; // offset 0x569
    bool m_bHasCollision; // offset 0x588, size 0x1, align 1
    char _pad_0589[0x3]; // offset 0x589
    VectorWS m_vSupport; // offset 0x58C, size 0xC, align 4
    Color m_clrRender; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x5A0, size 0x68, align 8
    bool m_bRenderToCubemaps; // offset 0x608, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0x609, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x60A, size 0x1, align 1
    char _pad_060B[0x5]; // offset 0x60B
    CCollisionProperty m_Collision; // offset 0x610, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0x6C8, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x720, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x724, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x728, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x72C, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x730, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x734, size 0x1, align 1
    char _pad_0735[0x3]; // offset 0x735
    uint32 m_bodyGroupTotalRequestCount; // offset 0x738, size 0x4, align 4
    char _pad_073C[0x4]; // offset 0x73C
    CUtlVectorFixedGrowable< CBaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0x740, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x818, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x840, size 0x28, align 255
    char _pad_0868[0x8]; // offset 0x868
    uint32[1] m_bvDisabledHitGroups; // offset 0x870, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0874[0x4]; // offset 0x874
};
