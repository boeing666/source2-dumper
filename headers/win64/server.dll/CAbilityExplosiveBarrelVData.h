#pragma once

class CAbilityExplosiveBarrelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1780, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // offset 0x1640, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBarrelSoundLp; // offset 0x1730, size 0x10, align 8
    CSoundEventName m_strBarrelLaunchSound; // offset 0x1740, size 0x10, align 8
    CSoundEventName m_strBarrelMeleedSound; // offset 0x1750, size 0x10, align 8
    CSoundEventName m_strBarrelArmedSound; // offset 0x1760, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // offset 0x1770, size 0x10, align 8 | MPropertyStartGroup
};
