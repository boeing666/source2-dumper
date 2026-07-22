#pragma once

class CDOTA_Ability_VoidSpirit_AstralStep : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x6A8, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x6B4, size 0xC, align 4
    Vector m_vDirection; // offset 0x6C0, size 0xC, align 4
    float32 radius; // offset 0x6CC, size 0x4, align 4
    float32 min_travel_distance; // offset 0x6D0, size 0x4, align 4
    float32 max_travel_distance; // offset 0x6D4, size 0x4, align 4
    float32 debuff_duration; // offset 0x6D8, size 0x4, align 4
    float32 pop_damage_delay; // offset 0x6DC, size 0x4, align 4
};
