#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D88, align 0x8 [vtable] (client)
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
    char _pad_0001[0x19BF]; // offset 0x1
    bool m_bDisableWearables; // offset 0x19C0, size 0x1, align 1
    char _pad_19C1[0x3]; // offset 0x19C1
    int32 m_iCurrentXP; // offset 0x19C4, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x19C8, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x19CC, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x19D0, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x19D4, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x19D8, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x19DC, size 0x4, align 4
    float32 m_flStrength; // offset 0x19E0, size 0x4, align 4
    float32 m_flAgility; // offset 0x19E4, size 0x4, align 4
    float32 m_flIntellect; // offset 0x19E8, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x19EC, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x19F0, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x19F4, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x19F8, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1A10, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1A28, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1A2C, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1A30, size 0x4, align 4
    bool m_bLifeState; // offset 0x1A34, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1A35, size 0x1, align 1
    char _pad_1A36[0x2]; // offset 0x1A36
    ParticleIndex_t m_nFXStunIndex; // offset 0x1A38, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1A3C, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1A40, size 0x4, align 255
    char _pad_1A44[0x24]; // offset 0x1A44
    PlayerID_t m_iPlayerID; // offset 0x1A68, size 0x4, align 255
    char _pad_1A6C[0x4]; // offset 0x1A6C
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1A70, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1A78, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1A7C, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1A80, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1A81, size 0x1, align 1
    char _pad_1A82[0x2]; // offset 0x1A82
    GameTime_t m_flSpawnedAt; // offset 0x1A84, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    int32 m_iPrimaryAttribute; // offset 0x1A8C, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1A90, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1A98, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1A9C, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1AA0, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1AA4, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1AA8, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    GameTime_t m_flLastDispellTime; // offset 0x1AB0, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1AB4, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1AB8, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1ABC, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1AC8, size 0x18, align 8
    char _pad_1AE0[0x208]; // offset 0x1AE0
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1CE8, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1D08, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1D0C, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1D10, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1D14, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1D18, size 0x1, align 1
    char _pad_1D19[0xF]; // offset 0x1D19
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1D28, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1D48, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1D60, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1D78, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x1D7C, size 0x4, align 4
    char _pad_1D80[0x8]; // offset 0x1D80
};
