#pragma once

class CCitadel_Modifier_Werewolf_HuntAura_Werewolf : public CCitadelModifierAura_Cone /*0x0*/  // sizeof 0x198, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    QAngle m_playerAngles; // offset 0x108, size 0xC, align 4
    ParticleIndex_t m_ConeParticle; // offset 0x114, size 0x4, align 255
    char _pad_0118[0x80]; // offset 0x118
};
