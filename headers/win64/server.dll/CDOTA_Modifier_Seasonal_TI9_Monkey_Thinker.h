#pragma once

class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 attack_range; // offset 0x1AA8, size 0x4, align 4
    float32 attack_time; // offset 0x1AAC, size 0x4, align 4
    float32 attack_projectile_time; // offset 0x1AB0, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AB4, size 0x4, align 4
    float32 turn_time; // offset 0x1AB8, size 0x4, align 4
    float32 turn_angle; // offset 0x1ABC, size 0x4, align 4
    float32 shoot_angle; // offset 0x1AC0, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x1AC4, size 0x4, align 4
    float32 m_flTargetYaw; // offset 0x1AC8, size 0x4, align 4
    float32 m_flLastTurnTime; // offset 0x1ACC, size 0x4, align 4
    GameTick_t m_nLastTickCount; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
    bool m_bHappyMonkeyCondition; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    CHandle< CDOTA_BaseNPC > m_hAngryTarget; // offset 0x1ADC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hAttackTarget; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
    CountdownTimer m_AttackTimer; // offset 0x1AE8, size 0x18, align 8
    CountdownTimer m_AttackProjectileTimer; // offset 0x1B00, size 0x18, align 8
    CountdownTimer m_HappyTimer; // offset 0x1B18, size 0x18, align 8
};
