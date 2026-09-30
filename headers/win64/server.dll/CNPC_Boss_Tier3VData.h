#pragma once

class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1FD8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    float32 m_flAllyPitTimeMin; // offset 0xC50, size 0x4, align 4
    int32 m_nPhase2Health; // offset 0xC54, size 0x4, align 4
    float32 m_flEyeZOffset; // offset 0xC58, size 0x4, align 4
    float32 m_flEnemyTrooperProtectionRange; // offset 0xC5C, size 0x4, align 4
    Vector m_vPhase1ObserverOrigin; // offset 0xC60, size 0xC, align 4
    Vector m_vPhase2ObserverOrigin; // offset 0xC6C, size 0xC, align 4
    float32 m_flPhase1ObserverPitch; // offset 0xC78, size 0x4, align 4
    float32 m_flPhase2ObserverPitch; // offset 0xC7C, size 0x4, align 4
    float32 m_flPhase2MaxAnimSpinRate; // offset 0xC80, size 0x4, align 4
    float32 m_flPhase2AttackBias; // offset 0xC84, size 0x4, align 4
    float32 m_flRotateSpeed; // offset 0xC88, size 0x4, align 4
    float32 m_flPhase2SightRange; // offset 0xC8C, size 0x4, align 4
    float32 m_flCoreRadius; // offset 0xC90, size 0x4, align 4
    float32 m_flCoreDeathTime; // offset 0xC94, size 0x4, align 4
    float32 m_flTransitionLightTime01; // offset 0xC98, size 0x4, align 4
    float32 m_flTransitionLightTime02; // offset 0xC9C, size 0x4, align 4
    float32 m_flTransitionLightTime03; // offset 0xCA0, size 0x4, align 4
    float32 m_flTransitionLightTime04; // offset 0xCA4, size 0x4, align 4
    float32 m_flShrineAttackHealthLossPerAttack; // offset 0xCA8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShrineAttackMinTimeBetweenAttacks; // offset 0xCAC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffigyExplosionParticle; // offset 0xCB0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberTransformUpExplosionParticle; // offset 0xD90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberBeginDyingParticle; // offset 0xE70, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberDeathLargeExplosionParticle; // offset 0xF50, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberHitResponseParticle; // offset 0x1030, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberPhase2AmbientParticle; // offset 0x1110, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffigyExplosionParticle; // offset 0x11F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphTransformUpExplosionParticle; // offset 0x12D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphBeginDyingParticle; // offset 0x13B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphDeathLargeExplosionParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphHitResponseParticle; // offset 0x1570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphPhase2AmbientParticle; // offset 0x1650, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PatronTransformDownEyeParticle; // offset 0x1730, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0x1810, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTeamAmberModel; // offset 0x18F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_AmberEffigyModel; // offset 0x19D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SapphEffigyModel; // offset 0x1AB0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_AmberCoreModel; // offset 0x1B90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_SapphCoreModel; // offset 0x1C70, size 0xE0, align 8
    float32 m_flCoreVerticalOffset; // offset 0x1D50, size 0x4, align 4
    char _pad_1D54[0x4]; // offset 0x1D54
    CSoundEventName m_PatronTransformStartSound; // offset 0x1D58, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PatronKilledSound; // offset 0x1D68, size 0x10, align 8
    CSoundEventName m_EffigySapphireExplodeSound; // offset 0x1D78, size 0x10, align 8
    CSoundEventName m_EffigyAmberExplodeSound; // offset 0x1D88, size 0x10, align 8
    CSoundEventName m_AmberReformSound; // offset 0x1D98, size 0x10, align 8
    CSoundEventName m_SapphireReformSound; // offset 0x1DA8, size 0x10, align 8
    CSoundEventName m_AmberReformingLoopSound; // offset 0x1DB8, size 0x10, align 8
    CSoundEventName m_SapphireReformingLoopSound; // offset 0x1DC8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // offset 0x1DD8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // offset 0x1DE8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // offset 0x1DF8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // offset 0x1E08, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_EffigyModifier; // offset 0x1E18, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_Phase2DamagePulseModifier; // offset 0x1E28, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // offset 0x1E38, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_RangedArmorModifier; // offset 0x1E48, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // offset 0x1E58, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase1; // offset 0x1E68, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase2; // offset 0x1E78, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DefenderInPitInvulnerable; // offset 0x1E88, size 0x10, align 8
    float32 m_flLaserMoveSpeed; // offset 0x1E98, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaserCooldownPhase1; // offset 0x1E9C, size 0x4, align 4
    float32 m_flLaserCooldownPhase2; // offset 0x1EA0, size 0x4, align 4
    float32 m_flLaserDurationPhase1; // offset 0x1EA4, size 0x4, align 4
    float32 m_flLaserDurationPhase2; // offset 0x1EA8, size 0x4, align 4
    float32 m_flPhase1DyingBegin; // offset 0x1EAC, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPhase1DyingDrop; // offset 0x1EB0, size 0x4, align 4
    float32 m_flPhase2DyingDropScale; // offset 0x1EB4, size 0x4, align 4
    float32 m_flPhase1DyingWait; // offset 0x1EB8, size 0x4, align 4
    float32 m_flPhase1DyingTransformUp; // offset 0x1EBC, size 0x4, align 4
    float32 m_flPhase1BossScale; // offset 0x1EC0, size 0x4, align 4
    float32 m_flPhase2BossScale; // offset 0x1EC4, size 0x4, align 4
    float32 m_flPostShrineTransition; // offset 0x1EC8, size 0x4, align 4
    char _pad_1ECC[0x4]; // offset 0x1ECC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmAttackGroundHit; // offset 0x1ED0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flArmAttackHealthMin; // offset 0x1FB0, size 0x4, align 4
    float32 m_flArmAttackHealthMax; // offset 0x1FB4, size 0x4, align 4
    float32 m_flArmAttackCooldownMin; // offset 0x1FB8, size 0x4, align 4
    float32 m_flArmAttackCooldownMax; // offset 0x1FBC, size 0x4, align 4
    float32 m_flArmAttackTimeToHit; // offset 0x1FC0, size 0x4, align 4
    float32 m_flArmAttackRadius; // offset 0x1FC4, size 0x4, align 4
    float32 m_flArmAttackPosDotThres; // offset 0x1FC8, size 0x4, align 4
    float32 m_flArmAttackDamage; // offset 0x1FCC, size 0x4, align 4
    float32 m_flArmAttackKnockbackStrength; // offset 0x1FD0, size 0x4, align 4
    float32 m_flArmAttackInvulCooldownScale; // offset 0x1FD4, size 0x4, align 4
};
