#pragma once

class CDOTA_Modifier_Gold_Bag_Launch : public CDOTA_Modifier_Knockback /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B30]; // offset 0x0
    int32 gold_amount; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
