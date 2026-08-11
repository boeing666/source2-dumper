#pragma once

class CCitadelModifier_Viscous_Goo_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x110, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    ParticleIndex_t m_AuraParticle; // offset 0x108, size 0x4, align 255
    char _pad_010C[0x4]; // offset 0x10C
};
