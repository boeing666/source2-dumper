#pragma once

class CCitadel_Ability_Tier2Boss_RocketBarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_LaunchAngle; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13A4[0x4]; // offset 0x13A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13A8, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1488, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_RocketFireSound; // offset 0x1498, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x14A8, size 0x10, align 8 | MPropertyStartGroup
};
