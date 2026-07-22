#pragma once

class CDOTA_Ability_Kunkka_GhostShip : public CDOTABaseAbility /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 buff_duration; // offset 0x85C, size 0x4, align 4
    float32 stun_duration; // offset 0x860, size 0x4, align 4
    float32 ghostship_width; // offset 0x864, size 0x4, align 4
    float32 ghostship_width_scepter; // offset 0x868, size 0x4, align 4
    int32 num_cannon_volleys; // offset 0x86C, size 0x4, align 4
    float32 rum_factor; // offset 0x870, size 0x4, align 4
    VectorWS m_vFinalDestination; // offset 0x874, size 0xC, align 4
    VectorWS m_vStartingPoint; // offset 0x880, size 0xC, align 4
    int32 m_hProjectileID; // offset 0x88C, size 0x4, align 4
    char _pad_0890[0x40]; // offset 0x890
};
