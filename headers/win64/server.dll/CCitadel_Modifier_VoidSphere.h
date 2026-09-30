#pragma once

class CCitadel_Modifier_VoidSphere : public CCitadelModifier /*0x0*/  // sizeof 0x648, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bTeleported; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    ParticleIndex_t m_particleStart; // offset 0x144, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x148, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x14C, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x150, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x15C, size 0xC, align 4
    VectorWS m_vecEndLocationCaster; // offset 0x168, size 0xC, align 4
    char _pad_0174[0x4D4]; // offset 0x174
};
