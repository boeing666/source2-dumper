#pragma once

class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1B18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    bool m_bInitialized; // offset 0x19C8, size 0x1, align 1
    bool m_bCreatureCanRespawn; // offset 0x19C9, size 0x1, align 1
    bool m_bUsesGestureBasedAttackAnimation; // offset 0x19CA, size 0x1, align 1
    bool m_bIsHybridFlyer; // offset 0x19CB, size 0x1, align 1
    bool m_bRequiresReachingEndPath; // offset 0x19CC, size 0x1, align 1
    bool m_bAggroOwnerOnDamage; // offset 0x19CD, size 0x1, align 1
    bool m_bReceivedAggroOnDamageOrder; // offset 0x19CE, size 0x1, align 1
    char _pad_19CF[0x1]; // offset 0x19CF
    CUtlVector< CreatureStateData_t > m_vCreatureStates; // offset 0x19D0, size 0x18, align 8
    char* m_pszDefaultState; // offset 0x19E8, size 0x8, align 8
    char* m_pszCurrentState; // offset 0x19F0, size 0x8, align 8
    int32 m_nHPGain; // offset 0x19F8, size 0x4, align 4
    int32 m_nManaGain; // offset 0x19FC, size 0x4, align 4
    float32 m_flHPRegenGain; // offset 0x1A00, size 0x4, align 4
    float32 m_flManaRegenGain; // offset 0x1A04, size 0x4, align 4
    int32 m_nDamageGain; // offset 0x1A08, size 0x4, align 4
    float32 m_flArmorGain; // offset 0x1A0C, size 0x4, align 4
    float32 m_flMagicResistGain; // offset 0x1A10, size 0x4, align 4
    float32 m_flDisableResistGain; // offset 0x1A14, size 0x4, align 4
    float32 m_flAttackTimeGain; // offset 0x1A18, size 0x4, align 4
    int32 m_nMoveSpeedGain; // offset 0x1A1C, size 0x4, align 4
    int32 m_nBountyGain; // offset 0x1A20, size 0x4, align 4
    int32 m_nXPGain; // offset 0x1A24, size 0x4, align 4
    int32 m_nPermanentDesire; // offset 0x1A28, size 0x4, align 4
    int32 m_nCreatureDesire; // offset 0x1A2C, size 0x4, align 4
    int32 m_nCurrentCastBehavior; // offset 0x1A30, size 0x4, align 4
    int32 m_nEconItemGroup; // offset 0x1A34, size 0x4, align 4
    bool m_bIsBuildingAggressive; // offset 0x1A38, size 0x1, align 1
    bool m_bIsHeroAggressive; // offset 0x1A39, size 0x1, align 1
    bool m_bDisableClumpingBehavior; // offset 0x1A3A, size 0x1, align 1
    char _pad_1A3B[0x1]; // offset 0x1A3B
    float32 m_flDisableResistance; // offset 0x1A3C, size 0x4, align 4
    float32 m_flUltimateDisableResistance; // offset 0x1A40, size 0x4, align 4
    bool m_bHasOffensiveAbility; // offset 0x1A44, size 0x1, align 1
    char _pad_1A45[0x3]; // offset 0x1A45
    CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities; // offset 0x1A48, size 0x18, align 8
    bool m_bHasDefensiveAbility; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
    CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities; // offset 0x1A68, size 0x18, align 8
    bool m_bHasEscapeAbility; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
    CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities; // offset 0x1A88, size 0x18, align 8
    CDOTABaseAbility* m_pLastUsedAbility; // offset 0x1AA0, size 0x8, align 8
    VectorWS m_vDesiredCastLocation; // offset 0x1AA8, size 0xC, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CDOTA_BaseNPC* m_pDesiredNPCTarget; // offset 0x1AB8, size 0x8, align 8
    CDOTA_BaseNPC* m_pEscortTarget; // offset 0x1AC0, size 0x8, align 8
    VectorWS m_vLastDamageSource; // offset 0x1AC8, size 0xC, align 4
    bool m_bIsChampion; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
    CUtlVector< ItemDropData_t* > m_vItemDropData; // offset 0x1AD8, size 0x18, align 8
    CUtlVector< WearableData_t > m_vecAttachWearableItemDefs; // offset 0x1AF0, size 0x18, align 8
    GameTime_t m_flRespawnTime; // offset 0x1B08, size 0x4, align 255
    bool m_bIsCurrentlyChanneling; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 m_flChannelCycle; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
