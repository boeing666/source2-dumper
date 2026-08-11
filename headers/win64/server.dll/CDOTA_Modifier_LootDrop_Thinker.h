#pragma once

class CDOTA_Modifier_LootDrop_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bAutoPickup; // offset 0x1A78, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x1A79, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x1A7A, size 0x1, align 1
    bool m_bAutoUse; // offset 0x1A7B, size 0x1, align 1
    bool m_bFlying; // offset 0x1A7C, size 0x1, align 1
    bool m_bUseSpawnAnim; // offset 0x1A7D, size 0x1, align 1
    bool m_bAutoTeleport; // offset 0x1A7E, size 0x1, align 1
    char _pad_1A7F[0x1]; // offset 0x1A7F
    GameTime_t m_flKnockbackStartTime; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flKnockbackEndTime; // offset 0x1A84, size 0x4, align 255
    float32 m_flKnockbackHeight; // offset 0x1A88, size 0x4, align 4
    float32 m_flInitialHeight; // offset 0x1A8C, size 0x4, align 4
    float32 m_flKnockbackDuration; // offset 0x1A90, size 0x4, align 4
    float32 m_flEndHeight; // offset 0x1A94, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1A98, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1AA4, size 0xC, align 4
    float32 m_fPickupRadius; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlString m_strTransitionEffect; // offset 0x1AB8, size 0x8, align 8
};
