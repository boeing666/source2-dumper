#pragma once

class CDOTA_Modifier_Item_Trickster_Cloak : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 evasion; // offset 0x1AA8, size 0x4, align 4
    int32 magic_resistance; // offset 0x1AAC, size 0x4, align 4
};
