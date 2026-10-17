#pragma once

class CDOTA_Modifier_DoomBringer_InfernalBlade : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bInfernalBladeAttack; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    ParticleIndex_t m_nFXIndex; // offset 0x1AAC, size 0x4, align 255
    float32 burn_duration; // offset 0x1AB0, size 0x4, align 4
    float32 ministun_duration; // offset 0x1AB4, size 0x4, align 4
};
