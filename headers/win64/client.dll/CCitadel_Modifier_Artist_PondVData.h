#pragma once

class CCitadel_Modifier_Artist_PondVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x8C8, size 0xE0, align 8
    bool m_bShouldPulse; // offset 0x9A8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_09A9[0x7]; // offset 0x9A9
    CSoundEventName m_strPulseSound; // offset 0x9B0, size 0x10, align 8 | MPropertyStartGroup
};
