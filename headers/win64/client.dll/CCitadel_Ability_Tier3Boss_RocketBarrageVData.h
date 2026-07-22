#pragma once

class CCitadel_Ability_Tier3Boss_RocketBarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_LaunchAngle; // offset 0x1818, size 0x4, align 4 | MPropertyStartGroup
    char _pad_181C[0x4]; // offset 0x181C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1820, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1900, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_RocketFireSound; // offset 0x1910, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1920, size 0x10, align 8 | MPropertyStartGroup
};
