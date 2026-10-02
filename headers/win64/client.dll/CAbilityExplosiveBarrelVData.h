#pragma once

class CAbilityExplosiveBarrelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // offset 0x1688, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1768, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBarrelSoundLp; // offset 0x1778, size 0x10, align 8
    CSoundEventName m_strBarrelLaunchSound; // offset 0x1788, size 0x10, align 8
    CSoundEventName m_strBarrelMeleedSound; // offset 0x1798, size 0x10, align 8
    CSoundEventName m_strBarrelArmedSound; // offset 0x17A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // offset 0x17B8, size 0x10, align 8 | MPropertyStartGroup
};
