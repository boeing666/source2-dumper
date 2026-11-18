#pragma once

class CDOTA_Modifier_Sniper_Headshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 proc_chance; // offset 0x1AF8, size 0x4, align 4
    float32 slow_duration; // offset 0x1AFC, size 0x4, align 4
    float32 knockback_distance; // offset 0x1B00, size 0x4, align 4
    int32 bonus_damage_creeps; // offset 0x1B04, size 0x4, align 4
    float32 damage; // offset 0x1B08, size 0x4, align 4
    float32 attack_effectiveness; // offset 0x1B0C, size 0x4, align 4
    AttackRecord_t m_iLastRolledRecord; // offset 0x1B10, size 0x2, align 255
    bool m_bLastRollSuccess; // offset 0x1B12, size 0x1, align 1
    char _pad_1B13[0x5]; // offset 0x1B13
};
