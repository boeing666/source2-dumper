#pragma once

class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 attack_range; // offset 0x1AF8, size 0x4, align 4
    float32 attack_time; // offset 0x1AFC, size 0x4, align 4
    float32 attack_projectile_time; // offset 0x1B00, size 0x4, align 4
    int32 projectile_speed; // offset 0x1B04, size 0x4, align 4
    float32 turn_time; // offset 0x1B08, size 0x4, align 4
    float32 turn_angle; // offset 0x1B0C, size 0x4, align 4
    float32 shoot_angle; // offset 0x1B10, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x1B14, size 0x4, align 4
    float32 m_flTargetYaw; // offset 0x1B18, size 0x4, align 4
    float32 m_flLastTurnTime; // offset 0x1B1C, size 0x4, align 4
    GameTick_t m_nLastTickCount; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x4]; // offset 0x1B24
    bool m_bHappyMonkeyCondition; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    CHandle< CDOTA_BaseNPC > m_hAngryTarget; // offset 0x1B2C, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hAttackTarget; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CountdownTimer m_AttackTimer; // offset 0x1B38, size 0x18, align 8
    CountdownTimer m_AttackProjectileTimer; // offset 0x1B50, size 0x18, align 8
    CountdownTimer m_HappyTimer; // offset 0x1B68, size 0x18, align 8
};
