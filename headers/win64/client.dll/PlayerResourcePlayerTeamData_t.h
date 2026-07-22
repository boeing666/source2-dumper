#pragma once

struct PlayerResourcePlayerTeamData_t  // sizeof 0x238, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x30, size 0x68, align 8
    HeroID_t m_nSelectedHeroID; // offset 0x98, size 0x4, align 255
    char _pad_009C[0x4]; // offset 0x9C
    HeroFacetKey_t m_nSelectedHeroFacet; // offset 0xA0, size 0x8, align 255
    int32 m_iKills; // offset 0xA8, size 0x4, align 4
    int32 m_iAssists; // offset 0xAC, size 0x4, align 4
    int32 m_iDeaths; // offset 0xB0, size 0x4, align 4
    int32 m_iStreak; // offset 0xB4, size 0x4, align 4
    int32 m_iLevel; // offset 0xB8, size 0x4, align 4
    int32 m_iCustomIntParam; // offset 0xBC, size 0x4, align 4
    int32 m_iRespawnSeconds; // offset 0xC0, size 0x4, align 4
    GameTime_t m_flLastBuybackTime; // offset 0xC4, size 0x4, align 255
    int32 m_iLastBuybackTime_Obsolete; // offset 0xC8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSelectedHero; // offset 0xCC, size 0x4, align 4
    bool m_bAFK; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    HeroID_t[4] m_nSuggestedHeroes; // offset 0xD4, size 0x10, align 4
    bool[4] m_bBanSuggestedHeroes; // offset 0xE4, size 0x4, align 1
    uint16 m_unCompendiumLevel; // offset 0xE8, size 0x2, align 2
    bool m_bCanRepick; // offset 0xEA, size 0x1, align 1
    bool m_bCanEarnRewards; // offset 0xEB, size 0x1, align 1
    bool m_bHasRandomed; // offset 0xEC, size 0x1, align 1
    char _pad_00ED[0x3]; // offset 0xED
    HeroID_t m_nRandomedHeroID; // offset 0xF0, size 0x4, align 255
    bool m_bBattleBonusActive; // offset 0xF4, size 0x1, align 1
    char _pad_00F5[0x1]; // offset 0xF5
    uint16 m_iBattleBonusRate; // offset 0xF6, size 0x2, align 2
    int32 m_iCustomBuybackCost; // offset 0xF8, size 0x4, align 4
    Color m_CustomPlayerColor; // offset 0xFC, size 0x4, align 1
    bool m_bQualifiesForPAContractReward; // offset 0x100, size 0x1, align 1
    bool m_bHasPredictedVictory; // offset 0x101, size 0x1, align 1
    char _pad_0102[0x2]; // offset 0x102
    int32 m_UnitShareMasks; // offset 0x104, size 0x4, align 4
    int32 m_iTeamSlot; // offset 0x108, size 0x4, align 4
    uint8 m_iBattleCupWinStreak; // offset 0x10C, size 0x1, align 1
    char _pad_010D[0x3]; // offset 0x10D
    uint64 m_iBattleCupWinDate; // offset 0x110, size 0x8, align 8
    uint16 m_iBattleCupSkillLevel; // offset 0x118, size 0x2, align 2
    char _pad_011A[0x2]; // offset 0x11A
    uint32 m_iBattleCupTeamID; // offset 0x11C, size 0x4, align 4
    uint32 m_iBattleCupTournamentID; // offset 0x120, size 0x4, align 4
    uint8 m_iBattleCupDivision; // offset 0x124, size 0x1, align 1
    char _pad_0125[0x3]; // offset 0x125
    float32 m_flTeamFightParticipation; // offset 0x128, size 0x4, align 4
    int32 m_iFirstBloodClaimed; // offset 0x12C, size 0x4, align 4
    int32 m_iFirstBloodGiven; // offset 0x130, size 0x4, align 4
    uint32 m_unPickOrder; // offset 0x134, size 0x4, align 4
    GameTime_t m_flTimeOfLastSaluteSent; // offset 0x138, size 0x4, align 255
    char _pad_013C[0x4]; // offset 0x13C
    C_UtlVectorEmbeddedNetworkVar< PlayerResourcePlayerEventData_t > m_vecPlayerEventData; // offset 0x140, size 0x68, align 8
    uint32 m_unSelectedHeroBadgeXP; // offset 0x1A8, size 0x4, align 4
    uint8 m_iBountyRunes; // offset 0x1AC, size 0x1, align 1
    uint8 m_iPowerRunes; // offset 0x1AD, size 0x1, align 1
    uint8 m_iWaterRunes; // offset 0x1AE, size 0x1, align 1
    uint8 m_iOutpostsCaptured; // offset 0x1AF, size 0x1, align 1
    uint8 m_unGuildTier; // offset 0x1B0, size 0x1, align 1
    char _pad_01B1[0x1]; // offset 0x1B1
    uint16 m_unGuildLevel; // offset 0x1B2, size 0x2, align 2
    uint8 m_unGuildPrimaryColor; // offset 0x1B4, size 0x1, align 1
    uint8 m_unGuildSecondaryColor; // offset 0x1B5, size 0x1, align 1
    uint8 m_unGuildPattern; // offset 0x1B6, size 0x1, align 1
    char _pad_01B7[0x1]; // offset 0x1B7
    uint64 m_unGuildLogo; // offset 0x1B8, size 0x8, align 8
    uint32 m_unGuildFlags; // offset 0x1C0, size 0x4, align 4
    bool m_bIsPartyGuild; // offset 0x1C4, size 0x1, align 1
    char _pad_01C5[0x3]; // offset 0x1C5
    GuildID_t m_unGuildID; // offset 0x1C8, size 0x4, align 255
    item_definition_index_t m_unHeroStickerDefIndex; // offset 0x1CC, size 0x4, align 255
    uint8 m_eHeroStickerQuality; // offset 0x1D0, size 0x1, align 1
    uint8 m_eLaneSelectionFlags; // offset 0x1D1, size 0x1, align 1
    uint8 m_nPlayerDraftPreferredRoles; // offset 0x1D2, size 0x1, align 1
    int8 m_nPlayerDraftPreferredTeam; // offset 0x1D3, size 0x1, align 1
    uint8 m_nAvailableGifts; // offset 0x1D4, size 0x1, align 1
    uint8 m_unFowTeam; // offset 0x1D5, size 0x1, align 1
    char _pad_01D6[0x2]; // offset 0x1D6
    C_NetworkUtlVectorBase< AbilityID_t > m_vecItemPreferenceLiked; // offset 0x1D8, size 0x18, align 8
    C_NetworkUtlVectorBase< AbilityID_t > m_vecItemPreferenceDisliked; // offset 0x1F0, size 0x18, align 8
    uint32 m_iObsoleteEventPoints; // offset 0x208, size 0x4, align 4
    uint32 m_iObsoleteEventPremiumPoints; // offset 0x20C, size 0x4, align 4
    uint32 m_iObsoleteEventWagerTokensRemaining; // offset 0x210, size 0x4, align 4
    uint32 m_iObsoleteEventWagerTokensMax; // offset 0x214, size 0x4, align 4
    uint32 m_iObsoleteEventEffectsMask; // offset 0x218, size 0x4, align 4
    uint16 m_iObsoleteEventRanks; // offset 0x21C, size 0x2, align 2
    bool m_bObsoleteIsEventOwned; // offset 0x21E, size 0x1, align 1
    char _pad_021F[0x1]; // offset 0x21F
    uint32 m_iObsoleteRankWagersAvailable; // offset 0x220, size 0x4, align 4
    uint32 m_iObsoleteRankWagersMax; // offset 0x224, size 0x4, align 4
    uint32 m_iObsoleteEventPointAdjustmentsRemaining; // offset 0x228, size 0x4, align 4
    uint32 m_iObsoleteAvailableSalutes; // offset 0x22C, size 0x4, align 4
    uint32 m_iObsoleteSaluteAmounts; // offset 0x230, size 0x4, align 4
    char _pad_0234[0x4]; // offset 0x234
};
