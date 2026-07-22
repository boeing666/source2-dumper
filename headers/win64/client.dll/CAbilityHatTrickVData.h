#pragma once

class CAbilityHatTrickVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AD8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HatTrickChannelParticle; // offset 0x19D8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1AC8, size 0x10, align 8 | MPropertyGroupName
};
