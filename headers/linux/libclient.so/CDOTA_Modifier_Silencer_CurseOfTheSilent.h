#pragma once

class CDOTA_Modifier_Silencer_CurseOfTheSilent : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t nFxIndex; // offset 0x1AFC, size 0x4, align 255
    int32 penalty_duration; // offset 0x1B00, size 0x4, align 4
    float32 penalty_multiplier; // offset 0x1B04, size 0x4, align 4
    int32 movespeed; // offset 0x1B08, size 0x4, align 4
    int32 undispellable; // offset 0x1B0C, size 0x4, align 4
};
