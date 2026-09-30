#pragma once

class CCitadel_Modifier_MageWalk : public CCitadelModifier /*0x0*/  // sizeof 0x588, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bIsFakeout; // offset 0x130, size 0x1, align 1
    bool m_bTeleported; // offset 0x131, size 0x1, align 1
    char _pad_0132[0x2]; // offset 0x132
    ParticleIndex_t m_particleStart; // offset 0x134, size 0x4, align 255
    ParticleIndex_t m_particleEnd; // offset 0x138, size 0x4, align 255
    ParticleIndex_t m_particleTrail; // offset 0x13C, size 0x4, align 255
    VectorWS m_vecEndLocation; // offset 0x140, size 0xC, align 4
    VectorWS m_vecStartPosition; // offset 0x14C, size 0xC, align 4
    VectorWS m_vecEndLocationCaster; // offset 0x158, size 0xC, align 4
    char _pad_0164[0x424]; // offset 0x164
};
