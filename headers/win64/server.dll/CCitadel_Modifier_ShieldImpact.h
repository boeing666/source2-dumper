#pragma once

class CCitadel_Modifier_ShieldImpact : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ParticleIndex_t m_AmbientEffect; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x4]; // offset 0x14C
};
