#pragma once

class C_DOTA_Ability_PrimalBeast_Onslaught : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 max_charge_time; // offset 0x6A8, size 0x4, align 4
    float32 knockback_distance; // offset 0x6AC, size 0x4, align 4
    int32 knockback_damage; // offset 0x6B0, size 0x4, align 4
    int32 collision_radius; // offset 0x6B4, size 0x4, align 4
    int32 max_distance; // offset 0x6B8, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x6BC, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6C8, size 0x4, align 255
    int32 m_nProjectileID; // offset 0x6CC, size 0x4, align 4
    char _pad_06D0[0x18]; // offset 0x6D0
};
