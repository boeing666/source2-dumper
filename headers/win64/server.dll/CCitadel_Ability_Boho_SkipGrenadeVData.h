#pragma once

class CCitadel_Ability_Boho_SkipGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x14A0, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1590, size 0x10, align 8
    float32 m_flClimbHeight; // offset 0x15A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStepDownHeight; // offset 0x15A4, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x15A8, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x15AC, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x15B0, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x15B4, size 0x4, align 4
    float32 m_flBounceForwardSpeed; // offset 0x15B8, size 0x4, align 4
    float32 m_flBounceForwardRatio; // offset 0x15BC, size 0x4, align 4
};
