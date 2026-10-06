#pragma once

class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x460, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    QAngle m_playerAngles; // offset 0x188, size 0xC, align 4
    bool m_bHasAnyTargets; // offset 0x194, size 0x1, align 1
    char _pad_0195[0x3]; // offset 0x195
    GameTime_t m_flLastStackTime; // offset 0x198, size 0x4, align 255
    ParticleIndex_t m_ConeParticle; // offset 0x19C, size 0x4, align 255
    char _pad_01A0[0x2C0]; // offset 0x1A0
};
