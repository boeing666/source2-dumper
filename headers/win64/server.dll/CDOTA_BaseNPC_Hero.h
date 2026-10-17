#pragma once

class CDOTA_BaseNPC_Hero : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x2020, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A30]; // offset 0x0
    float32 m_flStrength; // offset 0x1A30, size 0x4, align 4
    float32 m_flAgility; // offset 0x1A34, size 0x4, align 4
    float32 m_flIntellect; // offset 0x1A38, size 0x4, align 4
    float32 m_flStrengthTotal; // offset 0x1A3C, size 0x4, align 4
    float32 m_flAgilityTotal; // offset 0x1A40, size 0x4, align 4
    float32 m_flIntellectTotal; // offset 0x1A44, size 0x4, align 4
    int32 m_iRecentDamage; // offset 0x1A48, size 0x4, align 4
    int32 m_iPrimaryAttribute; // offset 0x1A4C, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1A50, size 0x4, align 255
    GameTime_t m_flLastDispellTime; // offset 0x1A54, size 0x4, align 255
    float32 m_flStrengthGain; // offset 0x1A58, size 0x4, align 4
    float32 m_flAgilityGain; // offset 0x1A5C, size 0x4, align 4
    float32 m_flIntellectGain; // offset 0x1A60, size 0x4, align 4
    float32 m_flLastExtraHealth; // offset 0x1A64, size 0x4, align 4
    float32 m_flLastMaxHealth; // offset 0x1A68, size 0x4, align 4
    float32 m_flLastSuggestionTime; // offset 0x1A6C, size 0x4, align 4
    bool m_bItemsAddedToLoadout; // offset 0x1A70, size 0x1, align 1
    bool m_bPregameItemsAddedToLoadout; // offset 0x1A71, size 0x1, align 1
    char _pad_1A72[0x2]; // offset 0x1A72
    CHandle< CBaseEntity > m_hNewARDMHero; // offset 0x1A74, size 0x4, align 4
    GameTime_t m_fBuybackCooldown; // offset 0x1A78, size 0x4, align 255
    GameTime_t m_fBuybackGoldLimit; // offset 0x1A7C, size 0x4, align 255
    int32 m_nLastHealedAmount; // offset 0x1A80, size 0x4, align 4
    float32 m_flLastHealedTime; // offset 0x1A84, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHealEntity; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vRespawnPosition; // offset 0x1A8C, size 0xC, align 4
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroDamageInfo > m_HeroDamageInfoArray; // offset 0x1A98, size 0x18, align 8
    CUtlVector< CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo > m_vecRecentModifiers; // offset 0x1AB0, size 0x18, align 8
    GameTime_t m_fMostRecentDamageTime; // offset 0x1AC8, size 0x4, align 255
    int32 m_iAbilityPoints; // offset 0x1ACC, size 0x4, align 4
    int32 m_iTotalAbilityPoints; // offset 0x1AD0, size 0x4, align 4
    int32 m_iAghanimsAbilityPoints; // offset 0x1AD4, size 0x4, align 4
    int32 m_iTotalAghanimsAbilityPoints; // offset 0x1AD8, size 0x4, align 4
    int32 m_iCurrentXP; // offset 0x1ADC, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x1AE0, size 0x4, align 255
    float32 m_flRespawnTimePenalty; // offset 0x1AE4, size 0x4, align 4
    float32 m_flTimeUntilRespawn; // offset 0x1AE8, size 0x4, align 4
    float32 m_flScriptRespawnTime; // offset 0x1AEC, size 0x4, align 4
    float32 m_flPendingRespawnTime; // offset 0x1AF0, size 0x4, align 4
    bool m_bScriptDisableRespawns; // offset 0x1AF4, size 0x1, align 1
    char _pad_1AF5[0x3]; // offset 0x1AF5
    PlayerID_t m_iPlayerID; // offset 0x1AF8, size 0x4, align 255
    char _pad_1AFC[0x4]; // offset 0x1AFC
    HeroFacetKey_t m_iHeroFacetKey; // offset 0x1B00, size 0x8, align 255
    PlayerID_t m_iEconSpecifyingPlayerID; // offset 0x1B08, size 0x4, align 255
    HeroID_t m_iHeroID; // offset 0x1B0C, size 0x4, align 255
    CHandle< CDOTA_BaseNPC_Hero > m_hReplicatingOtherHeroModel; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x44]; // offset 0x1B14
    CountdownTimer m_RespawnMusicTimer; // offset 0x1B58, size 0x18, align 8
    CountdownTimer m_HeroKillTimer; // offset 0x1B70, size 0x18, align 8
    CountdownTimer m_MultipleHeroKillTimer; // offset 0x1B88, size 0x18, align 8
    CountdownTimer m_MultipleLastHitTimer; // offset 0x1BA0, size 0x18, align 8
    int32 m_iMultipleKillCount; // offset 0x1BB8, size 0x4, align 4
    float32 m_flKillStreakStartTime; // offset 0x1BBC, size 0x4, align 4
    bool m_bDisableWearables; // offset 0x1BC0, size 0x1, align 1
    char _pad_1BC1[0x3]; // offset 0x1BC1
    CHandle< CDOTAWearableItem >[112] m_hTogglableWearable; // offset 0x1BC4, size 0x1C0, align 4
    char _pad_1D84[0x4]; // offset 0x1D84
    CDOTA_BaseNPC_Hero::KillInfo_t m_KillInfo; // offset 0x1D88, size 0x20, align 255
    CountdownTimer m_DirectorAbilityActivity; // offset 0x1DA8, size 0x18, align 8
    bool m_bReincarnating; // offset 0x1DC0, size 0x1, align 1
    bool m_bCustomKillEffect; // offset 0x1DC1, size 0x1, align 1
    char _pad_1DC2[0x2]; // offset 0x1DC2
    GameTime_t m_flSpawnedAt; // offset 0x1DC4, size 0x4, align 255
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hFacetAbilities; // offset 0x1DC8, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecHiddenLoadoutSlots; // offset 0x1DE0, size 0x18, align 8
    CountdownTimer m_PurchaseItemTimer; // offset 0x1DF8, size 0x18, align 8
    CountdownTimer m_NeutralItemTimer; // offset 0x1E10, size 0x18, align 8
    CountdownTimer m_RetrieveItemsFromStashTimer; // offset 0x1E28, size 0x18, align 8
    CountdownTimer m_RequestGoToSecretShopTimer; // offset 0x1E40, size 0x18, align 8
    int32 m_iNextItemToPurchase; // offset 0x1E58, size 0x4, align 4
    bool m_bDoesNextItemCompleteRecipe; // offset 0x1E5C, size 0x1, align 1
    char _pad_1E5D[0x3]; // offset 0x1E5D
    CUtlVector< sLoadoutItem > m_Loadout; // offset 0x1E60, size 0x18, align 8
    CUtlVector< std::pair< AbilityID_t, bool > > m_BuildingOrBuilt; // offset 0x1E78, size 0x18, align 8
    sLoadoutItem m_TPScroll; // offset 0x1E90, size 0x18, align 255
    sLoadoutItem m_Smoke; // offset 0x1EA8, size 0x18, align 255
    sLoadoutItem m_Dust; // offset 0x1EC0, size 0x18, align 255
    sLoadoutItem m_Gem; // offset 0x1ED8, size 0x18, align 255
    sLoadoutItem m_SentryWard; // offset 0x1EF0, size 0x18, align 255
    sLoadoutItem m_ObserverWard; // offset 0x1F08, size 0x18, align 255
    bool m_bAutoPurchaseItems; // offset 0x1F20, size 0x1, align 1
    bool m_bBuybackDisabled; // offset 0x1F21, size 0x1, align 1
    char _pad_1F22[0x6]; // offset 0x1F22
    CUtlVector< CHandle< CDOTA_BaseNPC_Pet > > m_hPets; // offset 0x1F28, size 0x18, align 8
    bool m_bPreventPetSpawn; // offset 0x1F40, size 0x1, align 1
    char _pad_1F41[0x7]; // offset 0x1F41
    CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // offset 0x1F48, size 0x28, align 255
    char _pad_1F70[0x28]; // offset 0x1F70
    CUtlString m_strCustomKillEffect; // offset 0x1F98, size 0x8, align 8
    CUtlString m_strCustomHexModel; // offset 0x1FA0, size 0x8, align 8
    ParticleIndex_t m_nKillStreakFX; // offset 0x1FA8, size 0x4, align 255
    char _pad_1FAC[0x4]; // offset 0x1FAC
    CUtlVector< sAcquireHistory > m_vecItemPurchaseHistory; // offset 0x1FB0, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecAbilitySkillHistory; // offset 0x1FC8, size 0x18, align 8
    CUtlVector< sAcquireHistory > m_vecNeutralItemEquippedHistory; // offset 0x1FE0, size 0x18, align 8
    char _pad_1FF8[0x8]; // offset 0x1FF8
    CUtlVector< CHandle< CDOTA_BaseNPC_Hero > > m_vecExpiredIllusions; // offset 0x2000, size 0x18, align 8
    char _pad_2018[0x4]; // offset 0x2018
    float32 m_flLastTimeLookedAtByDirector; // offset 0x201C, size 0x4, align 4
};
