#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (client)
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
    char _pad_0001[0x1B47]; // offset 0x1
    bool m_bDisableWearables; // offset 0x1B48, size 0x1, align 1
    char _pad_1B49[0x3]; // offset 0x1B49
    int32 m_iCurrentXP; // offset 0x1B4C, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x1B50, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1B54, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1B58, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1B5C, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1B60, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1B64, size 0x4, align 4
    float32 m_flStrength; // offset 0x1B68, size 0x4, align 4
    float32 m_flAgility; // offset 0x1B6C, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1B70, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1B74, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1B78, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1B7C, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x1B80, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1B98, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1BB0, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1BB4, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1BB8, size 0x4, align 4
    bool m_bLifeState; // offset 0x1BBC, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1BBD, size 0x1, align 1
    char _pad_1BBE[0x2]; // offset 0x1BBE
    ParticleIndex_t m_nFXStunIndex; // offset 0x1BC0, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1BC4, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1BC8, size 0x4, align 255
    char _pad_1BCC[0x24]; // offset 0x1BCC
    PlayerID_t m_iPlayerID; // offset 0x1BF0, size 0x4, align 255
    char _pad_1BF4[0x4]; // offset 0x1BF4
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1BF8, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1C00, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1C04, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1C08, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1C09, size 0x1, align 1
    char _pad_1C0A[0x2]; // offset 0x1C0A
    GameTime_t m_flSpawnedAt; // offset 0x1C0C, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1C10, size 0x1, align 1
    char _pad_1C11[0x3]; // offset 0x1C11
    int32 m_iPrimaryAttribute; // offset 0x1C14, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1C18, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1C1C, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1C20, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1C24, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1C28, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1C2C, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1C30, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1C34, size 0x1, align 1
    char _pad_1C35[0x3]; // offset 0x1C35
    GameTime_t m_flLastDispellTime; // offset 0x1C38, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1C3C, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1C40, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1C44, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1C48, size 0x4, align 255
    char _pad_1C4C[0x4]; // offset 0x1C4C
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1C50, size 0x18, align 8
    char _pad_1C68[0x208]; // offset 0x1C68
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1E70, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1E90, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1E94, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1E98, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1E9C, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1EA0, size 0x1, align 1
    char _pad_1EA1[0xF]; // offset 0x1EA1
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1EB0, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1ED0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1EE8, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1F00, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x1F04, size 0x4, align 4
    char _pad_1F08[0x8]; // offset 0x1F08
};
