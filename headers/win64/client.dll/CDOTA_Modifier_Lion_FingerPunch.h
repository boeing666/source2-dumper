#pragma once

class CDOTA_Modifier_Lion_FingerPunch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 punch_bonus_movespeed; // offset 0x1A78, size 0x4, align 4
    float32 punch_attack_range; // offset 0x1A7C, size 0x4, align 4
    float32 punch_bonus_damage_base; // offset 0x1A80, size 0x4, align 4
    float32 damage_per_kill; // offset 0x1A84, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A88, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A8C, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A90, size 0x4, align 4
    float32 cleave_damage; // offset 0x1A94, size 0x4, align 4
    float32 grace_period; // offset 0x1A98, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1A9C, size 0x4, align 4
};
