#pragma once

class CCitadel_Ability_WreckerScrapBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x10F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_BlastParticle; // offset 0xF70, size 0x4, align 255
    char _pad_0F74[0x184]; // offset 0xF74
};
