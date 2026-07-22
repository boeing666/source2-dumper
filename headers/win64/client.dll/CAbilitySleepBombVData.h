#pragma once

class CAbilitySleepBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1908, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
};
