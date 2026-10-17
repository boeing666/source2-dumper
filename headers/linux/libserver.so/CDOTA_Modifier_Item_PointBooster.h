#pragma once

class CDOTA_Modifier_Item_PointBooster : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_mana; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_health; // offset 0x1AAC, size 0x4, align 4
};
