#pragma once

class CAbilityExplosiveBarrelVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1450, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelArmedParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelReadyToExplodeParticle; // offset 0x1310, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBarrelSoundLp; // offset 0x1400, size 0x10, align 8
    CSoundEventName m_strBarrelLaunchSound; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_strBarrelMeleedSound; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_strBarrelArmedSound; // offset 0x1430, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
};
