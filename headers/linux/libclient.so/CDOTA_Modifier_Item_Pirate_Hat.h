#pragma once

class CDOTA_Modifier_Item_Pirate_Hat : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 gold_steal_base; // offset 0x1A58, size 0x4, align 4
    int32 gold_steal_kill; // offset 0x1A5C, size 0x4, align 4
    float32 gold_steal_range; // offset 0x1A60, size 0x4, align 4
    float32 gold_loss_reduction; // offset 0x1A64, size 0x4, align 4
};
