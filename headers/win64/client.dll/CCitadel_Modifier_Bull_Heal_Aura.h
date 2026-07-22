#pragma once

class CCitadel_Modifier_Bull_Heal_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x1A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x110]; // offset 0x0
    QAngle m_playerAngles; // offset 0x110, size 0xC, align 4
    ParticleIndex_t m_AuraParticle; // offset 0x11C, size 0x4, align 255
    char _pad_0120[0x80]; // offset 0x120
};
