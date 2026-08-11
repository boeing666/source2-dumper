#pragma once

class CDOTA_Modifier_Item_PointBooster : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_mana; // offset 0x1A78, size 0x4, align 4
    int32 bonus_health; // offset 0x1A7C, size 0x4, align 4
};
