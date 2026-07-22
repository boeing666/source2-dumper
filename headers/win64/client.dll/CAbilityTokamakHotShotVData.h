#pragma once

class CAbilityTokamakHotShotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // offset 0x1818, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strLaserStartSound; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserEndSound; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1848, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0x1858, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1948, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1A28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1B08, size 0xE0, align 8
};
