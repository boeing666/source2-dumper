#pragma once

class CCitadel_Modifier_Low_Health_GlowVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlowParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    bool m_bShowAsLowHealth; // offset 0x878, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0879[0x7]; // offset 0x879
};
