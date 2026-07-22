#pragma once

class CDOTA_Ability_Magnataur_Skewer : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 skewer_radius; // offset 0x6A8, size 0x4, align 4
    float32 skewer_speed; // offset 0x6AC, size 0x4, align 4
    float32 tree_radius; // offset 0x6B0, size 0x4, align 4
    float32 tree_hit_damage; // offset 0x6B4, size 0x4, align 4
    float32 cliff_hit_damage; // offset 0x6B8, size 0x4, align 4
    int32 terrain_hit_increase_pct; // offset 0x6BC, size 0x4, align 4
    float32 terrain_hit_cooldown; // offset 0x6C0, size 0x4, align 4
    int32 m_nTargetsHit; // offset 0x6C4, size 0x4, align 4
};
