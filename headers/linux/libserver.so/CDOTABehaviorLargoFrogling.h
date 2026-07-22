#pragma once

class CDOTABehaviorLargoFrogling : public CDOTABehaviorCompanion /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x18C]; // offset 0x0
    float32 m_flThreatLevel; // offset 0x18C, size 0x4, align 4
    CountdownTimer m_ThreatTimer; // offset 0x190, size 0x18, align 8
    CountdownTimer m_StuckTimer; // offset 0x1A8, size 0x18, align 8
    bool m_bHasVanished; // offset 0x1C0, size 0x1, align 1
    char _pad_01C1[0x7]; // offset 0x1C1
    CountdownTimer m_VanishOnThreatTimer; // offset 0x1C8, size 0x18, align 8
    VectorWS m_vecFleeCurrentTarget; // offset 0x1E0, size 0xC, align 4
    Vector m_vecFleeDirection; // offset 0x1EC, size 0xC, align 4
    Vector m_vecOldFleeDirection; // offset 0x1F8, size 0xC, align 4
    char _pad_0204[0x4]; // offset 0x204
    CountdownTimer m_FleePersistTimer; // offset 0x208, size 0x18, align 8
    CountdownTimer m_CombatRepositionTimer; // offset 0x220, size 0x18, align 8
    CHandle< CDOTA_BaseNPC > m_hNearestEnemyHero; // offset 0x238, size 0x4, align 4
    GameTime_t m_flLastInWater; // offset 0x23C, size 0x4, align 255
    VectorWS m_vecHomeBasePosition; // offset 0x240, size 0xC, align 4
    bool m_bReturnToBase; // offset 0x24C, size 0x1, align 1
    char _pad_024D[0x3]; // offset 0x24D
    CountdownTimer m_ReturnToBaseTimer; // offset 0x250, size 0x18, align 8
    PetCoopStates_t m_nCoopTeleportState; // offset 0x268, size 0x4, align 4
    char _pad_026C[0x4]; // offset 0x26C
    CountdownTimer m_CarryItemTimer; // offset 0x270, size 0x18, align 8
    CountdownTimer m_PickupDelayTimer; // offset 0x288, size 0x18, align 8
    CountdownTimer m_LevelupCheckTimer; // offset 0x2A0, size 0x18, align 8
    bool m_bIsEmoting; // offset 0x2B8, size 0x1, align 1
    char _pad_02B9[0x3]; // offset 0x2B9
    CHandle< CDOTA_BaseNPC > m_hEmoteTarget; // offset 0x2BC, size 0x4, align 4
    CountdownTimer m_EmoteTimer; // offset 0x2C0, size 0x18, align 8
    int32 m_nEmoteActivity; // offset 0x2D8, size 0x4, align 4
    CHandle< CBaseEntity > m_tempGoalEntity; // offset 0x2DC, size 0x4, align 4
    bool m_bFollowingTempGoal; // offset 0x2E0, size 0x1, align 1
    char _pad_02E1[0x3]; // offset 0x2E1
    int32 m_event_dota_illusions_created; // offset 0x2E4, size 0x4, align 4
};
