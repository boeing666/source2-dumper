#pragma once

class CDOTA_Modifier_Obsidian_Destroyer_ObjurgationMana : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_mana; // offset 0x1A58, size 0x4, align 4
    float32 automatic_trigger_cd; // offset 0x1A5C, size 0x4, align 4
    float32 automatic_trigger_threshold; // offset 0x1A60, size 0x4, align 4
    float32 mana_to_barrier; // offset 0x1A64, size 0x4, align 4
    float32 barrier_flat; // offset 0x1A68, size 0x4, align 4
    float32 barrier_duration; // offset 0x1A6C, size 0x4, align 4
};
