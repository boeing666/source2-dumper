#pragma once

class CCitadel_Modifier_VoidSphere : public CCitadelModifier /*0x0*/  // sizeof 0x640, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bTeleported; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    ParticleIndex_t m_particleStart; // offset 0x13C, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x140, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x144, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x148, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x154, size 0xC, align 4
    VectorWS m_vecEndLocationCaster; // offset 0x160, size 0xC, align 4
    char _pad_016C[0x4D4]; // offset 0x16C
};
