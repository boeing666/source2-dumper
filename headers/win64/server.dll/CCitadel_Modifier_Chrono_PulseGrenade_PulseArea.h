#pragma once

class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public CCitadelModifier /*0x0*/  // sizeof 0x3D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_iPulseCount; // offset 0xD0, size 0x4, align 4
    ParticleIndex_t m_hPreviewRingParticle; // offset 0xD4, size 0x4, align 255
    char _pad_00D8[0x300]; // offset 0xD8
};
