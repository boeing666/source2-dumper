#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 proc_chance; // offset 0x1AA8, size 0x4, align 4
    int32 barrier_bonus; // offset 0x1AAC, size 0x4, align 4
    float32 mana_restore; // offset 0x1AB0, size 0x4, align 4
    float32 mana_restore_attack; // offset 0x1AB4, size 0x4, align 4
    float32 mana_increase_duration; // offset 0x1AB8, size 0x4, align 4
    float32 mana_as_ms; // offset 0x1ABC, size 0x4, align 4
    float32 min_mana; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
