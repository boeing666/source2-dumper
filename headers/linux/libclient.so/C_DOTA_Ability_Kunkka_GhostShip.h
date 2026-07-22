#pragma once

class C_DOTA_Ability_Kunkka_GhostShip : public C_DOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 buff_duration; // offset 0x824, size 0x4, align 4
    float32 stun_duration; // offset 0x828, size 0x4, align 4
    float32 ghostship_width; // offset 0x82C, size 0x4, align 4
    float32 ghostship_width_scepter; // offset 0x830, size 0x4, align 4
    int32 num_cannon_volleys; // offset 0x834, size 0x4, align 4
    float32 rum_factor; // offset 0x838, size 0x4, align 4
    VectorWS m_vFinalDestination; // offset 0x83C, size 0xC, align 4
    VectorWS m_vStartingPoint; // offset 0x848, size 0xC, align 4
    int32 m_hProjectileID; // offset 0x854, size 0x4, align 4
    char _pad_0858[0x18]; // offset 0x858
};
