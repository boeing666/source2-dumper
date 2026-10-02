#pragma once

class CCitadel_Ability_Tier3Boss_RocketBarrageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_LaunchAngle; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13EC[0x4]; // offset 0x13EC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13F0, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_RocketFireSound; // offset 0x14E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x14F0, size 0x10, align 8 | MPropertyStartGroup
};
