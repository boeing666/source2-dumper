#pragma once

class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 immunity_resist; // offset 0x1A58, size 0x4, align 4
    float32 blade_fury_radius; // offset 0x1A5C, size 0x4, align 4
    float32 blade_fury_outer_radius; // offset 0x1A60, size 0x4, align 4
    int32 blade_fury_damage; // offset 0x1A64, size 0x4, align 4
    float32 blade_fury_damage_tick; // offset 0x1A68, size 0x4, align 4
    float32 m_flTotalAppliedDamage; // offset 0x1A6C, size 0x4, align 4
    float32 attack_interval; // offset 0x1A70, size 0x4, align 4
    int32 can_crit; // offset 0x1A74, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_flNextAttack; // offset 0x1A7C, size 0x4, align 255
    bool m_bIgnoreAttackRestriction; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    float32 blade_fury_aspd_multiplier; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x18]; // offset 0x1A88
};
