#pragma once

class CDOTA_Modifier_Tidehunter_LeviathansCatch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 model_scale; // offset 0x1A58, size 0x4, align 4
    int32 attack_range; // offset 0x1A5C, size 0x4, align 4
    int32 anchor_smash_radius; // offset 0x1A60, size 0x4, align 4
    float32 max_fish_spawn_distance; // offset 0x1A64, size 0x4, align 4
};
