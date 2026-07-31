#pragma once

class CDOTA_Modifier_Viper_PoisonAttack_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage; // offset 0x1A78, size 0x4, align 4
    int32 shard_armor_reduction; // offset 0x1A7C, size 0x4, align 4
    int32 shard_building_dmg_pct; // offset 0x1A80, size 0x4, align 4
    float32 movement_speed; // offset 0x1A84, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A88, size 0x4, align 4
    float32 m_flAccumDamage; // offset 0x1A8C, size 0x4, align 4
    float32 expiration_damage_radius; // offset 0x1A90, size 0x4, align 4
    int32 accumulated_damage_explosion_pct; // offset 0x1A94, size 0x4, align 4
};
