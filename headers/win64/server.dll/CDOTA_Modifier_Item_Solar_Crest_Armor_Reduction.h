#pragma once

class CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 target_armor; // offset 0x1A78, size 0x4, align 4
    int32 target_attack_speed; // offset 0x1A7C, size 0x4, align 4
    int32 target_movement_speed; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
