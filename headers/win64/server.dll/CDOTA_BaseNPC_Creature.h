#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18D8]; // offset 0x0
    bool m_bInitialized; // offset 0x18D8, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x18D9, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x18DA, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x18DB, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x18DC, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x18DD, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x18DE, size 0x1, align 1
    char _pad_18DF[0x1]; // offset 0x18DF
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x18E0, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x18F8, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x1900, size 0x8, align 8
    int32 m_nHPGain; // offset 0x1908, size 0x4, align 4
    int32 m_nManaGain; // offset 0x190C, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1910, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x1914, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1918, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x191C, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1920, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x1924, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1928, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x192C, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1930, size 0x4, align 4
    int32 m_nXPGain; // offset 0x1934, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1938, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x193C, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1940, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x1944, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1948, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1949, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x194A, size 0x1, align 1
    char _pad_194B[0x1]; // offset 0x194B
    float32 m_flDisableResistance; // offset 0x194C, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1950, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x1954, size 0x1, align 1
    char _pad_1955[0x3]; // offset 0x1955
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1958, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1970, size 0x1, align 1
    char _pad_1971[0x7]; // offset 0x1971
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1978, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1990, size 0x1, align 1
    char _pad_1991[0x7]; // offset 0x1991
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1998, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x19B0, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x19B8, size 0xC, align 4
    char _pad_19C4[0x4]; // offset 0x19C4
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x19C8, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x19D0, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x19D8, size 0xC, align 4
    bool m_bIsChampion; // offset 0x19E4, size 0x1, align 1
    char _pad_19E5[0x3]; // offset 0x19E5
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x19E8, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x1A00, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1A18, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1A1C, size 0x1, align 1
    char _pad_1A1D[0x3]; // offset 0x1A1D
    float32 m_flChannelCycle; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x4]; // offset 0x1A24
};
