#pragma once

class CAbilityWreckerUltimateVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x18F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
};
