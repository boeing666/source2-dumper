#pragma once

class CCitadel_Modifier_ProjectMind : public CCitadelModifier /*0x0*/  // sizeof 0x278, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    ParticleIndex_t m_particleStart; // offset 0xC0, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0xC4, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0xC8, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0xCC, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0xD8, size 0xC, align 4
    float32 m_flStartDelay; // offset 0xE4, size 0x4, align 4
    Vector m_vecApplyOffset; // offset 0xE8, size 0xC, align 4
    char _pad_00F4[0x184]; // offset 0xF4
};
