#pragma once

class CDOTA_Modifier_Lion_FingerPunch : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 punch_bonus_movespeed; // offset 0x1AF8, size 0x4, align 4
    float32 punch_attack_range; // offset 0x1AFC, size 0x4, align 4
    float32 punch_bonus_damage_base; // offset 0x1B00, size 0x4, align 4
    float32 damage_per_kill; // offset 0x1B04, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1B08, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1B0C, size 0x4, align 4
    float32 cleave_distance; // offset 0x1B10, size 0x4, align 4
    float32 cleave_damage; // offset 0x1B14, size 0x4, align 4
    float32 grace_period; // offset 0x1B18, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1B1C, size 0x4, align 4
};
