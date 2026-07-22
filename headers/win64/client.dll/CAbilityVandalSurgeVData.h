#pragma once

class CAbilityVandalSurgeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1918, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetCastSound; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
};
