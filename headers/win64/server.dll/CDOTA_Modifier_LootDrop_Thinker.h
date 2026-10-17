#pragma once

class CDOTA_Modifier_LootDrop_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bAutoPickup; // offset 0x1AA8, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x1AA9, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x1AAA, size 0x1, align 1
    bool m_bAutoUse; // offset 0x1AAB, size 0x1, align 1
    bool m_bFlying; // offset 0x1AAC, size 0x1, align 1
    bool m_bUseSpawnAnim; // offset 0x1AAD, size 0x1, align 1
    bool m_bAutoTeleport; // offset 0x1AAE, size 0x1, align 1
    char _pad_1AAF[0x1]; // offset 0x1AAF
    GameTime_t m_flKnockbackStartTime; // offset 0x1AB0, size 0x4, align 255
    GameTime_t m_flKnockbackEndTime; // offset 0x1AB4, size 0x4, align 255
    float32 m_flKnockbackHeight; // offset 0x1AB8, size 0x4, align 4
    float32 m_flInitialHeight; // offset 0x1ABC, size 0x4, align 4
    float32 m_flKnockbackDuration; // offset 0x1AC0, size 0x4, align 4
    float32 m_flEndHeight; // offset 0x1AC4, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1AC8, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1AD4, size 0xC, align 4
    float32 m_fPickupRadius; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
    CUtlString m_strTransitionEffect; // offset 0x1AE8, size 0x8, align 8
};
