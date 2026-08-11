#pragma once

class CDOTA_Ability_VoidSpirit_AstralStep : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x58C, size 0xC, align 4
    Vector m_vDirection; // offset 0x598, size 0xC, align 4
    float32 radius; // offset 0x5A4, size 0x4, align 4
    float32 min_travel_distance; // offset 0x5A8, size 0x4, align 4
    float32 max_travel_distance; // offset 0x5AC, size 0x4, align 4
    float32 debuff_duration; // offset 0x5B0, size 0x4, align 4
    float32 pop_damage_delay; // offset 0x5B4, size 0x4, align 4
};
