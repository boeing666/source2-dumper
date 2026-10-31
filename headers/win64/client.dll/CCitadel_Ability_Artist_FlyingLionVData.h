#pragma once

class CCitadel_Ability_Artist_FlyingLionVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1240, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1330, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyBuffModifier; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strExplosionSound; // offset 0x1350, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBounceSound; // offset 0x1360, size 0x10, align 8
    float32 m_flFlyAccelerationStrength; // offset 0x1370, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinPitch; // offset 0x1374, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1378, size 0x4, align 4
    float32 m_flMinGravityScale; // offset 0x137C, size 0x4, align 4
    float32 m_flMaxGravityScale; // offset 0x1380, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x1384, size 0x4, align 4
    float32 m_flBounceMaintainRatio; // offset 0x1388, size 0x4, align 4
    float32 m_flMinDistanceAboveGround; // offset 0x138C, size 0x4, align 4
};
