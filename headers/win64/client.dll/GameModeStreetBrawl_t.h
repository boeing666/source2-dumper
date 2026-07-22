#pragma once

struct GameModeStreetBrawl_t  // sizeof 0x220, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< float32 > m_vecRespawnTimes; // offset 0x0, size 0x18, align 8
    CUtlVector< float32 > m_flOvertimeRespawnTimeIncrease; // offset 0x18, size 0x18, align 8
    CUtlVector< float32 > m_flOvertimeRespawnTimeIncreaseUrgent; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_flOvertimeTrooperHealthScale; // offset 0x48, size 0x18, align 8
    CUtlVector< float32 > m_flOvertimeTrooperDamageScale; // offset 0x60, size 0x18, align 8
    CUtlVector< float32 > m_vecPreBuyTime; // offset 0x78, size 0x18, align 8
    CUtlVector< float32 > m_vecBuyTime; // offset 0x90, size 0x18, align 8
    CUtlVector< int32 > m_vecGoldPerRound; // offset 0xA8, size 0x18, align 8
    CUtlVector< int32 > m_vecAPPerRound; // offset 0xC0, size 0x18, align 8
    CUtlVector< int32 > m_vecObjectiveMaxHealth; // offset 0xD8, size 0x18, align 8
    CUtlVector< int32 > m_vecItemDraftRerollsPerRound; // offset 0xF0, size 0x18, align 8
    CUtlVector< float32 > m_vecRoundLengthMinutes; // offset 0x108, size 0x18, align 8
    CUtlVector< float32 > m_vecRoundLengthMinutesUrgent; // offset 0x120, size 0x18, align 8
    CUtlVector< float32 > m_flTrooperSpawnTimer; // offset 0x138, size 0x18, align 8
    CUtlVector< StreetBrawlGameRoundDrafts_t > m_vecItemDraftRoundsPerGameRound; // offset 0x150, size 0x18, align 8
    CUtlOrderedMap< EModTier_t, ItemDraftBucketing_t > m_mapItemTierToItemDraftBuckets; // offset 0x168, size 0x28, align 8
    float32 m_nMatchLengthMinutes; // offset 0x190, size 0x4, align 4
    int32 m_nTier2BonusHealth; // offset 0x194, size 0x4, align 4
    int32 m_nComebackBonusHealth; // offset 0x198, size 0x4, align 4
    int32 m_nComebackBonusHealthCritical; // offset 0x19C, size 0x4, align 4
    float32 m_flTrooperNonOvertimeResist; // offset 0x1A0, size 0x4, align 4
    float32 m_flTrooperOvertimeResist; // offset 0x1A4, size 0x4, align 4
    float32 m_flActivesReductionWeightScale; // offset 0x1A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flLegendaryOwnerSkipChancePct; // offset 0x1AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flEnhancedOwnerSkipChancePct; // offset 0x1B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flRareWeightScale; // offset 0x1B4, size 0x4, align 4 | MPropertyDescription
    float32 m_flComebackWeightScale_Trailing_2; // offset 0x1B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flComebackWeightScale_Trailing_1; // offset 0x1BC, size 0x4, align 4 | MPropertyDescription
    CSubclassName< 0 > m_strAmberTrooperPickupToDrop; // offset 0x1C0, size 0x10, align 8
    CSubclassName< 0 > m_strSapphireTrooperPickupToDrop; // offset 0x1D0, size 0x10, align 8
    CSubclassName< 2 > m_strTrooperModifier; // offset 0x1E0, size 0x10, align 8
    float32 m_flScoringTime; // offset 0x1F0, size 0x4, align 4
    float32 m_flPreScoringTime; // offset 0x1F4, size 0x4, align 4
    float32 m_flScoringGameTimeScale; // offset 0x1F8, size 0x4, align 4
    int32 m_iScoreToWin; // offset 0x1FC, size 0x4, align 4
    int32 m_iLaneNumber; // offset 0x200, size 0x4, align 4
    float32 m_flTrooperSpawnBeforeRoundStartTimer; // offset 0x204, size 0x4, align 4
    float32 m_flZipBoostCooldownOnStart; // offset 0x208, size 0x4, align 4
    float32 m_flBuyTimeGracePeriod; // offset 0x20C, size 0x4, align 4
    int32 m_iUltimateUnlockRound; // offset 0x210, size 0x4, align 4
    float32 m_flTier1MaxResistTime; // offset 0x214, size 0x4, align 4
    float32 m_flTier2MaxResistTime; // offset 0x218, size 0x4, align 4
    char _pad_021C[0x4]; // offset 0x21C
};
