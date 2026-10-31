#pragma once

class CCitadel_Ability_Boho_SkipGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1180, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1270, size 0x10, align 8
    float32 m_flClimbHeight; // offset 0x1280, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStepDownHeight; // offset 0x1284, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1288, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x128C, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1290, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x1294, size 0x4, align 4
    float32 m_flBounceForwardSpeed; // offset 0x1298, size 0x4, align 4
    float32 m_flBounceForwardRatio; // offset 0x129C, size 0x4, align 4
};
