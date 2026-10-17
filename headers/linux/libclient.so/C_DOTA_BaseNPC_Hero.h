#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x2010, align 0x8 [vtable] (client)
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
    char _pad_0001[0x1C47]; // offset 0x1
    bool m_bDisableWearables; // offset 0x1C48, size 0x1, align 1
    char _pad_1C49[0x3]; // offset 0x1C49
    int32 m_iCurrentXP; // offset 0x1C4C, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x1C50, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1C54, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1C58, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1C5C, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1C60, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1C64, size 0x4, align 4
    float32 m_flStrength; // offset 0x1C68, size 0x4, align 4
    float32 m_flAgility; // offset 0x1C6C, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1C70, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1C74, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1C78, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1C7C, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x1C80, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1C98, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1CB0, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1CB4, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1CB8, size 0x4, align 4
    bool m_bLifeState; // offset 0x1CBC, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1CBD, size 0x1, align 1
    char _pad_1CBE[0x2]; // offset 0x1CBE
    ParticleIndex_t m_nFXStunIndex; // offset 0x1CC0, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1CC4, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1CC8, size 0x4, align 255
    char _pad_1CCC[0x24]; // offset 0x1CCC
    PlayerID_t m_iPlayerID; // offset 0x1CF0, size 0x4, align 255
    char _pad_1CF4[0x4]; // offset 0x1CF4
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1CF8, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1D00, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1D04, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1D08, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1D09, size 0x1, align 1
    char _pad_1D0A[0x2]; // offset 0x1D0A
    GameTime_t m_flSpawnedAt; // offset 0x1D0C, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1D10, size 0x1, align 1
    char _pad_1D11[0x3]; // offset 0x1D11
    int32 m_iPrimaryAttribute; // offset 0x1D14, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1D18, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1D1C, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1D20, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1D24, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1D28, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1D2C, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1D30, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1D34, size 0x1, align 1
    char _pad_1D35[0x3]; // offset 0x1D35
    GameTime_t m_flLastDispellTime; // offset 0x1D38, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1D3C, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1D40, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1D44, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1D48, size 0x4, align 255
    char _pad_1D4C[0x4]; // offset 0x1D4C
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1D50, size 0x18, align 8
    char _pad_1D68[0x208]; // offset 0x1D68
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1F70, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1F90, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1F94, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1F98, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1F9C, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1FA0, size 0x1, align 1
    char _pad_1FA1[0xF]; // offset 0x1FA1
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1FB0, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1FD0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1FE8, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x2000, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x2004, size 0x4, align 4
    char _pad_2008[0x8]; // offset 0x2008
};
