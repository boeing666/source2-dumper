#pragma once

class CDOTA_Ability_VoidSpirit_AstralStep : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x824, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x830, size 0xC, align 4
    Vector m_vDirection; // offset 0x83C, size 0xC, align 4
    float32 radius; // offset 0x848, size 0x4, align 4
    float32 min_travel_distance; // offset 0x84C, size 0x4, align 4
    float32 max_travel_distance; // offset 0x850, size 0x4, align 4
    float32 debuff_duration; // offset 0x854, size 0x4, align 4
    float32 pop_damage_delay; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
