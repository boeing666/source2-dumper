#pragma once

class CCitadel_Modifier_RescueBeam : public CCitadelModifier /*0x0*/  // sizeof 0x400, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x3F8]; // offset 0x0
    float32 m_flHealthPerSecond; // offset 0x3F8, size 0x4, align 4
    ParticleIndex_t m_nBeamIndex; // offset 0x3FC, size 0x4, align 255
};
