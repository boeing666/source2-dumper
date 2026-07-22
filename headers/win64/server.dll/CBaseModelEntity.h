#pragma once

class CBaseModelEntity : public CBaseEntity /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x4A8, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x4B0, size 0x18, align 8
    CChoreoComponent* m_pChoreoComponent; // offset 0x4C8, size 0x8, align 8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x4D0, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x4D4, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x4D8, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x4DC, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x4E0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x4E4, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x4E8, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x4EC, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x4F0, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x4F4, size 0x4, align 4
    bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // offset 0x4F8, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // offset 0x4F9, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // offset 0x4FA, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // offset 0x4FB, size 0x1, align 1
    bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // offset 0x4FC, size 0x1, align 1
    char _pad_04FD[0x3]; // offset 0x4FD
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x500, size 0x8, align 8
    CEntityOutputTemplate< CBaseModelEntity::OnDamageLevelChangedArgs_t > m_OnDestructibleHitGroupDamageLevelChanged; // offset 0x508, size 0x28, align 8
    GameTime_t m_flDissolveStartTime; // offset 0x530, size 0x4, align 255
    char _pad_0534[0x4]; // offset 0x534
    CEntityIOOutput m_OnIgnite; // offset 0x538, size 0x18, align 255
    RenderMode_t m_nRenderMode; // offset 0x550, size 0x1, align 1
    RenderFx_t m_nRenderFX; // offset 0x551, size 0x1, align 1
    bool m_bAllowFadeInView; // offset 0x552, size 0x1, align 1
    char _pad_0553[0x1D]; // offset 0x553
    Color m_clrRender; // offset 0x570, size 0x4, align 1
    char _pad_0574[0x4]; // offset 0x574
    CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x578, size 0x68, align 8
    bool m_bRenderToCubemaps; // offset 0x5E0, size 0x1, align 1
    bool m_bNoInterpolate; // offset 0x5E1, size 0x1, align 1
    char _pad_05E2[0x6]; // offset 0x5E2
    CCollisionProperty m_Collision; // offset 0x5E8, size 0xB8, align 8
    CGlowProperty m_Glow; // offset 0x6A0, size 0x58, align 8
    float32 m_flGlowBackfaceMult; // offset 0x6F8, size 0x4, align 4
    float32 m_fadeMinDist; // offset 0x6FC, size 0x4, align 4
    float32 m_fadeMaxDist; // offset 0x700, size 0x4, align 4
    float32 m_flFadeScale; // offset 0x704, size 0x4, align 4
    float32 m_flShadowStrength; // offset 0x708, size 0x4, align 4
    uint8 m_nObjectCulling; // offset 0x70C, size 0x1, align 1
    char _pad_070D[0x3]; // offset 0x70D
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x710, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x738, size 0x28, align 255
    char _pad_0760[0x8]; // offset 0x760
    uint32[1] m_bvDisabledHitGroups; // offset 0x768, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_076C[0x4]; // offset 0x76C
};
