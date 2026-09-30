#pragma once

class CCitadel_Ability_Familiar_Spotlight : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1578, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CPointModifierThinker > m_hAuraThinker; // offset 0x14A0, size 0x4, align 4
    ParticleIndex_t m_nEyeGlowFX; // offset 0x14A4, size 0x4, align 255
    VectorWS m_vLastValidAuraPosition; // offset 0x14A8, size 0xC, align 4
    char _pad_14B4[0xB4]; // offset 0x14B4
    CHandle< CBaseEntity > m_hWasAttachedTo; // offset 0x1568, size 0x4, align 4
    VectorWS m_vAuraPosition; // offset 0x156C, size 0xC, align 4
};
