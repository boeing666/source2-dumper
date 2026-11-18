#pragma once

class CDOTA_Modifier_Juggernaut_BladeFury : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 immunity_resist; // offset 0x1AF8, size 0x4, align 4
    float32 blade_fury_radius; // offset 0x1AFC, size 0x4, align 4
    float32 blade_fury_outer_radius; // offset 0x1B00, size 0x4, align 4
    int32 blade_fury_damage; // offset 0x1B04, size 0x4, align 4
    float32 blade_fury_damage_tick; // offset 0x1B08, size 0x4, align 4
    float32 m_flTotalAppliedDamage; // offset 0x1B0C, size 0x4, align 4
    int32 can_crit; // offset 0x1B10, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1B14, size 0x4, align 4
    float32 scepter_attack_damage_pct; // offset 0x1B18, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B1C, size 0x4, align 4
    char _pad_1B20[0x18]; // offset 0x1B20
};
