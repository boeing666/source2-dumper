#pragma once

class CDOTA_Modifier_Item_Quicksilver_Amulet : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 base_attack; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack; // offset 0x1AFC, size 0x4, align 4
    int32 base_movement; // offset 0x1B00, size 0x4, align 4
    int32 bonus_movement; // offset 0x1B04, size 0x4, align 4
    int32 projectile_increase; // offset 0x1B08, size 0x4, align 4
    int32 anim_increase; // offset 0x1B0C, size 0x4, align 4
};
