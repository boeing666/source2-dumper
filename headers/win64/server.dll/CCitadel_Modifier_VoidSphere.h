#pragma once

class CCitadel_Modifier_VoidSphere : public CCitadelModifier /*0x0*/  // sizeof 0x650, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bTeleported; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    ParticleIndex_t m_particleStart; // offset 0x14C, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x154, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x158, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x164, size 0xC, align 4
    VectorWS m_vecEndLocationCaster; // offset 0x170, size 0xC, align 4
    char _pad_017C[0x4D4]; // offset 0x17C
};
