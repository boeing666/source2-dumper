#pragma once

class CDOTA_Modifier_Item_Veil_Of_Discord : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_health; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1AAC, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
