#pragma once

class CCitadel_Modifier_Bull_Heal_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x238, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    QAngle m_playerAngles; // offset 0x178, size 0xC, align 4
    ParticleIndex_t m_AuraParticle; // offset 0x184, size 0x4, align 255
    char _pad_0188[0xB0]; // offset 0x188
};
