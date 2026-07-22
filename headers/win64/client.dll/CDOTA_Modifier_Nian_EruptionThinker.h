#pragma once

class CDOTA_Modifier_Nian_EruptionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 explosion_radius; // offset 0x1A58, size 0x4, align 4
    float32 damage_interval; // offset 0x1A5C, size 0x4, align 4
    int32 damage; // offset 0x1A60, size 0x4, align 4
    int32 n_FXIndex; // offset 0x1A64, size 0x4, align 4
    char _pad_1A68[0x18]; // offset 0x1A68
};
