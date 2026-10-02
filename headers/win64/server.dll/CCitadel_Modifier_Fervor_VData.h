#pragma once

class CCitadel_Modifier_Fervor_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FervorParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BonusesModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
};
