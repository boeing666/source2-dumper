#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    float32 m_flStrength; // offset 0x1AC0, size 0x4, align 4
    float32 m_flAgility; // offset 0x1AC4, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1AC8, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1ACC, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1AD0, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1AD4, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1AD8, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x1ADC, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1AE0, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x1AE4, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1AE8, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1AEC, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1AF0, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x1AF4, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1AF8, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x1AFC, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1B00, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1B01, size 0x1, align 1
    char _pad_1B02[0x2]; // offset 0x1B02
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1B08, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x1B0C, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1B10, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x1B14, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1B18, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x1B1C, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x1B28, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x1B40, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x1B58, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x1B5C, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1B60, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1B64, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1B68, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x1B6C, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1B70, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1B74, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x1B78, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x1B7C, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x1B80, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x1B84, size 0x1, align 1
    char _pad_1B85[0x3]; // offset 0x1B85
    PlayerID_t m_iPlayerID; // offset 0x1B88, size 0x4, align 255
    char _pad_1B8C[0x4]; // offset 0x1B8C
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1B90, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1B98, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1B9C, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x44]; // offset 0x1BA4
    CountdownTimer m_RespawnMusicTimer; // offset 0x1BE8, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1C00, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1C18, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1C30, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1C48, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1C4C, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1C50, size 0x1, align 1
    char _pad_1C51[0x3]; // offset 0x1C51
    CHandle< CDOTAWearableItem >[112] m_hTogglableWearable; // offset 0x1C54, size 0x1C0, align 4
    char _pad_1E14[0x4]; // offset 0x1E14
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x1E18, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x1E38, size 0x18, align 8
    bool m_bReincarnating; // offset 0x1E50, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1E51, size 0x1, align 1
    char _pad_1E52[0x2]; // offset 0x1E52
    GameTime_t m_flSpawnedAt; // offset 0x1E54, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x1E58, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1E70, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x1E88, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x1EA0, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x1EB8, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x1ED0, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x1EE8, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x1EEC, size 0x1, align 1
    char _pad_1EED[0x3]; // offset 0x1EED
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x1EF0, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x1F08, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x1F20, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x1F38, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x1F50, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x1F68, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x1F80, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x1F98, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x1FB0, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x1FB1, size 0x1, align 1
    char _pad_1FB2[0x6]; // offset 0x1FB2
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x1FB8, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x1FD0, size 0x1, align 1
    char _pad_1FD1[0x7]; // offset 0x1FD1
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x1FD8, size 0x28, align 255
    char _pad_2000[0x28]; // offset 0x2000
    CUtlString m_strCustomKillEffect; // offset 0x2028, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x2030, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x2038, size 0x4, align 255
    char _pad_203C[0x4]; // offset 0x203C
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x2040, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x2058, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x2070, size 0x18, align 8
    char _pad_2088[0x8]; // offset 0x2088
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x2090, size 0x18, align 8
    char _pad_20A8[0x4]; // offset 0x20A8
    float32 m_flLastTimeLookedAtByDirector; // offset 0x20AC, size 0x4, align 4
};
