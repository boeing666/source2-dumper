#pragma once

class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    float32 m_flPlayerInitialSightRange; // offset 0xC50, size 0x4, align 4
    char _pad_0C54[0x4]; // offset 0xC54
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0xC58, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamHitSound; // offset 0xD38, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamAnnounceSound; // offset 0xD48, size 0x10, align 8
    CSoundEventName m_BarrageAnnounceSound; // offset 0xD58, size 0x10, align 8
    CSoundEventName m_MeleeAnnounceSound; // offset 0xD68, size 0x10, align 8
    bool m_bBeamTurnToFire; // offset 0xD78, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0D79[0x7]; // offset 0xD79
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // offset 0xD80, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompWarningEffect; // offset 0xE60, size 0xE0, align 8
    float32 m_flTossSpeed; // offset 0xF40, size 0x4, align 4
    float32 m_flStompDamage; // offset 0xF44, size 0x4, align 4
    float32 m_flStompDamageMaxHealthPercent; // offset 0xF48, size 0x4, align 4
    float32 m_flStompDamageTrooperRate; // offset 0xF4C, size 0x4, align 4
    float32 m_flStompTossUpMagnitude; // offset 0xF50, size 0x4, align 4
    float32 m_flStunDuration; // offset 0xF54, size 0x4, align 4
    float32 m_flStompAttemptRadius; // offset 0xF58, size 0x4, align 4
    float32 m_flStompImpactRadius; // offset 0xF5C, size 0x4, align 4
    float32 m_flStompImpactHeight; // offset 0xF60, size 0x4, align 4
    float32 m_flStompParryRadius; // offset 0xF64, size 0x4, align 4
    float32 m_flStompParryImpulse; // offset 0xF68, size 0x4, align 4
    float32 m_flStompParryImpulseInAir; // offset 0xF6C, size 0x4, align 4
    float32 m_flStompParryDamageMult; // offset 0xF70, size 0x4, align 4
    char _pad_0F74[0x4]; // offset 0xF74
    CSoundEventName m_StompAnnounceSound; // offset 0xF78, size 0x10, align 8
    CSoundEventName m_StompParriedSound; // offset 0xF88, size 0x10, align 8
    CSoundEventName m_StompImpactSound; // offset 0xF98, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeRingParticle; // offset 0xFA8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flRangeRingShowDistance; // offset 0x1088, size 0x4, align 4
    float32 m_flRangeRingFadeDistance; // offset 0x108C, size 0x4, align 4
    float32 m_flRangeRingAlpha; // offset 0x1090, size 0x4, align 4
    float32 m_flBurstDuration; // offset 0x1094, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstCooldown; // offset 0x1098, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0x109C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMeleeHitTime; // offset 0x10A0, size 0x4, align 4
    float32 m_flMeleeAttackRadius; // offset 0x10A4, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x10A8, size 0x4, align 4
    float32 m_flMeleeDamageHealthPct; // offset 0x10AC, size 0x4, align 4
    float32 m_flMeleeTrooperStunTime; // offset 0x10B0, size 0x4, align 4
    char _pad_10B4[0x4]; // offset 0x10B4
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0x10B8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flBackDoorProtectionRange; // offset 0x10C8, size 0x4, align 4
    char _pad_10CC[0x4]; // offset 0x10CC
    CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // offset 0x10D0, size 0x10, align 8
    float32 m_flInvulModifierRange; // offset 0x10E0, size 0x4, align 4
    char _pad_10E4[0x4]; // offset 0x10E4
    CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // offset 0x10E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // offset 0x10F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearbyEnemyResist; // offset 0x1108, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StatTrackerAuraModifier; // offset 0x1118, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel1; // offset 0x1128, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel2; // offset 0x1138, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StaggerWatcherModifier; // offset 0x1148, size 0x10, align 8
    float32 m_flMaxStaggerBuildup; // offset 0x1158, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStaggerDuration; // offset 0x115C, size 0x4, align 4
    float32 m_flStaggerMeleeMult; // offset 0x1160, size 0x4, align 4
    float32 m_flStaggerDamageMult; // offset 0x1164, size 0x4, align 4
    float32 m_flAoeWaveHealthThreshold; // offset 0x1168, size 0x4, align 4
    char _pad_116C[0x4]; // offset 0x116C
};
