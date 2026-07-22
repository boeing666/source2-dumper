#pragma once

class CDOTA_Ability_Kunkka_GhostShip : public CDOTABaseAbility /*0x0*/  // sizeof 0x5F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 buff_duration; // offset 0x580, size 0x4, align 4
    float32 stun_duration; // offset 0x584, size 0x4, align 4
    float32 ghostship_width; // offset 0x588, size 0x4, align 4
    float32 ghostship_width_scepter; // offset 0x58C, size 0x4, align 4
    int32 num_cannon_volleys; // offset 0x590, size 0x4, align 4
    float32 rum_factor; // offset 0x594, size 0x4, align 4
    VectorWS m_vFinalDestination; // offset 0x598, size 0xC, align 4
    VectorWS m_vStartingPoint; // offset 0x5A4, size 0xC, align 4
    int32 m_hProjectileID; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x3C]; // offset 0x5B4
};
