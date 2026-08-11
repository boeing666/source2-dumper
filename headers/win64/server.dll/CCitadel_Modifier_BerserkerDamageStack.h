#pragma once

class CCitadel_Modifier_BerserkerDamageStack : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ParticleIndex_t m_nBuffParticle; // offset 0xD0, size 0x4, align 255
    ParticleIndex_t m_nBuffParticleEnemy; // offset 0xD4, size 0x4, align 255
    char _pad_00D8[0x98]; // offset 0xD8
};
