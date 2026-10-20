#pragma once

class CCitadel_Modifier_MageWalk : public CCitadelModifier /*0x0*/  // sizeof 0x5A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bIsFakeout; // offset 0x150, size 0x1, align 1
    bool m_bTeleported; // offset 0x151, size 0x1, align 1
    char _pad_0152[0x2]; // offset 0x152
    ParticleIndex_t m_particleStart; // offset 0x154, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x158, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x15C, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x160, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x16C, size 0xC, align 4
    VectorWS m_vecEndLocationCaster; // offset 0x178, size 0xC, align 4
    char _pad_0184[0x424]; // offset 0x184
};
