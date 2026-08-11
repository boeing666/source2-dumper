#pragma once

class CCitadel_Ability_Familiar_Spotlight : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1018, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CPointModifierThinker > m_hAuraThinker; // offset 0xF70, size 0x4, align 4
    ParticleIndex_t m_nEyeGlowFX; // offset 0xF74, size 0x4, align 255
    VectorWS m_vLastValidAuraPosition; // offset 0xF78, size 0xC, align 4
    char _pad_0F84[0x84]; // offset 0xF84
    CHandle< CBaseEntity > m_hWasAttachedTo; // offset 0x1008, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vAuraPosition; // offset 0x100C, size 0xC, align 4 | MNetworkEnable
};
