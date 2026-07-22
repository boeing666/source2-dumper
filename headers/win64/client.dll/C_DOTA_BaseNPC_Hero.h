#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D80, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bStoredVisibility : 1; // offset 0x0
    uint8_t m_bInReloadEvent : 1; // offset 0x0
    uint8_t m_bBuildingCombinedModel : 1; // offset 0x0
    uint8_t m_bRecombineForMaterialsOnly : 1; // offset 0x0
    uint8_t m_bForceBuildCombinedModel : 1; // offset 0x0
    uint8_t m_bUpdateClientsideWearables : 1; // offset 0x0
    uint8_t m_bBuybackDisabled : 1; // offset 0x0
    uint8_t m_bWasFrozen : 1; // offset 0x0
    uint8_t m_bResetVisibility : 1; // offset 0x0
    uint8_t m_bStoreOldVisibility : 1; // offset 0x0
    char _pad_0001[0x19B7]; // offset 0x1
    bool m_bDisableWearables; // offset 0x19B8, size 0x1, align 1
    char _pad_19B9[0x3]; // offset 0x19B9
    int32 m_iCurrentXP; // offset 0x19BC, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x19C0, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x19C4, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x19C8, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x19CC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x19D0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x19D4, size 0x4, align 4
    float32 m_flStrength; // offset 0x19D8, size 0x4, align 4
    float32 m_flAgility; // offset 0x19DC, size 0x4, align 4
    float32 m_flIntellect; // offset 0x19E0, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x19E4, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x19E8, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x19EC, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x19F0, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1A08, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1A20, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1A24, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1A28, size 0x4, align 4
    bool m_bLifeState; // offset 0x1A2C, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1A2D, size 0x1, align 1
    char _pad_1A2E[0x2]; // offset 0x1A2E
    ParticleIndex_t m_nFXStunIndex; // offset 0x1A30, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1A34, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1A38, size 0x4, align 255
    char _pad_1A3C[0x24]; // offset 0x1A3C
    PlayerID_t m_iPlayerID; // offset 0x1A60, size 0x4, align 255
    char _pad_1A64[0x4]; // offset 0x1A64
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1A68, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1A70, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1A74, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1A78, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1A79, size 0x1, align 1
    char _pad_1A7A[0x2]; // offset 0x1A7A
    GameTime_t m_flSpawnedAt; // offset 0x1A7C, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 m_iPrimaryAttribute; // offset 0x1A84, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1A88, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1A8C, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1A90, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1A94, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1A9C, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1AA0, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
    GameTime_t m_flLastDispellTime; // offset 0x1AA8, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1AAC, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1AB4, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1AC0, size 0x18, align 8
    char _pad_1AD8[0x208]; // offset 0x1AD8
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1CE0, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1D00, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1D04, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1D08, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1D0C, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1D10, size 0x1, align 1
    char _pad_1D11[0xF]; // offset 0x1D11
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1D20, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1D40, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1D58, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1D70, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x1D74, size 0x4, align 4
    char _pad_1D78[0x8]; // offset 0x1D78
};
