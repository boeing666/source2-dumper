#pragma once

class CDOTA_Modifier_Largo_Song_Speed_Burst : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 movespeed_bonus_burst; // offset 0x1A78, size 0x4, align 4
    int32 num_stacks; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
