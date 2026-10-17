#pragma once

class CDOTA_Modifier_Item_AsceticCapBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 status_resistance; // offset 0x1AA8, size 0x4, align 4
    int32 slow_resistance; // offset 0x1AAC, size 0x4, align 4
};
