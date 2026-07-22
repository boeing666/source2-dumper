#pragma once

class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x26D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    float32 m_flAllyPitTimeMin; // offset 0x1348, size 0x4, align 4
    int32 m_nPhase2Health; // offset 0x134C, size 0x4, align 4
    float32 m_flEyeZOffset; // offset 0x1350, size 0x4, align 4
    float32 m_flDefaultMoveSpeed; // offset 0x1354, size 0x4, align 4
    float32 m_flEnemyTrooperProtectionRange; // offset 0x1358, size 0x4, align 4
    Vector m_vPhase1ObserverOrigin; // offset 0x135C, size 0xC, align 4
    Vector m_vPhase2ObserverOrigin; // offset 0x1368, size 0xC, align 4
    float32 m_flPhase1ObserverPitch; // offset 0x1374, size 0x4, align 4
    float32 m_flPhase2ObserverPitch; // offset 0x1378, size 0x4, align 4
    float32 m_flPhase2MaxAnimSpinRate; // offset 0x137C, size 0x4, align 4
    float32 m_flPhase2AttackBias; // offset 0x1380, size 0x4, align 4
    float32 m_flRotateSpeed; // offset 0x1384, size 0x4, align 4
    float32 m_flPhase2SightRange; // offset 0x1388, size 0x4, align 4
    float32 m_flCoreRadius; // offset 0x138C, size 0x4, align 4
    float32 m_flCoreDeathTime; // offset 0x1390, size 0x4, align 4
    float32 m_flTransitionLightTime01; // offset 0x1394, size 0x4, align 4
    float32 m_flTransitionLightTime02; // offset 0x1398, size 0x4, align 4
    float32 m_flTransitionLightTime03; // offset 0x139C, size 0x4, align 4
    float32 m_flTransitionLightTime04; // offset 0x13A0, size 0x4, align 4
    float32 m_flShrineAttackHealthLossPerAttack; // offset 0x13A4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShrineAttackMinTimeBetweenAttacks; // offset 0x13A8, size 0x4, align 4
    char _pad_13AC[0x4]; // offset 0x13AC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffigyExplosionParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberTransformUpExplosionParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberBeginDyingParticle; // offset 0x1570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberDeathLargeExplosionParticle; // offset 0x1650, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberHitResponseParticle; // offset 0x1730, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberPhase2AmbientParticle; // offset 0x1810, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffigyExplosionParticle; // offset 0x18F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphTransformUpExplosionParticle; // offset 0x19D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphBeginDyingParticle; // offset 0x1AB0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphDeathLargeExplosionParticle; // offset 0x1B90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphHitResponseParticle; // offset 0x1C70, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphPhase2AmbientParticle; // offset 0x1D50, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PatronTransformDownEyeParticle; // offset 0x1E30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0x1F10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTeamAmberModel; // offset 0x1FF0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_AmberEffigyModel; // offset 0x20D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SapphEffigyModel; // offset 0x21B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_AmberCoreModel; // offset 0x2290, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SapphCoreModel; // offset 0x2370, size 0xE0, align 8
    float32 m_flCoreVerticalOffset; // offset 0x2450, size 0x4, align 4
    char _pad_2454[0x4]; // offset 0x2454
    CSoundEventName m_PatronTransformStartSound; // offset 0x2458, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PatronKilledSound; // offset 0x2468, size 0x10, align 8
    CSoundEventName m_EffigySapphireExplodeSound; // offset 0x2478, size 0x10, align 8
    CSoundEventName m_EffigyAmberExplodeSound; // offset 0x2488, size 0x10, align 8
    CSoundEventName m_AmberReformSound; // offset 0x2498, size 0x10, align 8
    CSoundEventName m_SapphireReformSound; // offset 0x24A8, size 0x10, align 8
    CSoundEventName m_AmberReformingLoopSound; // offset 0x24B8, size 0x10, align 8
    CSoundEventName m_SapphireReformingLoopSound; // offset 0x24C8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // offset 0x24D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // offset 0x24E8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // offset 0x24F8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // offset 0x2508, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_EffigyModifier; // offset 0x2518, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_Phase2DamagePulseModifier; // offset 0x2528, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // offset 0x2538, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_RangedArmorModifier; // offset 0x2548, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // offset 0x2558, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase1; // offset 0x2568, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase2; // offset 0x2578, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DefenderInPitInvulnerable; // offset 0x2588, size 0x10, align 8
    float32 m_flLaserMoveSpeed; // offset 0x2598, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaserCooldownPhase1; // offset 0x259C, size 0x4, align 4
    float32 m_flLaserCooldownPhase2; // offset 0x25A0, size 0x4, align 4
    float32 m_flLaserDurationPhase1; // offset 0x25A4, size 0x4, align 4
    float32 m_flLaserDurationPhase2; // offset 0x25A8, size 0x4, align 4
    float32 m_flPhase1DyingBegin; // offset 0x25AC, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPhase1DyingDrop; // offset 0x25B0, size 0x4, align 4
    float32 m_flPhase2DyingDropScale; // offset 0x25B4, size 0x4, align 4
    float32 m_flPhase1DyingWait; // offset 0x25B8, size 0x4, align 4
    float32 m_flPhase1DyingTransformUp; // offset 0x25BC, size 0x4, align 4
    float32 m_flPhase1BossScale; // offset 0x25C0, size 0x4, align 4
    float32 m_flPhase2BossScale; // offset 0x25C4, size 0x4, align 4
    float32 m_flPostShrineTransition; // offset 0x25C8, size 0x4, align 4
    char _pad_25CC[0x4]; // offset 0x25CC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmAttackGroundHit; // offset 0x25D0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flArmAttackHealthMin; // offset 0x26B0, size 0x4, align 4
    float32 m_flArmAttackHealthMax; // offset 0x26B4, size 0x4, align 4
    float32 m_flArmAttackCooldownMin; // offset 0x26B8, size 0x4, align 4
    float32 m_flArmAttackCooldownMax; // offset 0x26BC, size 0x4, align 4
    float32 m_flArmAttackTimeToHit; // offset 0x26C0, size 0x4, align 4
    float32 m_flArmAttackRadius; // offset 0x26C4, size 0x4, align 4
    float32 m_flArmAttackPosDotThres; // offset 0x26C8, size 0x4, align 4
    float32 m_flArmAttackDamage; // offset 0x26CC, size 0x4, align 4
    float32 m_flArmAttackKnockbackStrength; // offset 0x26D0, size 0x4, align 4
    float32 m_flArmAttackInvulCooldownScale; // offset 0x26D4, size 0x4, align 4
};
