#pragma once

class CCitadel_Ability_Artist_BouncingPotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FireworkExplodeParticle; // offset 0x1270, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1350, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1360, size 0x10, align 8
    CSoundEventName m_FireworkExplosionSound; // offset 0x1370, size 0x10, align 8
    bool m_bApplySlowOnBounce; // offset 0x1380, size 0x1, align 1 | MPropertyStartGroup
    bool m_bApplySlowOnExplosion; // offset 0x1381, size 0x1, align 1
    bool m_bApplySilenceOnBounce; // offset 0x1382, size 0x1, align 1
    bool m_bApplySilenceOnExplosion; // offset 0x1383, size 0x1, align 1
    bool m_bAlwaysBounceDamage; // offset 0x1384, size 0x1, align 1
    bool m_bTryToMakePond; // offset 0x1385, size 0x1, align 1
    bool m_bDebugPond; // offset 0x1386, size 0x1, align 1
    char _pad_1387[0x1]; // offset 0x1387
    float32 m_flPondDotThreshold; // offset 0x1388, size 0x4, align 4
    float32 m_flPondLengthThreshold; // offset 0x138C, size 0x4, align 4
    float32 m_flPondTangentSumThreshold; // offset 0x1390, size 0x4, align 4
    float32 m_flPondRadiusMultiplier; // offset 0x1394, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1398, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x139C, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x13A0, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x13A4, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x13A8, size 0x4, align 4
    float32 m_flBounceUpSpeed; // offset 0x13AC, size 0x4, align 4
    float32 m_flBounceForwardSpeed; // offset 0x13B0, size 0x4, align 4
    float32 m_flBounceForwardRatio; // offset 0x13B4, size 0x4, align 4
    float32 m_flLeftRightOffsetPerBounce; // offset 0x13B8, size 0x4, align 4
    char _pad_13BC[0x4]; // offset 0x13BC
};
