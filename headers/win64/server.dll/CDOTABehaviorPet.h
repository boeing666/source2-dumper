#pragma once

class CDOTABehaviorPet : public CDOTABehaviorCompanion /*0x0*/  // sizeof 0x308, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x190]; // offset 0x0
    float32 m_flThreatLevel; // offset 0x190, size 0x4, align 4
    char _pad_0194[0x4]; // offset 0x194
    CountdownTimer m_ThreatTimer; // offset 0x198, size 0x18, align 8
    CountdownTimer m_StuckTimer; // offset 0x1B0, size 0x18, align 8
    bool m_bHasVanished; // offset 0x1C8, size 0x1, align 1
    char _pad_01C9[0x7]; // offset 0x1C9
    CountdownTimer m_VanishOnThreatTimer; // offset 0x1D0, size 0x18, align 8
    VectorWS m_vecFleeCurrentTarget; // offset 0x1E8, size 0xC, align 4
    Vector m_vecFleeDirection; // offset 0x1F4, size 0xC, align 4
    Vector m_vecOldFleeDirection; // offset 0x200, size 0xC, align 4
    char _pad_020C[0x4]; // offset 0x20C
    CountdownTimer m_FleePersistTimer; // offset 0x210, size 0x18, align 8
    CountdownTimer m_CombatRepositionTimer; // offset 0x228, size 0x18, align 8
    CHandle< CDOTA_BaseNPC > m_hNearestEnemyHero; // offset 0x240, size 0x4, align 4
    GameTime_t m_flLastInWater; // offset 0x244, size 0x4, align 255
    VectorWS m_vecHomeBasePosition; // offset 0x248, size 0xC, align 4
    bool m_bReturnToBase; // offset 0x254, size 0x1, align 1
    char _pad_0255[0x3]; // offset 0x255
    CountdownTimer m_ReturnToBaseTimer; // offset 0x258, size 0x18, align 8
    PetCoopStates_t m_nCoopTeleportState; // offset 0x270, size 0x4, align 4
    char _pad_0274[0x4]; // offset 0x274
    CountdownTimer m_CarryItemTimer; // offset 0x278, size 0x18, align 8
    CountdownTimer m_PickupDelayTimer; // offset 0x290, size 0x18, align 8
    CountdownTimer m_LevelupCheckTimer; // offset 0x2A8, size 0x18, align 8
    CountdownTimer m_RareIdleTimer; // offset 0x2C0, size 0x18, align 8
    bool m_bIsEmoting; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x3]; // offset 0x2D9
    CHandle< CDOTA_BaseNPC > m_hEmoteTarget; // offset 0x2DC, size 0x4, align 4
    CountdownTimer m_EmoteTimer; // offset 0x2E0, size 0x18, align 8
    int32 m_nEmoteActivity; // offset 0x2F8, size 0x4, align 4
    CHandle< CBaseEntity > m_tempGoalEntity; // offset 0x2FC, size 0x4, align 4
    bool m_bFollowingTempGoal; // offset 0x300, size 0x1, align 1
    char _pad_0301[0x3]; // offset 0x301
    int32 m_event_dota_illusions_created; // offset 0x304, size 0x4, align 4
};
