#pragma once

class CDOTA_Ability_Magnataur_Skewer : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 skewer_radius; // offset 0x824, size 0x4, align 4
    float32 skewer_speed; // offset 0x828, size 0x4, align 4
    float32 tree_radius; // offset 0x82C, size 0x4, align 4
    float32 tree_hit_damage; // offset 0x830, size 0x4, align 4
    float32 cliff_hit_damage; // offset 0x834, size 0x4, align 4
    int32 terrain_hit_increase_pct; // offset 0x838, size 0x4, align 4
    float32 terrain_hit_cooldown; // offset 0x83C, size 0x4, align 4
    int32 m_nTargetsHit; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
