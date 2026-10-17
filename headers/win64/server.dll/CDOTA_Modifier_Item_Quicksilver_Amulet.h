#pragma once

class CDOTA_Modifier_Item_Quicksilver_Amulet : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 base_attack; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_attack; // offset 0x1AAC, size 0x4, align 4
    int32 base_movement; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_movement; // offset 0x1AB4, size 0x4, align 4
    int32 projectile_increase; // offset 0x1AB8, size 0x4, align 4
    int32 anim_increase; // offset 0x1ABC, size 0x4, align 4
};
