#pragma once

class CDOTA_Modifier_Wisp_Relocate_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 cast_delay; // offset 0x1A58, size 0x4, align 4
    ParticleIndex_t m_nFXIndexEndTeam; // offset 0x1A5C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexChannel; // offset 0x1A60, size 0x4, align 255
    char _pad_1A64[0x4]; // offset 0x1A64
};
