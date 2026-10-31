#pragma once

class CCitadel_Ability_Familiar_HelpingHandsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x24C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AIPhysicsModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AIAggroModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvisWatcherModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestWaitingModifier; // offset 0x10C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestBarrierModifier; // offset 0x10D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestOwnerWatcherModifier; // offset 0x10E0, size 0x10, align 8
    CSoundEventName m_strHelperShootSound; // offset 0x10F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHelperSpawnSound; // offset 0x1100, size 0x10, align 8
    CSoundEventName m_strHelperEmoteSound; // offset 0x1110, size 0x10, align 8
    CSoundEventName m_strHelperFoundEnemySound; // offset 0x1120, size 0x10, align 8
    CSoundEventName m_strHelperHealTroopSound; // offset 0x1130, size 0x10, align 8
    CSoundEventName m_strHelperScaredSound; // offset 0x1140, size 0x10, align 8
    CSoundEventName m_strHelperBuffSound; // offset 0x1150, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmoteParticle; // offset 0x1160, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageAttachedParticle; // offset 0x1400, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastRegionIndicatorParticle; // offset 0x14E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraIndicatorParticle; // offset 0x15C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraInactiveParticle; // offset 0x16A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperCreateParticle; // offset 0x1780, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperDestroyParticle; // offset 0x1860, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperParticle; // offset 0x1940, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperSleepingParticle; // offset 0x1A20, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttackingParticle; // offset 0x1B00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperStunnedParticle; // offset 0x1BE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperChargingUpParticle; // offset 0x1CC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttachedParticle; // offset 0x1DA0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportOutParticle; // offset 0x1E80, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportInParticle; // offset 0x1F60, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTargetIndicateParticle; // offset 0x2040, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedParticle; // offset 0x2120, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedHeroParticle; // offset 0x2200, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScaredParticle; // offset 0x22E0, size 0xE0, align 8
    float32 m_flCollisionSize; // offset 0x23C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionHeight; // offset 0x23C4, size 0x4, align 4
    float32 m_flLaunchBiasUp; // offset 0x23C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaunchSpeedMult; // offset 0x23CC, size 0x4, align 4
    float32 m_flLaunchMaxSpeed; // offset 0x23D0, size 0x4, align 4
    float32 m_flHomingBias; // offset 0x23D4, size 0x4, align 4
    float32 m_flDamageCollisonScale; // offset 0x23D8, size 0x4, align 4
    char _pad_23DC[0x4]; // offset 0x23DC
    CPiecewiseCurve m_EmoteVelocityZByTime; // offset 0x23E0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_EmoteSpinByTime; // offset 0x2420, size 0x40, align 8
    float32 m_flNewlySpawnedWaitTime; // offset 0x2460, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHealInterval; // offset 0x2464, size 0x4, align 4
    float32 m_flSpawnLaunchUpBias; // offset 0x2468, size 0x4, align 4
    float32 m_flSpawnLaunchForce; // offset 0x246C, size 0x4, align 4
    float32 m_flMoveTolerance_Meters; // offset 0x2470, size 0x4, align 4
    float32 m_flMoveTolerance_UnitTarget_Meters; // offset 0x2474, size 0x4, align 4
    float32 m_flTolerance_FarFromPlayer_Meters; // offset 0x2478, size 0x4, align 4
    float32 m_flTolerance_CloseToPlayer_Meters; // offset 0x247C, size 0x4, align 4
    CPiecewiseCurve m_PatrolTravelTimeByDistance; // offset 0x2480, size 0x40, align 8
    float32 m_flInfestedNPCModelScale; // offset 0x24C0, size 0x4, align 4
    char _pad_24C4[0x4]; // offset 0x24C4
};
