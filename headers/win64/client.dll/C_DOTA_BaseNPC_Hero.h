#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (client)
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
    char _pad_0001[0x1ABF]; // offset 0x1
    bool m_bDisableWearables; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    int32 m_iCurrentXP; // offset 0x1AC4, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x1AC8, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1ACC, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1AD0, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1AD4, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1AD8, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1ADC, size 0x4, align 4
    float32 m_flStrength; // offset 0x1AE0, size 0x4, align 4
    float32 m_flAgility; // offset 0x1AE4, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1AE8, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1AEC, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1AF0, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1AF4, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x1AF8, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1B10, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1B28, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1B2C, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1B30, size 0x4, align 4
    bool m_bLifeState; // offset 0x1B34, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1B35, size 0x1, align 1
    char _pad_1B36[0x2]; // offset 0x1B36
    ParticleIndex_t m_nFXStunIndex; // offset 0x1B38, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1B3C, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x24]; // offset 0x1B44
    PlayerID_t m_iPlayerID; // offset 0x1B68, size 0x4, align 255
    char _pad_1B6C[0x4]; // offset 0x1B6C
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1B70, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1B78, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1B7C, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1B80, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1B81, size 0x1, align 1
    char _pad_1B82[0x2]; // offset 0x1B82
    GameTime_t m_flSpawnedAt; // offset 0x1B84, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1B88, size 0x1, align 1
    char _pad_1B89[0x3]; // offset 0x1B89
    int32 m_iPrimaryAttribute; // offset 0x1B8C, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1B90, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1B94, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1B98, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1B9C, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1BA0, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1BA4, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1BA8, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1BAC, size 0x1, align 1
    char _pad_1BAD[0x3]; // offset 0x1BAD
    GameTime_t m_flLastDispellTime; // offset 0x1BB0, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1BB4, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1BB8, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1BBC, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1BC0, size 0x4, align 255
    char _pad_1BC4[0x4]; // offset 0x1BC4
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1BC8, size 0x18, align 8
    char _pad_1BE0[0x208]; // offset 0x1BE0
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1DE8, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1E08, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1E0C, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1E10, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1E14, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1E18, size 0x1, align 1
    char _pad_1E19[0xF]; // offset 0x1E19
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1E28, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1E48, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1E60, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1E78, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x1E7C, size 0x4, align 4
    char _pad_1E80[0x8]; // offset 0x1E80
};
