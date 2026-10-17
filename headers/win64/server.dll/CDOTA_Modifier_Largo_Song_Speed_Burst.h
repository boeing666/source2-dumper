#pragma once

class CDOTA_Modifier_Largo_Song_Speed_Burst : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 movespeed_bonus_burst; // offset 0x1AA8, size 0x4, align 4
    int32 num_stacks; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
