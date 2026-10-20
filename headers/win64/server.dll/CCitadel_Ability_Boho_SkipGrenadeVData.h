#pragma once

class CCitadel_Ability_Boho_SkipGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1080, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1170, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1260, size 0x10, align 8
    float32 m_flClimbHeight; // offset 0x1270, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStepDownHeight; // offset 0x1274, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1278, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x127C, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1280, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x1284, size 0x4, align 4
    float32 m_flBounceForwardSpeed; // offset 0x1288, size 0x4, align 4
    float32 m_flBounceForwardRatio; // offset 0x128C, size 0x4, align 4
};
