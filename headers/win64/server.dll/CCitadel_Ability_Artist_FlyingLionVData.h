#pragma once

class CCitadel_Ability_Artist_FlyingLionVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x15A8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1698, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyBuffModifier; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strExplosionSound; // offset 0x16B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x16C8, size 0x10, align 8
    float32 m_flFlyAccelerationStrength; // offset 0x16D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinPitch; // offset 0x16DC, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x16E0, size 0x4, align 4
    float32 m_flMinGravityScale; // offset 0x16E4, size 0x4, align 4
    float32 m_flMaxGravityScale; // offset 0x16E8, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x16EC, size 0x4, align 4
    float32 m_flBounceMaintainRatio; // offset 0x16F0, size 0x4, align 4
    float32 m_flMinDistanceAboveGround; // offset 0x16F4, size 0x4, align 4
};
