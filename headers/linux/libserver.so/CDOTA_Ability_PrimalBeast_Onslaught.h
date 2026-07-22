#pragma once

class CDOTA_Ability_PrimalBeast_Onslaught : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 max_charge_time; // offset 0x85C, size 0x4, align 4
    float32 knockback_distance; // offset 0x860, size 0x4, align 4
    int32 knockback_damage; // offset 0x864, size 0x4, align 4
    int32 collision_radius; // offset 0x868, size 0x4, align 4
    int32 max_distance; // offset 0x86C, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x870, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x87C, size 0x4, align 255
    int32 m_nProjectileID; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x14]; // offset 0x884
};
