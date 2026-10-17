#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1DF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CA4]; // offset 0x0
    bool m_bInitialized; // offset 0x1CA4, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x1CA5, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x1CA6, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x1CA7, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x1CA8, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x1CA9, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x1CAA, size 0x1, align 1
    char _pad_1CAB[0x5]; // offset 0x1CAB
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x1CB0, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x1CC8, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x1CD0, size 0x8, align 8
    int32 m_nHPGain; // offset 0x1CD8, size 0x4, align 4
    int32 m_nManaGain; // offset 0x1CDC, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1CE0, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x1CE4, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1CE8, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x1CEC, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1CF0, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x1CF4, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1CF8, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x1CFC, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1D00, size 0x4, align 4
    int32 m_nXPGain; // offset 0x1D04, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1D08, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x1D0C, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1D10, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x1D14, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1D18, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1D19, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x1D1A, size 0x1, align 1
    char _pad_1D1B[0x1]; // offset 0x1D1B
    float32 m_flDisableResistance; // offset 0x1D1C, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1D20, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x1D24, size 0x1, align 1
    char _pad_1D25[0x3]; // offset 0x1D25
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1D28, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1D40, size 0x1, align 1
    char _pad_1D41[0x7]; // offset 0x1D41
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1D48, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1D60, size 0x1, align 1
    char _pad_1D61[0x7]; // offset 0x1D61
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1D68, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x1D80, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x1D88, size 0xC, align 4
    char _pad_1D94[0x4]; // offset 0x1D94
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x1D98, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x1DA0, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x1DA8, size 0xC, align 4
    bool m_bIsChampion; // offset 0x1DB4, size 0x1, align 1
    char _pad_1DB5[0x3]; // offset 0x1DB5
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x1DB8, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x1DD0, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1DE8, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1DEC, size 0x1, align 1
    char _pad_1DED[0x3]; // offset 0x1DED
    float32 m_flChannelCycle; // offset 0x1DF0, size 0x4, align 4
    char _pad_1DF4[0x4]; // offset 0x1DF4
};
