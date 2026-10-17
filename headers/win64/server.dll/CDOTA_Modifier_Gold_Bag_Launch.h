#pragma once

class CDOTA_Modifier_Gold_Bag_Launch : public CDOTA_Modifier_Knockback /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AE0]; // offset 0x0
    int32 gold_amount; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
