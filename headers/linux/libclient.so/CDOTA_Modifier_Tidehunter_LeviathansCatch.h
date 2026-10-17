#pragma once

class CDOTA_Modifier_Tidehunter_LeviathansCatch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 model_scale; // offset 0x1AA8, size 0x4, align 4
    int32 attack_range; // offset 0x1AAC, size 0x4, align 4
    int32 anchor_smash_radius; // offset 0x1AB0, size 0x4, align 4
    float32 max_fish_spawn_distance; // offset 0x1AB4, size 0x4, align 4
};
