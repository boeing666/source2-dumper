#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x4A0, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x4A8, size 0x18, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CChoreoComponent* m_pChoreoComponent; // offset 0x4C0, size 0x8, align 8 | MNetworkEnable MPtrAutoallocate MNetworkChangePointerCallback
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x4C8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x4CC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x4D0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x4D4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x4D8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x4DC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x4E0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x4E4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x4E8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x4EC, size 0x4, align 4
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x4F0, size 0x8, align 8 | MNetworkEnable MPtrAutoallocate MNetworkTypeAlias
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x4F8, size 0x28, align 8
    GameTime_t m_flDissolveStartTime; // offset 0x520, size 0x4, align 255
    char _pad_0524[0x4]; // offset 0x524
    CEntityIOOutput m_OnIgnite; // offset 0x528, size 0x18, align 255
    RenderMode_t m_nRenderMode; // offset 0x540, size 0x1, align 1 | MNetworkEnable
    RenderFx_t m_nRenderFX; // offset 0x541, size 0x1, align 1 | MNetworkEnable
    char _pad_0542[0x6]; // offset 0x542
    CUtlString m_szAddModifier; // offset 0x548, size 0x8, align 8
    bool m_bAllowFadeInView; // offset 0x550, size 0x1, align 1
    char _pad_0551[0x1F]; // offset 0x551
    bool m_bHasCollision; // offset 0x570, size 0x1, align 1
    char _pad_0571[0x3]; // offset 0x571
    VectorWS m_vSupport; // offset 0x574, size 0xC, align 4
    Color m_clrRender; // offset 0x580, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0584[0x4]; // offset 0x584
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x588, size 0x68, align 8 | MNetworkEnable MNetworkChangeCallback
    bool m_bRenderToCubemaps; // offset 0x5F0, size 0x1, align 1 | MNetworkEnable
    bool m_bNoInterpolate; // offset 0x5F1, size 0x1, align 1 | MNetworkEnable
    char _pad_05F2[0x6]; // offset 0x5F2
    CCollisionProperty m_Collision; // offset 0x5F8, size 0xB8, align 255 | MNetworkEnable
    CGlowProperty m_Glow; // offset 0x6B0, size 0x58, align 255 | MNetworkEnable
    float32 m_flGlowBackfaceMult; // offset 0x708, size 0x4, align 4 | MNetworkEnable
    float32 m_fadeMinDist; // offset 0x70C, size 0x4, align 4 | MNetworkEnable
    float32 m_fadeMaxDist; // offset 0x710, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeScale; // offset 0x714, size 0x4, align 4 | MNetworkEnable
    float32 m_flShadowStrength; // offset 0x718, size 0x4, align 4 | MNetworkEnable
    uint8 m_nObjectCulling; // offset 0x71C, size 0x1, align 1 | MNetworkEnable
    char _pad_071D[0x3]; // offset 0x71D
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x720, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x748, size 0x28, align 255 | MNetworkEnable MNetworkPriority MNetworkUserGroup
    char _pad_0770[0x8]; // offset 0x770
    uint32[1] m_bvDisabledHitGroups; // offset 0x778, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MSaveOpsForField
    char _pad_077C[0x4]; // offset 0x77C
};
