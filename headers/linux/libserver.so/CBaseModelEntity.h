#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (server)
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
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x7D8, size 0x28, align 8
    char _pad_0800[0x50]; // offset 0x800
    GameTime_t m_flDissolveStartTime; // offset 0x850, size 0x4, align 255
    char _pad_0854[0x4]; // offset 0x854
    CEntityIOOutput m_OnIgnite; // offset 0x858, size 0x18, align 255
    int32 m_iViewerID; // offset 0x870, size 0x4, align 4
    int32 m_iTeamVisibilityBitmask; // offset 0x874, size 0x4, align 4
    RenderMode_t m_nRenderMode; // offset 0x878, size 0x1, align 1
    bool m_bVisibilityDirtyFlag; // offset 0x879, size 0x1, align 1
    int16[10] m_iFOWTempViewerID; // offset 0x87A, size 0x14, align 2
    RenderFx_t m_nRenderFX; // offset 0x88E, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x88F, size 0x1, align 1
    char _pad_0890[0x18]; // offset 0x890
    Color m_clrRender; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x8B0, size 0x68, align 8
    bool m_bRenderToCubemaps; // offset 0x918, size 0x1, align 1
    bool m_bExpandRenderBoundsToIncludeCloth; // offset 0x919, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x91A, size 0x1, align 1
    char _pad_091B[0x5]; // offset 0x91B
    CCollisionProperty m_Collision; // offset 0x920, size 0xD0, align 8
    CGlowProperty m_Glow; // offset 0x9F0, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0xA48, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0xA4C, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0xA50, size 0x4, align 4
    float32 m_flFadeScale; // offset 0xA54, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0xA58, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
    uint32 m_bodyGroupTotalRequestCount; // offset 0xA60, size 0x4, align 4
    char _pad_0A64[0x4]; // offset 0xA64
    CUtlVectorFixedGrowable< CBaseModelEntity::BodyGroupRequest_t, 8 > m_bodyGroupRequests; // offset 0xA68, size 0xD8, align 8
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0xB40, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0xB68, size 0x28, align 255
    char _pad_0B90[0x8]; // offset 0xB90
    uint32[1] m_bvDisabledHitGroups; // offset 0xB98, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0B9C[0x4]; // offset 0xB9C
};
