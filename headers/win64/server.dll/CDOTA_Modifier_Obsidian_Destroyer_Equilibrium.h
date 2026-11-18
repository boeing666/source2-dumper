#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 proc_chance; // offset 0x1AF8, size 0x4, align 4
    int32 barrier_bonus; // offset 0x1AFC, size 0x4, align 4
    float32 mana_restore; // offset 0x1B00, size 0x4, align 4
    float32 mana_restore_attack; // offset 0x1B04, size 0x4, align 4
    float32 mana_increase_duration; // offset 0x1B08, size 0x4, align 4
    float32 mana_as_ms; // offset 0x1B0C, size 0x4, align 4
    float32 min_mana; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
