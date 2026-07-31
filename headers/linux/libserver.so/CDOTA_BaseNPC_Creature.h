#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1BB4]; // offset 0x0
    bool m_bInitialized; // offset 0x1BB4, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x1BB5, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x1BB6, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x1BB7, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x1BB8, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x1BB9, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x1BBA, size 0x1, align 1
    char _pad_1BBB[0x5]; // offset 0x1BBB
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x1BC0, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x1BD8, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x1BE0, size 0x8, align 8
    int32 m_nHPGain; // offset 0x1BE8, size 0x4, align 4
    int32 m_nManaGain; // offset 0x1BEC, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1BF0, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x1BF4, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1BF8, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x1BFC, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1C00, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x1C04, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1C08, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x1C0C, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1C10, size 0x4, align 4
    int32 m_nXPGain; // offset 0x1C14, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1C18, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x1C1C, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1C20, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x1C24, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1C28, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1C29, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x1C2A, size 0x1, align 1
    char _pad_1C2B[0x1]; // offset 0x1C2B
    float32 m_flDisableResistance; // offset 0x1C2C, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1C30, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x1C34, size 0x1, align 1
    char _pad_1C35[0x3]; // offset 0x1C35
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1C38, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1C50, size 0x1, align 1
    char _pad_1C51[0x7]; // offset 0x1C51
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1C58, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1C70, size 0x1, align 1
    char _pad_1C71[0x7]; // offset 0x1C71
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1C78, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x1C90, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x1C98, size 0xC, align 4
    char _pad_1CA4[0x4]; // offset 0x1CA4
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x1CA8, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x1CB0, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x1CB8, size 0xC, align 4
    bool m_bIsChampion; // offset 0x1CC4, size 0x1, align 1
    char _pad_1CC5[0x3]; // offset 0x1CC5
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x1CC8, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x1CE0, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1CF8, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1CFC, size 0x1, align 1
    char _pad_1CFD[0x3]; // offset 0x1CFD
    float32 m_flChannelCycle; // offset 0x1D00, size 0x4, align 4
    char _pad_1D04[0x4]; // offset 0x1D04
};
