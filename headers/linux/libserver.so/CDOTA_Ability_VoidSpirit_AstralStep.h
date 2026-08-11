#pragma once

class CDOTA_Ability_VoidSpirit_AstralStep : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x868, size 0xC, align 4
    Vector m_vDirection; // offset 0x874, size 0xC, align 4
    float32 radius; // offset 0x880, size 0x4, align 4
    float32 min_travel_distance; // offset 0x884, size 0x4, align 4
    float32 max_travel_distance; // offset 0x888, size 0x4, align 4
    float32 debuff_duration; // offset 0x88C, size 0x4, align 4
    float32 pop_damage_delay; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
};
