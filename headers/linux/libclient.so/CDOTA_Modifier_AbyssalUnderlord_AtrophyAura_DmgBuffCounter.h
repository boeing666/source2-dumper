#pragma once

class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 cleave_damage_pct; // offset 0x1A78, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A7C, size 0x4, align 4
    int32 cleave_angle; // offset 0x1A80, size 0x4, align 4
    float32 cleave_distance_base; // offset 0x1A84, size 0x4, align 4
    int32 cleave_distance_per_stack; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
