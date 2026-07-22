#pragma once

class C_DOTA_BaseNPC_Hero : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (client)
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
    char _pad_0001[0x1B3F]; // offset 0x1
    bool m_bDisableWearables; // offset 0x1B40, size 0x1, align 1
    char _pad_1B41[0x3]; // offset 0x1B41
    int32 m_iCurrentXP; // offset 0x1B44, size 0x4, align 4
    int32 m_iAbilityPoints; // offset 0x1B48, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1B4C, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1B50, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1B54, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1B58, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1B5C, size 0x4, align 4
    float32 m_flStrength; // offset 0x1B60, size 0x4, align 4
    float32 m_flAgility; // offset 0x1B64, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1B68, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1B6C, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1B70, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1B74, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hFacetAbilities; // offset 0x1B78, size 0x18, align 8
    C_NetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1B90, size 0x18, align 8
    int32 m_iRecentDamage; // offset 0x1BA8, size 0x4, align 4
    float32 m_fPainFactor; // offset 0x1BAC, size 0x4, align 4
    float32 m_fTargetPainFactor; // offset 0x1BB0, size 0x4, align 4
    bool m_bLifeState; // offset 0x1BB4, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x1BB5, size 0x1, align 1
    char _pad_1BB6[0x2]; // offset 0x1BB6
    ParticleIndex_t m_nFXStunIndex; // offset 0x1BB8, size 0x4, align 255
    ParticleIndex_t m_nFXSilenceIndex; // offset 0x1BBC, size 0x4, align 255
    ParticleIndex_t m_nFXDeathIndex; // offset 0x1BC0, size 0x4, align 255
    char _pad_1BC4[0x24]; // offset 0x1BC4
    PlayerID_t m_iPlayerID; // offset 0x1BE8, size 0x4, align 255
    char _pad_1BEC[0x4]; // offset 0x1BEC
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1BF0, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1BF8, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1BFC, size 0x4, align 4
    bool m_bReincarnating; // offset 0x1C00, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1C01, size 0x1, align 1
    char _pad_1C02[0x2]; // offset 0x1C02
    GameTime_t m_flSpawnedAt; // offset 0x1C04, size 0x4, align 255
    bool m_bScriptDisableRespawns; // offset 0x1C08, size 0x1, align 1
    char _pad_1C09[0x3]; // offset 0x1C09
    int32 m_iPrimaryAttribute; // offset 0x1C0C, size 0x4, align 4
    int32 m_nLastDrawnHealth; // offset 0x1C10, size 0x4, align 4
    float32 m_flHurtAmount; // offset 0x1C14, size 0x4, align 4
    GameTime_t m_flLastHurtTime; // offset 0x1C18, size 0x4, align 255
    float32 m_flHurtDecayRate; // offset 0x1C1C, size 0x4, align 4
    float32 m_flHealAmount; // offset 0x1C20, size 0x4, align 4
    GameTime_t m_flLastHealTime; // offset 0x1C24, size 0x4, align 255
    float32 m_flHealDecayRate; // offset 0x1C28, size 0x4, align 4
    bool m_bIsFirstTimeHeal; // offset 0x1C2C, size 0x1, align 1
    char _pad_1C2D[0x3]; // offset 0x1C2D
    GameTime_t m_flLastDispellTime; // offset 0x1C30, size 0x4, align 255
    float32 m_flDispellAnimationAmount; // offset 0x1C34, size 0x4, align 4
    float32 m_flDeathAnimationAmount; // offset 0x1C38, size 0x4, align 4
    GameTime_t m_flLastDeathTime; // offset 0x1C3C, size 0x4, align 255
    GameTime_t m_flLastTreeShakeTime; // offset 0x1C40, size 0x4, align 255
    char _pad_1C44[0x4]; // offset 0x1C44
    CountdownTimer m_CenterOnHeroCooldownTimer; // offset 0x1C48, size 0x18, align 8
    char _pad_1C60[0x208]; // offset 0x1C60
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedModels; // offset 0x1E68, size 0x20, align 8
    int32 m_nCurrentCombinedModelIndex; // offset 0x1E88, size 0x4, align 4
    int32 m_nPendingCombinedModelIndex; // offset 0x1E8C, size 0x4, align 4
    HeroID_t m_iHeroID; // offset 0x1E90, size 0x4, align 255
    float32 m_flCheckLegacyItemsAt; // offset 0x1E94, size 0x4, align 4
    bool m_bDisplayAdditionalHeroes; // offset 0x1E98, size 0x1, align 1
    char _pad_1E99[0xF]; // offset 0x1E99
    CStrongHandle< InfoForResourceTypeCModel >[4] m_CombinedParticleModels; // offset 0x1EA8, size 0x20, align 8
    CUtlVector< ParticleIndex_t > m_vecAttachedParticleIndeces; // offset 0x1EC8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hPets; // offset 0x1EE0, size 0x18, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1EF8, size 0x4, align 255
    int32 m_nKillStreakFXTier; // offset 0x1EFC, size 0x4, align 4
    char _pad_1F00[0x8]; // offset 0x1F00
};
