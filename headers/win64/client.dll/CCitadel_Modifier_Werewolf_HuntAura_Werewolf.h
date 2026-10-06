#pragma once

class CCitadel_Modifier_Werewolf_HuntAura_Werewolf : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x248, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    QAngle m_playerAngles; // offset 0x188, size 0xC, align 4
    ParticleIndex_t m_ConeParticle; // offset 0x194, size 0x4, align 255
    char _pad_0198[0xB0]; // offset 0x198
};
