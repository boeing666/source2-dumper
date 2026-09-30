#pragma once

class CCitadel_Modifier_RescueBeam : public CCitadelModifier /*0x0*/  // sizeof 0x408, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x400]; // offset 0x0
    float32 m_flHealthPerSecond; // offset 0x400, size 0x4, align 4
    ParticleIndex_t m_nBeamIndex; // offset 0x404, size 0x4, align 255
};
