#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x22F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D10]; // offset 0x0
    float32 m_flStrength; // offset 0x1D10, size 0x4, align 4
    float32 m_flAgility; // offset 0x1D14, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1D18, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1D1C, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1D20, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1D24, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1D28, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x1D2C, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1D30, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x1D34, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1D38, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1D3C, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1D40, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x1D44, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1D48, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x1D4C, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1D50, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1D51, size 0x1, align 1
    char _pad_1D52[0x2]; // offset 0x1D52
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x1D54, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1D58, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x1D5C, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1D60, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x1D64, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1D68, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x1D6C, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x1D78, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x1D90, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x1DA8, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x1DAC, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1DB0, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1DB4, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1DB8, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x1DBC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1DC0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1DC4, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x1DC8, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x1DCC, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x1DD0, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x1DD4, size 0x1, align 1
    char _pad_1DD5[0x3]; // offset 0x1DD5
    PlayerID_t m_iPlayerID; // offset 0x1DD8, size 0x4, align 255
    char _pad_1DDC[0x4]; // offset 0x1DDC
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1DE0, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1DE8, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1DEC, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1DF0, size 0x4, align 4
    char _pad_1DF4[0x44]; // offset 0x1DF4
    CountdownTimer m_RespawnMusicTimer; // offset 0x1E38, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1E50, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1E68, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1E80, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1E98, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1E9C, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1EA0, size 0x1, align 1
    char _pad_1EA1[0x3]; // offset 0x1EA1
    CHandle< CDOTAWearableItem >[112] m_hTogglableWearable; // offset 0x1EA4, size 0x1C0, align 4
    char _pad_2064[0x4]; // offset 0x2064
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x2068, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x2088, size 0x18, align 8
    bool m_bReincarnating; // offset 0x20A0, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x20A1, size 0x1, align 1
    char _pad_20A2[0x2]; // offset 0x20A2
    GameTime_t m_flSpawnedAt; // offset 0x20A4, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x20A8, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x20C0, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x20D8, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x20F0, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x2108, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x2120, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x2138, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x213C, size 0x1, align 1
    char _pad_213D[0x3]; // offset 0x213D
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x2140, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x2158, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x2170, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x2188, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x21A0, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x21B8, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x21D0, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x21E8, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x2200, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x2201, size 0x1, align 1
    char _pad_2202[0x6]; // offset 0x2202
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x2208, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x2220, size 0x1, align 1
    char _pad_2221[0x7]; // offset 0x2221
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x2228, size 0x28, align 255
    char _pad_2250[0x20]; // offset 0x2250
    CUtlString m_strCustomKillEffect; // offset 0x2270, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x2278, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x2280, size 0x4, align 255
    char _pad_2284[0x4]; // offset 0x2284
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x2288, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x22A0, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x22B8, size 0x18, align 8
    char _pad_22D0[0x8]; // offset 0x22D0
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x22D8, size 0x18, align 8
    char _pad_22F0[0x4]; // offset 0x22F0
    float32 m_flLastTimeLookedAtByDirector; // offset 0x22F4, size 0x4, align 4
};
