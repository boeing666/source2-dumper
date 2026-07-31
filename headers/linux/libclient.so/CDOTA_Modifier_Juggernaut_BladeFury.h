#pragma once

class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 immunity_resist; // offset 0x1A78, size 0x4, align 4
    float32 blade_fury_radius; // offset 0x1A7C, size 0x4, align 4
    float32 blade_fury_outer_radius; // offset 0x1A80, size 0x4, align 4
    int32 blade_fury_damage; // offset 0x1A84, size 0x4, align 4
    float32 blade_fury_damage_tick; // offset 0x1A88, size 0x4, align 4
    float32 m_flTotalAppliedDamage; // offset 0x1A8C, size 0x4, align 4
    float32 attack_interval; // offset 0x1A90, size 0x4, align 4
    int32 can_crit; // offset 0x1A94, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_flNextAttack; // offset 0x1A9C, size 0x4, align 255
    bool m_bIgnoreAttackRestriction; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    float32 blade_fury_aspd_multiplier; // offset 0x1AA4, size 0x4, align 4
    char _pad_1AA8[0x18]; // offset 0x1AA8
};
