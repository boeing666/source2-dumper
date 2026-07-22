#pragma once

class CAbilityExplosiveBarrelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // offset 0x1AB8, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMirvExplodeSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_strRiccochetSound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strBarrelSoundLp; // offset 0x1BC8, size 0x10, align 8
    CSoundEventName m_strBarrelLaunchSound; // offset 0x1BD8, size 0x10, align 8
    CSoundEventName m_strBarrelMeleedSound; // offset 0x1BE8, size 0x10, align 8
    CSoundEventName m_strBarrelArmedSound; // offset 0x1BF8, size 0x10, align 8
};
