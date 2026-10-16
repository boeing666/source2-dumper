#pragma once

class CCitadel_Ability_Artist_BouncingPotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1738, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1418, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1428, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1508, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FireworkExplodeParticle; // offset 0x15E8, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x16C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x16D8, size 0x10, align 8
    CSoundEventName m_FireworkExplosionSound; // offset 0x16E8, size 0x10, align 8
    bool m_bApplySlowOnBounce; // offset 0x16F8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bApplySlowOnExplosion; // offset 0x16F9, size 0x1, align 1
    bool m_bApplySilenceOnBounce; // offset 0x16FA, size 0x1, align 1
    bool m_bApplySilenceOnExplosion; // offset 0x16FB, size 0x1, align 1
    bool m_bAlwaysBounceDamage; // offset 0x16FC, size 0x1, align 1
    bool m_bTryToMakePond; // offset 0x16FD, size 0x1, align 1
    bool m_bDebugPond; // offset 0x16FE, size 0x1, align 1
    char _pad_16FF[0x1]; // offset 0x16FF
    float32 m_flPondDotThreshold; // offset 0x1700, size 0x4, align 4
    float32 m_flPondLengthThreshold; // offset 0x1704, size 0x4, align 4
    float32 m_flPondTangentSumThreshold; // offset 0x1708, size 0x4, align 4
    float32 m_flPondRadiusMultiplier; // offset 0x170C, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1710, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1714, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1718, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x171C, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1720, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x1724, size 0x4, align 4
    float32 m_flBounceForwardSpeed; // offset 0x1728, size 0x4, align 4
    float32 m_flBounceForwardRatio; // offset 0x172C, size 0x4, align 4
    float32 m_flLeftRightOffsetPerBounce; // offset 0x1730, size 0x4, align 4
    char _pad_1734[0x4]; // offset 0x1734
};
