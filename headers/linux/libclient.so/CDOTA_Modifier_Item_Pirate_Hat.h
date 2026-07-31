#pragma once

class CDOTA_Modifier_Item_Pirate_Hat : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 gold_steal_base; // offset 0x1A78, size 0x4, align 4
    int32 gold_steal_kill; // offset 0x1A7C, size 0x4, align 4
    float32 gold_steal_range; // offset 0x1A80, size 0x4, align 4
    float32 gold_loss_reduction; // offset 0x1A84, size 0x4, align 4
};
