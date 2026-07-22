#pragma once

struct PlayerDataGlobal_t  // sizeof 0x330, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    int32 m_iLevel; // offset 0x8, size 0x4, align 4 | MNetworkEnable
    int32 m_iMaxAmmo; // offset 0xC, size 0x4, align 4 | MNetworkEnable
    int32 m_iHealthMax; // offset 0x10, size 0x4, align 4 | MNetworkEnable
    float32 m_flHealthRegen; // offset 0x14, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flRespawnTime; // offset 0x18, size 0x4, align 255 | MNetworkEnable
    HeroID_t m_nHeroID; // offset 0x1C, size 0x4, align 255 | MNetworkEnable
    HeroBadgeXP_t m_unHeroBadgeXP; // offset 0x20, size 0x4, align 255 | MNetworkEnable
    int32 m_iGoldNetWorth; // offset 0x24, size 0x4, align 4 | MNetworkEnable
    int32 m_iAPNetWorth; // offset 0x28, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGold; // offset 0x2C, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldSoloBonus; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldKill; // offset 0x34, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldAirOrb; // offset 0x38, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldGroundOrb; // offset 0x3C, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldDeny; // offset 0x40, size 0x4, align 4 | MNetworkEnable
    int32 m_iCreepGoldNeutral; // offset 0x44, size 0x4, align 4 | MNetworkEnable
    int32 m_iFarmBaseline; // offset 0x48, size 0x4, align 4 | MNetworkEnable
    int32 m_iHealth; // offset 0x4C, size 0x4, align 4 | MNetworkEnable
    int32 m_iPlayerKills; // offset 0x50, size 0x4, align 4 | MNetworkEnable
    int32 m_iPlayerAssists; // offset 0x54, size 0x4, align 4 | MNetworkEnable
    int32 m_iDeaths; // offset 0x58, size 0x4, align 4 | MNetworkEnable
    int32 m_iDenies; // offset 0x5C, size 0x4, align 4 | MNetworkEnable
    int32 m_iLastHits; // offset 0x60, size 0x4, align 4 | MNetworkEnable
    int32 m_iKillStreak; // offset 0x64, size 0x4, align 4 | MNetworkEnable
    bool m_bAlive; // offset 0x68, size 0x1, align 1 | MNetworkEnable
    char _pad_0069[0x3]; // offset 0x69
    int32 m_nHeroDraftPosition; // offset 0x6C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bUltimateTrained; // offset 0x70, size 0x1, align 1 | MNetworkEnable
    char _pad_0071[0x3]; // offset 0x71
    GameTime_t m_flUltimateCooldownStart; // offset 0x74, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flUltimateCooldownEnd; // offset 0x78, size 0x4, align 255 | MNetworkEnable
    bool m_bHasRejuvenator; // offset 0x7C, size 0x1, align 1 | MNetworkEnable
    bool m_bHasRebirth; // offset 0x7D, size 0x1, align 1 | MNetworkEnable
    bool m_bFlaggedAsCheater; // offset 0x7E, size 0x1, align 1 | MNetworkEnable
    char _pad_007F[0x1]; // offset 0x7F
    int32 m_iHeroDamage; // offset 0x80, size 0x4, align 4 | MNetworkEnable
    int32 m_iHeroHealing; // offset 0x84, size 0x4, align 4 | MNetworkEnable
    int32 m_iSelfHealing; // offset 0x88, size 0x4, align 4 | MNetworkEnable
    int32 m_iObjectiveDamage; // offset 0x8C, size 0x4, align 4 | MNetworkEnable
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecUpgrades; // offset 0x90, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterAbilities; // offset 0xA8, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< int32 > m_vecBonusCounterValues; // offset 0xC0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterModifiers; // offset 0xD8, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< int32 > m_vecModifierBonusCounterValues; // offset 0xF0, size 0x18, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    CUtlStringToken m_tHeldItem; // offset 0x108, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    char _pad_010C[0x4]; // offset 0x10C
    C_UtlVectorEmbeddedNetworkVar< ItemImbuementPair_t > m_vecImbuements; // offset 0x110, size 0x68, align 8 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t > m_vecDynamicAbilityValues; // offset 0x178, size 0x68, align 8 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t > m_vecStatViewerModifierValues; // offset 0x1E0, size 0x68, align 8 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< StolenAbilityPair_t > m_vecStolenAbilities; // offset 0x248, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    C_UtlVectorEmbeddedNetworkVar< AbilityUpgradeState_t > m_vecAbilityUpgradeState; // offset 0x2B0, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    CUtlString m_strIconHeroCardOverride; // offset 0x318, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strIconHeroCardCriticalOverride; // offset 0x320, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strIconHeroCardGloatOverride; // offset 0x328, size 0x8, align 8 | MNetworkEnable
};
