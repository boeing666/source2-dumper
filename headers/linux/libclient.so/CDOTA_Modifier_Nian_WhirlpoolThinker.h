#pragma once

class CDOTA_Modifier_Nian_WhirlpoolThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 pull_radius; // offset 0x1A58, size 0x4, align 4
    ParticleIndex_t n_FXIndex; // offset 0x1A5C, size 0x4, align 255
    char _pad_1A60[0x18]; // offset 0x1A60
};
