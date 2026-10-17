#pragma once

class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 cleave_damage_pct; // offset 0x1AA8, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1AAC, size 0x4, align 4
    int32 cleave_angle; // offset 0x1AB0, size 0x4, align 4
    float32 cleave_distance_base; // offset 0x1AB4, size 0x4, align 4
    int32 cleave_distance_per_stack; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
