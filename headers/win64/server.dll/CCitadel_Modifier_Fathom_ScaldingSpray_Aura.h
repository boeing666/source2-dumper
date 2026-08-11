#pragma once

class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x320, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    QAngle m_playerAngles; // offset 0x108, size 0xC, align 4
    bool m_bHasAnyTargets; // offset 0x114, size 0x1, align 1
    char _pad_0115[0x3]; // offset 0x115
    GameTime_t m_flLastStackTime; // offset 0x118, size 0x4, align 255
    ParticleIndex_t m_ConeParticle; // offset 0x11C, size 0x4, align 255
    char _pad_0120[0x200]; // offset 0x120
};
