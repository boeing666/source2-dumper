#pragma once

struct PlayerDataGlobal_t  // sizeof 0x348, align 0xFF [vtable] (server)
{
    char _pad_0000[0x8]; // offset 0x0
    int32 m_iLevel; // offset 0x8, size 0x4, align 4
    int32 m_iMaxAmmo; // offset 0xC, size 0x4, align 4
    int32 m_iHealthMax; // offset 0x10, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x14, size 0x4, align 4
    GameTime_t m_flRespawnTime; // offset 0x18, size 0x4, align 255
    HeroID_t m_nHeroID; // offset 0x1C, size 0x4, align 255
    HeroID_t m_nPreGameHeroID; // offset 0x20, size 0x4, align 255
    HeroBadgeXP_t m_unHeroBadgeXP; // offset 0x24, size 0x4, align 255
    int32 m_iGold; // offset 0x28, size 0x4, align 4
    int32 m_iGoldNetWorth; // offset 0x2C, size 0x4, align 4
    int32 m_iAPNetWorth; // offset 0x30, size 0x4, align 4
    int32 m_iCreepGold; // offset 0x34, size 0x4, align 4
    int32 m_iCreepGoldSoloBonus; // offset 0x38, size 0x4, align 4
    int32 m_iCreepGoldKill; // offset 0x3C, size 0x4, align 4
    int32 m_iCreepGoldAirOrb; // offset 0x40, size 0x4, align 4
    int32 m_iCreepGoldGroundOrb; // offset 0x44, size 0x4, align 4
    int32 m_iCreepGoldDeny; // offset 0x48, size 0x4, align 4
    int32 m_iCreepGoldNeutral; // offset 0x4C, size 0x4, align 4
    int32 m_iFarmBaseline; // offset 0x50, size 0x4, align 4
    int32 m_iHealth; // offset 0x54, size 0x4, align 4
    int32 m_iPlayerKills; // offset 0x58, size 0x4, align 4
    int32 m_iNPCKills; // offset 0x5C, size 0x4, align 4
    int32 m_iPlayerAssists; // offset 0x60, size 0x4, align 4
    int32 m_iDeaths; // offset 0x64, size 0x4, align 4
    int32 m_iDenies; // offset 0x68, size 0x4, align 4
    int32 m_iLastHits; // offset 0x6C, size 0x4, align 4
    int32 m_iKillStreak; // offset 0x70, size 0x4, align 4
    bool m_bAlive; // offset 0x74, size 0x1, align 1
    char _pad_0075[0x3]; // offset 0x75
    int32 m_nHeroDraftPosition; // offset 0x78, size 0x4, align 4
    bool m_bUltimateTrained; // offset 0x7C, size 0x1, align 1
    char _pad_007D[0x3]; // offset 0x7D
    GameTime_t m_flUltimateCooldownStart; // offset 0x80, size 0x4, align 255
    GameTime_t m_flUltimateCooldownEnd; // offset 0x84, size 0x4, align 255
    bool m_bHasRejuvenator; // offset 0x88, size 0x1, align 1
    bool m_bHasRebirth; // offset 0x89, size 0x1, align 1
    bool m_bFlaggedAsCheater; // offset 0x8A, size 0x1, align 1
    bool m_bAbandon; // offset 0x8B, size 0x1, align 1
    int32 m_iHeroDamage; // offset 0x8C, size 0x4, align 4
    int32 m_iHeroHealing; // offset 0x90, size 0x4, align 4
    int32 m_iSelfHealing; // offset 0x94, size 0x4, align 4
    int32 m_iObjectiveDamage; // offset 0x98, size 0x4, align 4
    char _pad_009C[0x4]; // offset 0x9C
    CNetworkUtlVectorBase< CUtlStringToken > m_vecUpgrades; // offset 0xA0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterAbilities; // offset 0xB8, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecBonusCounterValues; // offset 0xD0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterModifiers; // offset 0xE8, size 0x18, align 8
    CNetworkUtlVectorBase< int32 > m_vecModifierBonusCounterValues; // offset 0x100, size 0x18, align 8
    CUtlStringToken m_tHeldItem; // offset 0x118, size 0x4, align 4
    char _pad_011C[0x4]; // offset 0x11C
    CUtlVectorEmbeddedNetworkVar< ItemImbuementPair_t > m_vecImbuements; // offset 0x120, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t > m_vecDynamicAbilityValues; // offset 0x188, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t > m_vecStatViewerModifierValues; // offset 0x1F0, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< StolenAbilityPair_t > m_vecStolenAbilities; // offset 0x258, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< AbilityUpgradeState_t > m_vecAbilityUpgradeState; // offset 0x2C0, size 0x68, align 8
    CUtlString m_strIconHeroCardOverride; // offset 0x328, size 0x8, align 8
    CUtlString m_strIconHeroCardCriticalOverride; // offset 0x330, size 0x8, align 8
    CUtlString m_strIconHeroCardGloatOverride; // offset 0x338, size 0x8, align 8
    PackedRank_t m_unPackedRank; // offset 0x340, size 0x1, align 255
    char _pad_0341[0x7]; // offset 0x341
};
