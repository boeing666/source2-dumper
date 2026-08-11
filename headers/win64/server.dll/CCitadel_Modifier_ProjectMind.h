#pragma once

class CCitadel_Modifier_ProjectMind : public CCitadelModifier /*0x0*/  // sizeof 0x288, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ParticleIndex_t m_particleStart; // offset 0xD0, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0xD4, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0xD8, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0xDC, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0xE8, size 0xC, align 4
    float32 m_flStartDelay; // offset 0xF4, size 0x4, align 4
    Vector m_vecApplyOffset; // offset 0xF8, size 0xC, align 4
    char _pad_0104[0x184]; // offset 0x104
};
