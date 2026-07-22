#pragma once

class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x328, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x110]; // offset 0x0
    QAngle m_playerAngles; // offset 0x110, size 0xC, align 4
    bool m_bHasAnyTargets; // offset 0x11C, size 0x1, align 1
    char _pad_011D[0x3]; // offset 0x11D
    GameTime_t m_flLastStackTime; // offset 0x120, size 0x4, align 255
    ParticleIndex_t m_ConeParticle; // offset 0x124, size 0x4, align 255
    char _pad_0128[0x200]; // offset 0x128
};
