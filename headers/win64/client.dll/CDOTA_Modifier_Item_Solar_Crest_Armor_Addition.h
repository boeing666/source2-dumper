#pragma once

class CDOTA_Modifier_Item_Solar_Crest_Armor_Addition : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 target_armor; // offset 0x1A58, size 0x4, align 4
    int32 target_attack_speed; // offset 0x1A5C, size 0x4, align 4
    int32 target_movement_speed; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
