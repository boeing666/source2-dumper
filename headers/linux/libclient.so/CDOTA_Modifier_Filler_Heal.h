#pragma once

class CDOTA_Modifier_Filler_Heal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 hp_heal; // offset 0x1A58, size 0x4, align 4
    int32 mp_heal; // offset 0x1A5C, size 0x4, align 4
    int32 hp_heal_growth; // offset 0x1A60, size 0x4, align 4
    float32 mp_heal_growth; // offset 0x1A64, size 0x4, align 4
    int32 hp_heal_pct; // offset 0x1A68, size 0x4, align 4
    int32 mp_heal_pct; // offset 0x1A6C, size 0x4, align 4
    int32 tota_hp_per_second; // offset 0x1A70, size 0x4, align 4
    int32 tota_mp_per_second; // offset 0x1A74, size 0x4, align 4
};
