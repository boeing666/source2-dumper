#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_ObjurgationMana : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_mana; // offset 0x1AA8, size 0x4, align 4
    float32 automatic_trigger_cd; // offset 0x1AAC, size 0x4, align 4
    float32 automatic_trigger_threshold; // offset 0x1AB0, size 0x4, align 4
    float32 mana_to_barrier; // offset 0x1AB4, size 0x4, align 4
    float32 barrier_flat; // offset 0x1AB8, size 0x4, align 4
    float32 barrier_duration; // offset 0x1ABC, size 0x4, align 4
};
