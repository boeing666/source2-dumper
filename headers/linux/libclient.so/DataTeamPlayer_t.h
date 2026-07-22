#pragma once

struct DataTeamPlayer_t  // sizeof 0x12F0, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_iReliableGold; // offset 0x30, size 0x4, align 4
    int32 m_iUnreliableGold; // offset 0x34, size 0x4, align 4
    int32 m_iStartingPosition; // offset 0x38, size 0x4, align 4
    int32 m_iTotalEarnedGold; // offset 0x3C, size 0x4, align 4
    int32 m_iTotalEarnedXP; // offset 0x40, size 0x4, align 4
    int32 m_iSharedGold; // offset 0x44, size 0x4, align 4
    int32 m_iHeroKillGold; // offset 0x48, size 0x4, align 4
    int32 m_iCreepKillGold; // offset 0x4C, size 0x4, align 4
    int32 m_iSummonKillGold; // offset 0x50, size 0x4, align 4
    int32 m_iNeutralKillGold; // offset 0x54, size 0x4, align 4
    int32 m_iCourierGold; // offset 0x58, size 0x4, align 4
    int32 m_iBountyGold; // offset 0x5C, size 0x4, align 4
    int32 m_iRoshanGold; // offset 0x60, size 0x4, align 4
    int32 m_iBuildingGold; // offset 0x64, size 0x4, align 4
    int32 m_iOtherGold; // offset 0x68, size 0x4, align 4
    int32 m_iComebackGold; // offset 0x6C, size 0x4, align 4
    int32 m_iExperimentalGold; // offset 0x70, size 0x4, align 4
    int32 m_iExperimental2Gold; // offset 0x74, size 0x4, align 4
    int32 m_iCreepDenyGold; // offset 0x78, size 0x4, align 4
    int32 m_iTPScrollsPurchased; // offset 0x7C, size 0x4, align 4
    float32 m_flCustomStats; // offset 0x80, size 0x4, align 4
    int32 m_iIncomeGold; // offset 0x84, size 0x4, align 4
    int32 m_iWardKillGold; // offset 0x88, size 0x4, align 4
    int32 m_iAbilityGold; // offset 0x8C, size 0x4, align 4
    int32 m_iNetWorth; // offset 0x90, size 0x4, align 4
    int32 m_iDenyCount; // offset 0x94, size 0x4, align 4
    int32 m_iLastHitCount; // offset 0x98, size 0x4, align 4
    int32 m_iLastHitStreak; // offset 0x9C, size 0x4, align 4
    int32 m_iLastHitMultikill; // offset 0xA0, size 0x4, align 4
    int32 m_iNearbyCreepDeathCount; // offset 0xA4, size 0x4, align 4
    int32 m_iClaimedDenyCount; // offset 0xA8, size 0x4, align 4
    int32 m_iClaimedMissCount; // offset 0xAC, size 0x4, align 4
    int32 m_iMissCount; // offset 0xB0, size 0x4, align 4
    HeroID_t m_nPossibleHeroSelection; // offset 0xB4, size 0x4, align 255
    HeroFacetKey_t m_nPossibleHeroFacetSelection; // offset 0xB8, size 0x8, align 255
    GameTime_t m_flBuybackCooldownTime; // offset 0xC0, size 0x4, align 255
    GameTime_t m_flBuybackGoldLimitTime; // offset 0xC4, size 0x4, align 255
    float32 m_flBuybackCostTime; // offset 0xC8, size 0x4, align 4
    float32 m_flCustomBuybackCooldown; // offset 0xCC, size 0x4, align 4
    float32 m_fStuns; // offset 0xD0, size 0x4, align 4
    float32 m_fHealing; // offset 0xD4, size 0x4, align 4
    float32 m_fRegeneratedHealth; // offset 0xD8, size 0x4, align 4
    int32 m_iTowerKills; // offset 0xDC, size 0x4, align 4
    int32 m_iRoshanKills; // offset 0xE0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCameraTarget; // offset 0xE4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOverrideSelectionEntity; // offset 0xE8, size 0x4, align 4
    int32 m_iObserverWardsPlaced; // offset 0xEC, size 0x4, align 4
    int32 m_iSentryWardsPlaced; // offset 0xF0, size 0x4, align 4
    int32 m_iCreepsStacked; // offset 0xF4, size 0x4, align 4
    int32 m_iCampsStacked; // offset 0xF8, size 0x4, align 4
    int32 m_iRunePickups; // offset 0xFC, size 0x4, align 4
    int32 m_iGoldSpentOnSupport; // offset 0x100, size 0x4, align 4
    float32 m_flHeroDamage; // offset 0x104, size 0x4, align 4
    float32 m_flTowerDamage; // offset 0x108, size 0x4, align 4
    int32 m_iWardsPurchased; // offset 0x10C, size 0x4, align 4
    int32 m_iWardsDestroyed; // offset 0x110, size 0x4, align 4
    char _pad_0114[0x4]; // offset 0x114
    C_DOTA_UnitInventory m_PreGameInventory; // offset 0x118, size 0xF0, align 255
    int32[24] m_nKillsPerOpposingTeamMember; // offset 0x208, size 0x60, align 4
    AbilityID_t[5] m_iSuggestedAbilities; // offset 0x268, size 0x14, align 4
    float32[5] m_fSuggestedAbilityWeights; // offset 0x27C, size 0x14, align 4
    AbilityID_t[15] m_iSuggestedPregameItems; // offset 0x290, size 0x3C, align 4
    AbilityID_t[50] m_iSuggestedItemSequence; // offset 0x2CC, size 0xC8, align 4
    AbilityID_t[150] m_iSuggestedItemSequenceVariants; // offset 0x394, size 0x258, align 4
    WeightedAbilitySuggestion_t[250] m_iSuggestedItemOptions; // offset 0x5EC, size 0x7D0, align 4
    WeightedAbilitySuggestion_t[30] m_iSuggestedGeneralItems; // offset 0xDBC, size 0xF0, align 4
    WeightedAbilitySuggestion_t[5] m_iSuggestedNeutralTrinkets; // offset 0xEAC, size 0x28, align 4
    WeightedAbilitySuggestion_t[5] m_iSuggestedNeutralEnhancements; // offset 0xED4, size 0x28, align 4
    HeroID_t[10] m_iSuggestedHeroes; // offset 0xEFC, size 0x28, align 4
    float32[10] m_flSuggestedHeroesWeights; // offset 0xF24, size 0x28, align 4
    float32[3] m_flDamageByTypeReceivedPreReduction; // offset 0xF4C, size 0xC, align 4
    float32[3] m_flDamageByTypeReceivedPostReduction; // offset 0xF58, size 0xC, align 4
    float32[3] m_flOutgoingDamageByTypePreReduction; // offset 0xF64, size 0xC, align 4
    float32[3] m_flOutgoingDamageByTypePostReduction; // offset 0xF70, size 0xC, align 4
    OverworldID_t m_uSelectedOverworldID; // offset 0xF7C, size 0x1, align 255
    OverworldTokenID_t[3] m_uSelectedOverworldTokenRewards; // offset 0xF7D, size 0x3, align 1
    OverworldTarotCardID_t[3] m_uOverworldFortune; // offset 0xF80, size 0x3, align 1
    char _pad_0F83[0x1]; // offset 0xF83
    int32 m_iCommandsIssued; // offset 0xF84, size 0x4, align 4
    int32 m_iGoldSpentOnConsumables; // offset 0xF88, size 0x4, align 4
    int32 m_iGoldSpentOnItems; // offset 0xF8C, size 0x4, align 4
    int32 m_iGoldSpentOnBuybacks; // offset 0xF90, size 0x4, align 4
    int32 m_iGoldLostToDeath; // offset 0xF94, size 0x4, align 4
    bool m_bIsNewPlayer; // offset 0xF98, size 0x1, align 1
    bool m_bIsGuidePlayer; // offset 0xF99, size 0x1, align 1
    char _pad_0F9A[0x6]; // offset 0xF9A
    uint64 m_iPlayerSteamID; // offset 0xFA0, size 0x8, align 8
    int32 m_iSmokesUsed; // offset 0xFA8, size 0x4, align 4
    int32 m_iNeutralTokensFound; // offset 0xFAC, size 0x4, align 4
    int32 m_iWatchersTaken; // offset 0xFB0, size 0x4, align 4
    int32 m_iLotusesTaken; // offset 0xFB4, size 0x4, align 4
    int32 m_iTormentorKills; // offset 0xFB8, size 0x4, align 4
    int32 m_iCourierKills; // offset 0xFBC, size 0x4, align 4
    int32 m_nAcquiredMadstone; // offset 0xFC0, size 0x4, align 4
    int32 m_nCurrentMadstone; // offset 0xFC4, size 0x4, align 4
    PlayerNeutralChoices_t m_NeutralChoices; // offset 0xFC8, size 0x1B0, align 255
    CDOTACourierController m_CourierController; // offset 0x1178, size 0x28, align 255
    CQuickBuyController m_quickBuyController; // offset 0x11A0, size 0x148, align 255
    AbilityID_t m_nSelectedBlessing; // offset 0x12E8, size 0x4, align 255
    char _pad_12EC[0x4]; // offset 0x12EC
};
