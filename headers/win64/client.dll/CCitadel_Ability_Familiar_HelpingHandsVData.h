#pragma once

class CCitadel_Ability_Familiar_HelpingHandsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x2820, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AIPhysicsModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AIAggroModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvisWatcherModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestWaitingModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InfestBarrierModifier; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_strHelperShootSound; // offset 0x1448, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHelperSpawnSound; // offset 0x1458, size 0x10, align 8
    CSoundEventName m_strHelperEmoteSound; // offset 0x1468, size 0x10, align 8
    CSoundEventName m_strHelperFoundEnemySound; // offset 0x1478, size 0x10, align 8
    CSoundEventName m_strHelperHealTroopSound; // offset 0x1488, size 0x10, align 8
    CSoundEventName m_strHelperScaredSound; // offset 0x1498, size 0x10, align 8
    CSoundEventName m_strHelperBuffSound; // offset 0x14A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmoteParticle; // offset 0x14B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x1598, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x1678, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageAttachedParticle; // offset 0x1758, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastRegionIndicatorParticle; // offset 0x1838, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraIndicatorParticle; // offset 0x1918, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraInactiveParticle; // offset 0x19F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperCreateParticle; // offset 0x1AD8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperDestroyParticle; // offset 0x1BB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperParticle; // offset 0x1C98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperSleepingParticle; // offset 0x1D78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttackingParticle; // offset 0x1E58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperStunnedParticle; // offset 0x1F38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperChargingUpParticle; // offset 0x2018, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperAttachedParticle; // offset 0x20F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportOutParticle; // offset 0x21D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTeleportInParticle; // offset 0x22B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HelperTargetIndicateParticle; // offset 0x2398, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedParticle; // offset 0x2478, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InfestedHeroParticle; // offset 0x2558, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScaredParticle; // offset 0x2638, size 0xE0, align 8
    float32 m_flCollisionSize; // offset 0x2718, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionHeight; // offset 0x271C, size 0x4, align 4
    float32 m_flLaunchBiasUp; // offset 0x2720, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaunchSpeedMult; // offset 0x2724, size 0x4, align 4
    float32 m_flLaunchMaxSpeed; // offset 0x2728, size 0x4, align 4
    float32 m_flHomingBias; // offset 0x272C, size 0x4, align 4
    float32 m_flDamageCollisonScale; // offset 0x2730, size 0x4, align 4
    char _pad_2734[0x4]; // offset 0x2734
    CPiecewiseCurve m_EmoteVelocityZByTime; // offset 0x2738, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_EmoteSpinByTime; // offset 0x2778, size 0x40, align 8
    float32 m_flNewlySpawnedWaitTime; // offset 0x27B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHealInterval; // offset 0x27BC, size 0x4, align 4
    float32 m_flSpawnLaunchUpBias; // offset 0x27C0, size 0x4, align 4
    float32 m_flSpawnLaunchForce; // offset 0x27C4, size 0x4, align 4
    float32 m_flMoveTolerance_Meters; // offset 0x27C8, size 0x4, align 4
    float32 m_flMoveTolerance_UnitTarget_Meters; // offset 0x27CC, size 0x4, align 4
    float32 m_flTolerance_FarFromPlayer_Meters; // offset 0x27D0, size 0x4, align 4
    float32 m_flTolerance_CloseToPlayer_Meters; // offset 0x27D4, size 0x4, align 4
    CPiecewiseCurve m_PatrolTravelTimeByDistance; // offset 0x27D8, size 0x40, align 8
    float32 m_flInfestedNPCModelScale; // offset 0x2818, size 0x4, align 4
    char _pad_281C[0x4]; // offset 0x281C
};
