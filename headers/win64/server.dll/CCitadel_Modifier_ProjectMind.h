#pragma once

class CCitadel_Modifier_ProjectMind : public CCitadelModifier /*0x0*/  // sizeof 0x388, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_particleStart; // offset 0x140, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x144, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x148, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x14C, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x158, size 0xC, align 4
    float32 m_flStartDelay; // offset 0x164, size 0x4, align 4
    Vector m_vecApplyOffset; // offset 0x168, size 0xC, align 4
    char _pad_0174[0x214]; // offset 0x174
};
