#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1A20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18D0]; // offset 0x0
    bool m_bInitialized; // offset 0x18D0, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x18D1, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x18D2, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x18D3, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x18D4, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x18D5, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x18D6, size 0x1, align 1
    char _pad_18D7[0x1]; // offset 0x18D7
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x18D8, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x18F0, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x18F8, size 0x8, align 8
    int32 m_nHPGain; // offset 0x1900, size 0x4, align 4
    int32 m_nManaGain; // offset 0x1904, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1908, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x190C, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1910, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x1914, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1918, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x191C, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1920, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x1924, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1928, size 0x4, align 4
    int32 m_nXPGain; // offset 0x192C, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1930, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x1934, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1938, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x193C, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1940, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1941, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x1942, size 0x1, align 1
    char _pad_1943[0x1]; // offset 0x1943
    float32 m_flDisableResistance; // offset 0x1944, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1948, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x194C, size 0x1, align 1
    char _pad_194D[0x3]; // offset 0x194D
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1950, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1968, size 0x1, align 1
    char _pad_1969[0x7]; // offset 0x1969
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1970, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1988, size 0x1, align 1
    char _pad_1989[0x7]; // offset 0x1989
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1990, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x19A8, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x19B0, size 0xC, align 4
    char _pad_19BC[0x4]; // offset 0x19BC
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x19C0, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x19C8, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x19D0, size 0xC, align 4
    bool m_bIsChampion; // offset 0x19DC, size 0x1, align 1
    char _pad_19DD[0x3]; // offset 0x19DD
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x19E0, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x19F8, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1A10, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1A14, size 0x1, align 1
    char _pad_1A15[0x3]; // offset 0x1A15
    float32 m_flChannelCycle; // offset 0x1A18, size 0x4, align 4
    char _pad_1A1C[0x4]; // offset 0x1A1C
};
