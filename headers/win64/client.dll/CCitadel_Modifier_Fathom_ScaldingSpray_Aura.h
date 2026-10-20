#pragma once

class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x468, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x190]; // offset 0x0
    QAngle m_playerAngles; // offset 0x190, size 0xC, align 4
    bool m_bHasAnyTargets; // offset 0x19C, size 0x1, align 1
    char _pad_019D[0x3]; // offset 0x19D
    GameTime_t m_flLastStackTime; // offset 0x1A0, size 0x4, align 255
    ParticleIndex_t m_ConeParticle; // offset 0x1A4, size 0x4, align 255
    char _pad_01A8[0x2C0]; // offset 0x1A8
};
