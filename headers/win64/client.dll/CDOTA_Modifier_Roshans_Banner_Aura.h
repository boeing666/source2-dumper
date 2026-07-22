#pragma once

class CDOTA_Modifier_Roshans_Banner_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 hp_bonus; // offset 0x1A5C, size 0x4, align 4
    int32 damage_bonus; // offset 0x1A60, size 0x4, align 4
    int32 model_scale; // offset 0x1A64, size 0x4, align 4
    float32 buff_linger_duration; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
