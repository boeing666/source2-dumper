#pragma once

class CCitadel_Modifier_VoidSphere : public CCitadelModifier /*0x0*/  // sizeof 0x488, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bTeleported; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    ParticleIndex_t m_particleStart; // offset 0xD4, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0xD8, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0xDC, size 0x4, align 255
    Vector m_vecEndLocation; // offset 0xE0, size 0xC, align 4
    Vector m_vecStartPosition; // offset 0xEC, size 0xC, align 4
    Vector m_vecEndLocationCaster; // offset 0xF8, size 0xC, align 4
    char _pad_0104[0x384]; // offset 0x104
};
