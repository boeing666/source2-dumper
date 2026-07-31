#pragma once

class CDOTA_Modifier_Creep_Siege : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_building_damage; // offset 0x1A78, size 0x4, align 4
    int32 incoming_hero_damage_penalty; // offset 0x1A7C, size 0x4, align 4
    int32 incoming_basic_damage_penalty; // offset 0x1A80, size 0x4, align 4
    int32 incoming_controlled_unit_penalty; // offset 0x1A84, size 0x4, align 4
};
