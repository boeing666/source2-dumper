#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bInitialized; // offset 0x1A58, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x1A59, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x1A5A, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x1A5B, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x1A5C, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x1A5D, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x1A5E, size 0x1, align 1
    char _pad_1A5F[0x1]; // offset 0x1A5F
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x1A60, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x1A78, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x1A80, size 0x8, align 8
    int32 m_nHPGain; // offset 0x1A88, size 0x4, align 4
    int32 m_nManaGain; // offset 0x1A8C, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1A90, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x1A94, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1A98, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x1A9C, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1AA0, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x1AA4, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1AA8, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x1AAC, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1AB0, size 0x4, align 4
    int32 m_nXPGain; // offset 0x1AB4, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1AB8, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x1ABC, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1AC0, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x1AC4, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1AC8, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1AC9, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x1ACA, size 0x1, align 1
    char _pad_1ACB[0x1]; // offset 0x1ACB
    float32 m_flDisableResistance; // offset 0x1ACC, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1AD0, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1AD8, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x7]; // offset 0x1AF1
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1AF8, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1B18, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x1B30, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x1B38, size 0xC, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x1B48, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x1B50, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x1B58, size 0xC, align 4
    bool m_bIsChampion; // offset 0x1B64, size 0x1, align 1
    char _pad_1B65[0x3]; // offset 0x1B65
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x1B68, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x1B80, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1B98, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1B9C, size 0x1, align 1
    char _pad_1B9D[0x3]; // offset 0x1B9D
    float32 m_flChannelCycle; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x4]; // offset 0x1BA4
};
