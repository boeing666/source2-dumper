#pragma once

class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public CCitadelModifier /*0x0*/  // sizeof 0x568, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    int32 m_iPulseCount; // offset 0x140, size 0x4, align 4
    ParticleIndex_t m_hPreviewRingParticle; // offset 0x144, size 0x4, align 255
    char _pad_0148[0x420]; // offset 0x148
};
