#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 proc_chance; // offset 0x1A78, size 0x4, align 4
    int32 barrier_bonus; // offset 0x1A7C, size 0x4, align 4
    float32 mana_restore; // offset 0x1A80, size 0x4, align 4
    float32 mana_restore_attack; // offset 0x1A84, size 0x4, align 4
    float32 mana_increase_duration; // offset 0x1A88, size 0x4, align 4
    float32 mana_as_ms; // offset 0x1A8C, size 0x4, align 4
    float32 min_mana; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
