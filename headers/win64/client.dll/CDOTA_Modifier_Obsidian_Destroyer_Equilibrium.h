#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 proc_chance; // offset 0x1A58, size 0x4, align 4
    int32 barrier_bonus; // offset 0x1A5C, size 0x4, align 4
    float32 mana_restore; // offset 0x1A60, size 0x4, align 4
    float32 mana_restore_attack; // offset 0x1A64, size 0x4, align 4
    float32 mana_increase_duration; // offset 0x1A68, size 0x4, align 4
    float32 mana_as_ms; // offset 0x1A6C, size 0x4, align 4
    float32 min_mana; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
