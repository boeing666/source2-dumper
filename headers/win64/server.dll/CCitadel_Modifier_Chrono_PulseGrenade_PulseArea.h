#pragma once

class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public CCitadelModifier /*0x0*/  // sizeof 0x580, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_iPulseCount; // offset 0x150, size 0x4, align 4
    int32 m_iTotalPulseCount; // offset 0x154, size 0x4, align 4
    ParticleIndex_t m_hPreviewRingParticle; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x424]; // offset 0x15C
};
