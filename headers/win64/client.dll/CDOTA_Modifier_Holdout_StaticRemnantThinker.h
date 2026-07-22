#pragma once

class CDOTA_Modifier_Holdout_StaticRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 static_remnant_radius; // offset 0x1A58, size 0x4, align 4
    int32 static_remnant_damage_radius; // offset 0x1A5C, size 0x4, align 4
    int32 static_remnant_damage; // offset 0x1A60, size 0x4, align 4
    float32 static_remnant_delay; // offset 0x1A64, size 0x4, align 4
    float32 overload_duration; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
