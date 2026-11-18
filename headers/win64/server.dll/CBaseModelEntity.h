#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x498, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x4A0, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x4B8, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x4C0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x4C4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x4C8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x4CC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x4D0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x4D4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x4D8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x4DC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x4E0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x4E4, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x4E8, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x4E9, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x4EA, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x4EB, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x4EC, size 0x1, align 1
    char _pad_04ED[0x3]; // offset 0x4ED
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x4F0, size 0x8, align 8
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x4F8, size 0x28, align 8
    char _pad_0520[0x50]; // offset 0x520
    GameTime_t m_flDissolveStartTime; // offset 0x570, size 0x4, align 255
    char _pad_0574[0x4]; // offset 0x574
    CEntityIOOutput m_OnIgnite; // offset 0x578, size 0x18, align 255
    int32 m_iViewerID; // offset 0x590, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x594, size 0x4, align 4
    RenderMode_t m_nRenderMode; // offset 0x598, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x599, size 0x1, align 1
    int16[10] m_iFOWTempViewerID; // offset 0x59A, size 0x14, align 2
    RenderFx_t m_nRenderFX; // offset 0x5AE, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x5AF, size 0x1, align 1
    char _pad_05B0[0x18]; // offset 0x5B0
    Color m_clrRender; // offset 0x5C8, size 0x4, align 4
    char _pad_05CC[0x4]; // offset 0x5CC
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x5D0, size 0x68, align 8
    bool m_bRenderToCubemaps; // offset 0x638, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0x639, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x63A, size 0x1, align 1
    char _pad_063B[0x5]; // offset 0x63B
    CCollisionProperty m_Collision; // offset 0x640, size 0xC8, align 8
    CGlowProperty m_Glow; // offset 0x708, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x760, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x764, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x768, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x76C, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x770, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x774, size 0x1, align 1
    char _pad_0775[0x3]; // offset 0x775
    uint32 m_bodyGroupTotalRequestCount; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
    CUtlVectorFixedGrowable< CBaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0x780, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x858, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x880, size 0x28, align 255
    char _pad_08A8[0x8]; // offset 0x8A8
    uint32[1] m_bvDisabledHitGroups; // offset 0x8B0, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_08B4[0x4]; // offset 0x8B4
};
