#pragma once

class CDOTA_Modifier_DoomBringer_InfernalBlade : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bInfernalBladeAttack; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    float32 burn_duration; // offset 0x1A80, size 0x4, align 4
    float32 ministun_duration; // offset 0x1A84, size 0x4, align 4
};
