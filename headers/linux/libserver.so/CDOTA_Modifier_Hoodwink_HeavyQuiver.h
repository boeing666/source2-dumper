#pragma once

class CDOTA_Modifier_Hoodwink_HeavyQuiver : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_projectile_speed_pct; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1AFC, size 0x4, align 4
    int32 deadly_blow_multiplier; // offset 0x1B00, size 0x4, align 4
    float32 maim_duration; // offset 0x1B04, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1B08, size 0x2, align 255
    char _pad_1B0A[0x6]; // offset 0x1B0A
};
