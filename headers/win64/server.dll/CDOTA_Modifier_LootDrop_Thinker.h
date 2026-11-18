#pragma once

class CDOTA_Modifier_LootDrop_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bAutoPickup; // offset 0x1AF8, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x1AF9, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x1AFA, size 0x1, align 1
    bool m_bAutoUse; // offset 0x1AFB, size 0x1, align 1
    bool m_bFlying; // offset 0x1AFC, size 0x1, align 1
    bool m_bUseSpawnAnim; // offset 0x1AFD, size 0x1, align 1
    bool m_bAutoTeleport; // offset 0x1AFE, size 0x1, align 1
    char _pad_1AFF[0x1]; // offset 0x1AFF
    GameTime_t m_flKnockbackStartTime; // offset 0x1B00, size 0x4, align 255
    GameTime_t m_flKnockbackEndTime; // offset 0x1B04, size 0x4, align 255
    float32 m_flKnockbackHeight; // offset 0x1B08, size 0x4, align 4
    float32 m_flInitialHeight; // offset 0x1B0C, size 0x4, align 4
    float32 m_flKnockbackDuration; // offset 0x1B10, size 0x4, align 4
    float32 m_flEndHeight; // offset 0x1B14, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1B18, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1B24, size 0xC, align 4
    float32 m_fPickupRadius; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CUtlString m_strTransitionEffect; // offset 0x1B38, size 0x8, align 8
};
