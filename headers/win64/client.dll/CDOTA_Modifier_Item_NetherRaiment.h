#pragma once

class CDOTA_Modifier_Item_NetherRaiment : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1A58, size 0x4, align 4
    int32 bonus_health; // offset 0x1A5C, size 0x4, align 4
    int32 max_charges; // offset 0x1A60, size 0x4, align 4
    int32 ms_per_charge; // offset 0x1A64, size 0x4, align 4
    int32 gpm_per_charge; // offset 0x1A68, size 0x4, align 4
    int32 health_per_charge; // offset 0x1A6C, size 0x4, align 4
};
