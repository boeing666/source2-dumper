#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x21E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C20]; // offset 0x0
    float32 m_flStrength; // offset 0x1C20, size 0x4, align 4
    float32 m_flAgility; // offset 0x1C24, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1C28, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1C2C, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1C30, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1C34, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1C38, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x1C3C, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1C40, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x1C44, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1C48, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1C4C, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1C50, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x1C54, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1C58, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x1C5C, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1C60, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1C61, size 0x1, align 1
    char _pad_1C62[0x2]; // offset 0x1C62
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x1C64, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1C68, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x1C6C, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1C70, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x1C74, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1C78, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x1C7C, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x1C88, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x1CA0, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x1CB8, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x1CBC, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1CC0, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1CC4, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1CC8, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x1CCC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1CD0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1CD4, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x1CD8, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x1CDC, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x1CE0, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x1CE4, size 0x1, align 1
    char _pad_1CE5[0x3]; // offset 0x1CE5
    PlayerID_t m_iPlayerID; // offset 0x1CE8, size 0x4, align 255
    char _pad_1CEC[0x4]; // offset 0x1CEC
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1CF0, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1CF8, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1CFC, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1D00, size 0x4, align 4
    char _pad_1D04[0x44]; // offset 0x1D04
    CountdownTimer m_RespawnMusicTimer; // offset 0x1D48, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1D60, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1D78, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1D90, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1DA8, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1DAC, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1DB0, size 0x1, align 1
    char _pad_1DB1[0x3]; // offset 0x1DB1
    CHandle< CDOTAWearableItem >[103] m_hTogglableWearable; // offset 0x1DB4, size 0x19C, align 4
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x1F50, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x1F70, size 0x18, align 8
    bool m_bReincarnating; // offset 0x1F88, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1F89, size 0x1, align 1
    char _pad_1F8A[0x2]; // offset 0x1F8A
    GameTime_t m_flSpawnedAt; // offset 0x1F8C, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x1F90, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1FA8, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x1FC0, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x1FD8, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x1FF0, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x2008, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x2020, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x2024, size 0x1, align 1
    char _pad_2025[0x3]; // offset 0x2025
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x2028, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x2040, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x2058, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x2070, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x2088, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x20A0, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x20B8, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x20D0, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x20E8, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x20E9, size 0x1, align 1
    char _pad_20EA[0x6]; // offset 0x20EA
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x20F0, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x2108, size 0x1, align 1
    char _pad_2109[0x7]; // offset 0x2109
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x2110, size 0x28, align 255
    char _pad_2138[0x20]; // offset 0x2138
    CUtlString m_strCustomKillEffect; // offset 0x2158, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x2160, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x2168, size 0x4, align 255
    char _pad_216C[0x4]; // offset 0x216C
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x2170, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x2188, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x21A0, size 0x18, align 8
    char _pad_21B8[0x8]; // offset 0x21B8
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x21C0, size 0x18, align 8
    char _pad_21D8[0x4]; // offset 0x21D8
    float32 m_flLastTimeLookedAtByDirector; // offset 0x21DC, size 0x4, align 4
};
