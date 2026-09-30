#pragma once

class CCitadel_Modifier_BerserkerDamageStack : public CCitadelModifier /*0x0*/  // sizeof 0x210, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_nBuffParticle; // offset 0x140, size 0x4, align 255
    ParticleIndex_t m_nBuffParticleEnemy; // offset 0x144, size 0x4, align 255
    char _pad_0148[0xC8]; // offset 0x148
};
