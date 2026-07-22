#pragma once

class CDOTA_Modifier_Largo_CroakOfGenius_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_duration; // offset 0x1A58, size 0x4, align 4
    float32 damage_threshold; // offset 0x1A5C, size 0x4, align 4
    float32 mana_cost_reduction; // offset 0x1A60, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A64, size 0x4, align 4
    float32 damage_portion_pct; // offset 0x1A68, size 0x4, align 4
    float32 duration_reduction; // offset 0x1A6C, size 0x4, align 4
    float32 max_distance; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
