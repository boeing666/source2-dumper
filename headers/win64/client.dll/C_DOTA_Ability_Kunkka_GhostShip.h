#pragma once

class C_DOTA_Ability_Kunkka_GhostShip : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 buff_duration; // offset 0x6A8, size 0x4, align 4
    float32 stun_duration; // offset 0x6AC, size 0x4, align 4
    float32 ghostship_width; // offset 0x6B0, size 0x4, align 4
    float32 ghostship_width_scepter; // offset 0x6B4, size 0x4, align 4
    int32 num_cannon_volleys; // offset 0x6B8, size 0x4, align 4
    float32 rum_factor; // offset 0x6BC, size 0x4, align 4
    VectorWS m_vFinalDestination; // offset 0x6C0, size 0xC, align 4
    VectorWS m_vStartingPoint; // offset 0x6CC, size 0xC, align 4
    int32 m_hProjectileID; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x14]; // offset 0x6DC
};
