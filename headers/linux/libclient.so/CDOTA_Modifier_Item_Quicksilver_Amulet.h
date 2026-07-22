#pragma once

class CDOTA_Modifier_Item_Quicksilver_Amulet : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 base_attack; // offset 0x1A58, size 0x4, align 4
    int32 bonus_attack; // offset 0x1A5C, size 0x4, align 4
    int32 base_movement; // offset 0x1A60, size 0x4, align 4
    int32 bonus_movement; // offset 0x1A64, size 0x4, align 4
    int32 projectile_increase; // offset 0x1A68, size 0x4, align 4
    int32 anim_increase; // offset 0x1A6C, size 0x4, align 4
};
