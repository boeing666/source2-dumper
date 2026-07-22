#pragma once

class C_DOTA_Ability_PrimalBeast_Onslaught : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 max_charge_time; // offset 0x824, size 0x4, align 4
    float32 knockback_distance; // offset 0x828, size 0x4, align 4
    int32 knockback_damage; // offset 0x82C, size 0x4, align 4
    int32 collision_radius; // offset 0x830, size 0x4, align 4
    int32 max_distance; // offset 0x834, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x838, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x844, size 0x4, align 255
    int32 m_nProjectileID; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x14]; // offset 0x84C
};
