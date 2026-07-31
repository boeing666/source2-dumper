#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1940]; // offset 0x0
    float32 m_flStrength; // offset 0x1940, size 0x4, align 4
    float32 m_flAgility; // offset 0x1944, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1948, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x194C, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1950, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1954, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1958, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x195C, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1960, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x1964, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1968, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x196C, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1970, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x1974, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1978, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x197C, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1980, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1981, size 0x1, align 1
    char _pad_1982[0x2]; // offset 0x1982
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x1984, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1988, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x198C, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1990, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x1994, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1998, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x199C, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x19A8, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x19C0, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x19D8, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x19DC, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x19E0, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x19E4, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x19E8, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x19EC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x19F0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x19F4, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x19F8, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x19FC, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x1A00, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x1A04, size 0x1, align 1
    char _pad_1A05[0x3]; // offset 0x1A05
    PlayerID_t m_iPlayerID; // offset 0x1A08, size 0x4, align 255
    char _pad_1A0C[0x4]; // offset 0x1A0C
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1A10, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1A18, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1A1C, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x44]; // offset 0x1A24
    CountdownTimer m_RespawnMusicTimer; // offset 0x1A68, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1A80, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1A98, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1AB0, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1AC8, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1ACC, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    CHandle< CDOTAWearableItem >[103] m_hTogglableWearable; // offset 0x1AD4, size 0x19C, align 4
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x1C70, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x1C90, size 0x18, align 8
    bool m_bReincarnating; // offset 0x1CA8, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1CA9, size 0x1, align 1
    char _pad_1CAA[0x2]; // offset 0x1CAA
    GameTime_t m_flSpawnedAt; // offset 0x1CAC, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x1CB0, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1CC8, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x1CE0, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x1CF8, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x1D10, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x1D28, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x1D40, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x1D44, size 0x1, align 1
    char _pad_1D45[0x3]; // offset 0x1D45
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x1D48, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x1D60, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x1D78, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x1D90, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x1DA8, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x1DC0, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x1DD8, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x1DF0, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x1E08, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x1E09, size 0x1, align 1
    char _pad_1E0A[0x6]; // offset 0x1E0A
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x1E10, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x1E28, size 0x1, align 1
    char _pad_1E29[0x7]; // offset 0x1E29
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x1E30, size 0x28, align 255
    char _pad_1E58[0x28]; // offset 0x1E58
    CUtlString m_strCustomKillEffect; // offset 0x1E80, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x1E88, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1E90, size 0x4, align 255
    char _pad_1E94[0x4]; // offset 0x1E94
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x1E98, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x1EB0, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x1EC8, size 0x18, align 8
    char _pad_1EE0[0x8]; // offset 0x1EE0
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x1EE8, size 0x18, align 8
    char _pad_1F00[0x4]; // offset 0x1F00
    float32 m_flLastTimeLookedAtByDirector; // offset 0x1F04, size 0x4, align 4
};
