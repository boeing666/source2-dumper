#pragma once

class CCitadel_Modifier_VoidSphere : public CCitadelModifier /*0x0*/  // sizeof 0x478, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bTeleported; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    ParticleIndex_t m_particleStart; // offset 0xC4, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0xC8, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0xCC, size 0x4, align 255
    Vector m_vecEndLocation; // offset 0xD0, size 0xC, align 4
    Vector m_vecStartPosition; // offset 0xDC, size 0xC, align 4
    Vector m_vecEndLocationCaster; // offset 0xE8, size 0xC, align 4
    char _pad_00F4[0x384]; // offset 0xF4
};
