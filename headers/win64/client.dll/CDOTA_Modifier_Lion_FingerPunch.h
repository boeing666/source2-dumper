#pragma once

class CDOTA_Modifier_Lion_FingerPunch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 punch_bonus_movespeed; // offset 0x1A58, size 0x4, align 4
    float32 punch_attack_range; // offset 0x1A5C, size 0x4, align 4
    float32 punch_bonus_damage_base; // offset 0x1A60, size 0x4, align 4
    float32 damage_per_kill; // offset 0x1A64, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A68, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A6C, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A70, size 0x4, align 4
    float32 cleave_damage; // offset 0x1A74, size 0x4, align 4
    float32 grace_period; // offset 0x1A78, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1A7C, size 0x4, align 4
};
