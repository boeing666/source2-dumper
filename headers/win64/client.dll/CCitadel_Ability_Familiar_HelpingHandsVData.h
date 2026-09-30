#pragma once

class CCitadel_Ability_Familiar_HelpingHandsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x27D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AIPhysicsModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AIAggroModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvisWatcherModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestWaitingModifier; // offset 0x13E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestBarrierModifier; // offset 0x13F0, size 0x10, align 8
    CSoundEventName m_strHelperShootSound; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHelperSpawnSound; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_strHelperEmoteSound; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_strHelperFoundEnemySound; // offset 0x1430, size 0x10, align 8
    CSoundEventName m_strHelperHealTroopSound; // offset 0x1440, size 0x10, align 8
    CSoundEventName m_strHelperScaredSound; // offset 0x1450, size 0x10, align 8
    CSoundEventName m_strHelperBuffSound; // offset 0x1460, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmoteParticle; // offset 0x1470, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x1550, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x1630, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageAttachedParticle; // offset 0x1710, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastRegionIndicatorParticle; // offset 0x17F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraIndicatorParticle; // offset 0x18D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraInactiveParticle; // offset 0x19B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperCreateParticle; // offset 0x1A90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperDestroyParticle; // offset 0x1B70, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperParticle; // offset 0x1C50, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperSleepingParticle; // offset 0x1D30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttackingParticle; // offset 0x1E10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperStunnedParticle; // offset 0x1EF0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperChargingUpParticle; // offset 0x1FD0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttachedParticle; // offset 0x20B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportOutParticle; // offset 0x2190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportInParticle; // offset 0x2270, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTargetIndicateParticle; // offset 0x2350, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedParticle; // offset 0x2430, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedHeroParticle; // offset 0x2510, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScaredParticle; // offset 0x25F0, size 0xE0, align 8
    float32 m_flCollisionSize; // offset 0x26D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionHeight; // offset 0x26D4, size 0x4, align 4
    float32 m_flLaunchBiasUp; // offset 0x26D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaunchSpeedMult; // offset 0x26DC, size 0x4, align 4
    float32 m_flLaunchMaxSpeed; // offset 0x26E0, size 0x4, align 4
    float32 m_flHomingBias; // offset 0x26E4, size 0x4, align 4
    float32 m_flDamageCollisonScale; // offset 0x26E8, size 0x4, align 4
    char _pad_26EC[0x4]; // offset 0x26EC
    CPiecewiseCurve m_EmoteVelocityZByTime; // offset 0x26F0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_EmoteSpinByTime; // offset 0x2730, size 0x40, align 8
    float32 m_flNewlySpawnedWaitTime; // offset 0x2770, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHealInterval; // offset 0x2774, size 0x4, align 4
    float32 m_flSpawnLaunchUpBias; // offset 0x2778, size 0x4, align 4
    float32 m_flSpawnLaunchForce; // offset 0x277C, size 0x4, align 4
    float32 m_flMoveTolerance_Meters; // offset 0x2780, size 0x4, align 4
    float32 m_flMoveTolerance_UnitTarget_Meters; // offset 0x2784, size 0x4, align 4
    float32 m_flTolerance_FarFromPlayer_Meters; // offset 0x2788, size 0x4, align 4
    float32 m_flTolerance_CloseToPlayer_Meters; // offset 0x278C, size 0x4, align 4
    CPiecewiseCurve m_PatrolTravelTimeByDistance; // offset 0x2790, size 0x40, align 8
    float32 m_flInfestedNPCModelScale; // offset 0x27D0, size 0x4, align 4
    char _pad_27D4[0x4]; // offset 0x27D4
};
