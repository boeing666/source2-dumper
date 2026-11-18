#pragma once

class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 max_damage_duration; // offset 0x1AFC, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B08, size 0x18, align 8
    bool bAttackRange; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    GameTime_t m_flStartTime; // offset 0x1B24, size 0x4, align 255
    GameTime_t m_flFadeTime; // offset 0x1B28, size 0x4, align 255
    float32 m_flDamageScale; // offset 0x1B2C, size 0x4, align 4
    float32 duration; // offset 0x1B30, size 0x4, align 4
    float32 aura_radius; // offset 0x1B34, size 0x4, align 4
};
