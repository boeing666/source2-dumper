#pragma once

class CDOTA_Modifier_Necrolyte_ReapersScythe_RespawnTime : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 hp_per_kill; // offset 0x1A58, size 0x4, align 4
    float32 mana_per_kill; // offset 0x1A5C, size 0x4, align 4
    float32 hp_regen; // offset 0x1A60, size 0x4, align 4
    float32 mp_regen; // offset 0x1A64, size 0x4, align 4
};
