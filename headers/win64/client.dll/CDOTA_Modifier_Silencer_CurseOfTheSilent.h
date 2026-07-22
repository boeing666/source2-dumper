#pragma once

class CDOTA_Modifier_Silencer_CurseOfTheSilent : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage; // offset 0x1A58, size 0x4, align 4
    ParticleIndex_t nFxIndex; // offset 0x1A5C, size 0x4, align 255
    int32 penalty_duration; // offset 0x1A60, size 0x4, align 4
    float32 penalty_multiplier; // offset 0x1A64, size 0x4, align 4
    int32 movespeed; // offset 0x1A68, size 0x4, align 4
    int32 undispellable; // offset 0x1A6C, size 0x4, align 4
};
