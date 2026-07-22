#pragma once

class CCitadel_Ability_Familiar_HelpingHandsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x2C50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AIPhysicsModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AIAggroModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvisWatcherModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestWaitingModifier; // offset 0x1858, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestBarrierModifier; // offset 0x1868, size 0x10, align 8
    CSoundEventName m_strHelperShootSound; // offset 0x1878, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHelperSpawnSound; // offset 0x1888, size 0x10, align 8
    CSoundEventName m_strHelperEmoteSound; // offset 0x1898, size 0x10, align 8
    CSoundEventName m_strHelperFoundEnemySound; // offset 0x18A8, size 0x10, align 8
    CSoundEventName m_strHelperHealTroopSound; // offset 0x18B8, size 0x10, align 8
    CSoundEventName m_strHelperScaredSound; // offset 0x18C8, size 0x10, align 8
    CSoundEventName m_strHelperBuffSound; // offset 0x18D8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmoteParticle; // offset 0x18E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x19C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x1AA8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageAttachedParticle; // offset 0x1B88, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastRegionIndicatorParticle; // offset 0x1C68, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraIndicatorParticle; // offset 0x1D48, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraInactiveParticle; // offset 0x1E28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperCreateParticle; // offset 0x1F08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperDestroyParticle; // offset 0x1FE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperParticle; // offset 0x20C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperSleepingParticle; // offset 0x21A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttackingParticle; // offset 0x2288, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperStunnedParticle; // offset 0x2368, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperChargingUpParticle; // offset 0x2448, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttachedParticle; // offset 0x2528, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportOutParticle; // offset 0x2608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportInParticle; // offset 0x26E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTargetIndicateParticle; // offset 0x27C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedParticle; // offset 0x28A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedHeroParticle; // offset 0x2988, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScaredParticle; // offset 0x2A68, size 0xE0, align 8
    float32 m_flCollisionSize; // offset 0x2B48, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionHeight; // offset 0x2B4C, size 0x4, align 4
    float32 m_flLaunchBiasUp; // offset 0x2B50, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaunchSpeedMult; // offset 0x2B54, size 0x4, align 4
    float32 m_flLaunchMaxSpeed; // offset 0x2B58, size 0x4, align 4
    float32 m_flHomingBias; // offset 0x2B5C, size 0x4, align 4
    float32 m_flDamageCollisonScale; // offset 0x2B60, size 0x4, align 4
    char _pad_2B64[0x4]; // offset 0x2B64
    CPiecewiseCurve m_EmoteVelocityZByTime; // offset 0x2B68, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_EmoteSpinByTime; // offset 0x2BA8, size 0x40, align 8
    float32 m_flNewlySpawnedWaitTime; // offset 0x2BE8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHealInterval; // offset 0x2BEC, size 0x4, align 4
    float32 m_flSpawnLaunchUpBias; // offset 0x2BF0, size 0x4, align 4
    float32 m_flSpawnLaunchForce; // offset 0x2BF4, size 0x4, align 4
    float32 m_flMoveTolerance_Meters; // offset 0x2BF8, size 0x4, align 4
    float32 m_flMoveTolerance_UnitTarget_Meters; // offset 0x2BFC, size 0x4, align 4
    float32 m_flTolerance_FarFromPlayer_Meters; // offset 0x2C00, size 0x4, align 4
    float32 m_flTolerance_CloseToPlayer_Meters; // offset 0x2C04, size 0x4, align 4
    CPiecewiseCurve m_PatrolTravelTimeByDistance; // offset 0x2C08, size 0x40, align 8
    float32 m_flInfestedNPCModelScale; // offset 0x2C48, size 0x4, align 4
    char _pad_2C4C[0x4]; // offset 0x2C4C
};
