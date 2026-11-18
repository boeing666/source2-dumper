#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x20A0, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bStoredVisibility : 1; // offset 0x0
    uint8_t m_bResetVisibility : 1; // offset 0x0
    uint8_t m_bStoreOldVisibility : 1; // offset 0x0
    uint8_t m_bInReloadEvent : 1; // offset 0x0
    uint8_t m_bBuildingCombinedModel : 1; // offset 0x0
    uint8_t m_bRecombineForMaterialsOnly : 1; // offset 0x0
    uint8_t m_bForceBuildCombinedModel : 1; // offset 0x0
    uint8_t m_bUpdateClientsideWearables : 1; // offset 0x0
    uint8_t m_bWasFrozen : 1; // offset 0x0
    uint8_t m_bBuybackDisabled : 1; // offset 0x0
    char _pad_0001[0x1CD7]; // offset 0x1
    bool m_bDisableWearables; // offset 0x1CD8, size 0x1, align 1
    char _pad_1CD9[0x3]; // offset 0x1CD9
    int32 m_iCurrentXP; // offset 0x1CDC, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x1CE0, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1CE4, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1CE8, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1CEC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1CF0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1CF4, size 0x4, align 4
    float32 m_flStrength; // offset 0x1CF8, size 0x4, align 4
    float32 m_flAgility; // offset 0x1CFC, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1D00, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1D04, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1D08, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1D0C, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x1D10, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1D28, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1D40, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1D44, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1D48, size 0x4, align 4
    bool m_bLifeState; // offset 0x1D4C, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1D4D, size 0x1, align 1
    char _pad_1D4E[0x2]; // offset 0x1D4E
    ParticleIndex_t m_nFXStunIndex; // offset 0x1D50, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1D54, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1D58, size 0x4, align 255
    char _pad_1D5C[0x24]; // offset 0x1D5C
    PlayerID_t m_iPlayerID; // offset 0x1D80, size 0x4, align 255
    char _pad_1D84[0x4]; // offset 0x1D84
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1D88, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1D90, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1D94, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1D98, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1D99, size 0x1, align 1
    char _pad_1D9A[0x2]; // offset 0x1D9A
    GameTime_t m_flSpawnedAt; // offset 0x1D9C, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1DA0, size 0x1, align 1
    char _pad_1DA1[0x3]; // offset 0x1DA1
    int32 m_iPrimaryAttribute; // offset 0x1DA4, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1DA8, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1DAC, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1DB0, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1DB4, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1DB8, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1DBC, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1DC0, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1DC4, size 0x1, align 1
    char _pad_1DC5[0x3]; // offset 0x1DC5
    GameTime_t m_flLastDispellTime; // offset 0x1DC8, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1DCC, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1DD0, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1DD4, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1DD8, size 0x4, align 255
    char _pad_1DDC[0x4]; // offset 0x1DDC
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1DE0, size 0x18, align 8
    char _pad_1DF8[0x208]; // offset 0x1DF8
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x2000, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x2020, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x2024, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x2028, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x202C, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x2030, size 0x1, align 1
    char _pad_2031[0xF]; // offset 0x2031
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x2040, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x2060, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x2078, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x2090, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x2094, size 0x4, align 4
    char _pad_2098[0x8]; // offset 0x2098
};
