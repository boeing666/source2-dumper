#pragma once

class CCitadel_Ability_Familiar_Spotlight : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CPointModifierThinker > m_hAuraThinker; // offset 0x14A8, size 0x4, align 4
    ParticleIndex_t m_nEyeGlowFX; // offset 0x14AC, size 0x4, align 255
    VectorWS m_vLastValidAuraPosition; // offset 0x14B0, size 0xC, align 4
    char _pad_14BC[0xB4]; // offset 0x14BC
    CHandle< CBaseEntity > m_hWasAttachedTo; // offset 0x1570, size 0x4, align 4
    VectorWS m_vAuraPosition; // offset 0x1574, size 0xC, align 4
};
