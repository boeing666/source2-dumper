#pragma once

class CAbilityNikumanVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_NikumanModifier; // offset 0x1160, size 0x10, align 8 | MPropertyGroupName
};
