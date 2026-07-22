#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1F00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1938]; // offset 0x0
    float32 m_flStrength; // offset 0x1938, size 0x4, align 4
    float32 m_flAgility; // offset 0x193C, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1940, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1944, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1948, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x194C, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1950, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x1954, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1958, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x195C, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1960, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1964, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1968, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x196C, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1970, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x1974, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1978, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1979, size 0x1, align 1
    char _pad_197A[0x2]; // offset 0x197A
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x197C, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1980, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x1984, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1988, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x198C, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1990, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x1994, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x19A0, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x19B8, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x19D0, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x19D4, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x19D8, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x19DC, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x19E0, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x19E4, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x19E8, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x19EC, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x19F0, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x19F4, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x19F8, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x19FC, size 0x1, align 1
    char _pad_19FD[0x3]; // offset 0x19FD
    PlayerID_t m_iPlayerID; // offset 0x1A00, size 0x4, align 255
    char _pad_1A04[0x4]; // offset 0x1A04
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1A08, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1A10, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1A14, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1A18, size 0x4, align 4
    char _pad_1A1C[0x44]; // offset 0x1A1C
    CountdownTimer m_RespawnMusicTimer; // offset 0x1A60, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1A78, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1A90, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1AA8, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1AC0, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1AC4, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    CHandle< CDOTAWearableItem >[103] m_hTogglableWearable; // offset 0x1ACC, size 0x19C, align 4
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x1C68, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x1C88, size 0x18, align 8
    bool m_bReincarnating; // offset 0x1CA0, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1CA1, size 0x1, align 1
    char _pad_1CA2[0x2]; // offset 0x1CA2
    GameTime_t m_flSpawnedAt; // offset 0x1CA4, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x1CA8, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1CC0, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x1CD8, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x1CF0, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x1D08, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x1D20, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x1D38, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x1D3C, size 0x1, align 1
    char _pad_1D3D[0x3]; // offset 0x1D3D
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x1D40, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x1D58, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x1D70, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x1D88, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x1DA0, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x1DB8, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x1DD0, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x1DE8, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x1E00, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x1E01, size 0x1, align 1
    char _pad_1E02[0x6]; // offset 0x1E02
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x1E08, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x1E20, size 0x1, align 1
    char _pad_1E21[0x7]; // offset 0x1E21
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x1E28, size 0x28, align 255
    char _pad_1E50[0x28]; // offset 0x1E50
    CUtlString m_strCustomKillEffect; // offset 0x1E78, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x1E80, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1E88, size 0x4, align 255
    char _pad_1E8C[0x4]; // offset 0x1E8C
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x1E90, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x1EA8, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x1EC0, size 0x18, align 8
    char _pad_1ED8[0x8]; // offset 0x1ED8
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x1EE0, size 0x18, align 8
    char _pad_1EF8[0x4]; // offset 0x1EF8
    float32 m_flLastTimeLookedAtByDirector; // offset 0x1EFC, size 0x4, align 4
};
