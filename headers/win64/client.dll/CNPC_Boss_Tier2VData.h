#pragma once

class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1150, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    float32 m_flPlayerInitialSightRange; // offset 0xC30, size 0x4, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0xC38, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamHitSound; // offset 0xD18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamAnnounceSound; // offset 0xD28, size 0x10, align 8
    CSoundEventName m_BarrageAnnounceSound; // offset 0xD38, size 0x10, align 8
    CSoundEventName m_MeleeAnnounceSound; // offset 0xD48, size 0x10, align 8
    bool m_bBeamTurnToFire; // offset 0xD58, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0D59[0x7]; // offset 0xD59
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // offset 0xD60, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompWarningEffect; // offset 0xE40, size 0xE0, align 8
    float32 m_flTossSpeed; // offset 0xF20, size 0x4, align 4
    float32 m_flStompDamage; // offset 0xF24, size 0x4, align 4
    float32 m_flStompDamageMaxHealthPercent; // offset 0xF28, size 0x4, align 4
    float32 m_flStompDamageTrooperRate; // offset 0xF2C, size 0x4, align 4
    float32 m_flStompTossUpMagnitude; // offset 0xF30, size 0x4, align 4
    float32 m_flStunDuration; // offset 0xF34, size 0x4, align 4
    float32 m_flStompAttemptRadius; // offset 0xF38, size 0x4, align 4
    float32 m_flStompImpactRadius; // offset 0xF3C, size 0x4, align 4
    float32 m_flStompImpactHeight; // offset 0xF40, size 0x4, align 4
    float32 m_flStompParryRadius; // offset 0xF44, size 0x4, align 4
    float32 m_flStompParryImpulse; // offset 0xF48, size 0x4, align 4
    float32 m_flStompParryImpulseInAir; // offset 0xF4C, size 0x4, align 4
    float32 m_flStompParryDamageMult; // offset 0xF50, size 0x4, align 4
    char _pad_0F54[0x4]; // offset 0xF54
    CSoundEventName m_StompAnnounceSound; // offset 0xF58, size 0x10, align 8
    CSoundEventName m_StompParriedSound; // offset 0xF68, size 0x10, align 8
    CSoundEventName m_StompImpactSound; // offset 0xF78, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RangeRingParticle; // offset 0xF88, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flRangeRingShowDistance; // offset 0x1068, size 0x4, align 4
    float32 m_flRangeRingFadeDistance; // offset 0x106C, size 0x4, align 4
    float32 m_flRangeRingAlpha; // offset 0x1070, size 0x4, align 4
    float32 m_flBurstDuration; // offset 0x1074, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstCooldown; // offset 0x1078, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0x107C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMeleeHitTime; // offset 0x1080, size 0x4, align 4
    float32 m_flMeleeAttackRadius; // offset 0x1084, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x1088, size 0x4, align 4
    float32 m_flMeleeDamageHealthPct; // offset 0x108C, size 0x4, align 4
    float32 m_flMeleeTrooperStunTime; // offset 0x1090, size 0x4, align 4
    char _pad_1094[0x4]; // offset 0x1094
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0x1098, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flBackDoorProtectionRange; // offset 0x10A8, size 0x4, align 4
    char _pad_10AC[0x4]; // offset 0x10AC
    CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // offset 0x10B0, size 0x10, align 8
    float32 m_flInvulModifierRange; // offset 0x10C0, size 0x4, align 4
    char _pad_10C4[0x4]; // offset 0x10C4
    CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // offset 0x10C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // offset 0x10D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearbyEnemyResist; // offset 0x10E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StatTrackerAuraModifier; // offset 0x10F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel1; // offset 0x1108, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel2; // offset 0x1118, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StaggerWatcherModifier; // offset 0x1128, size 0x10, align 8
    float32 m_flMaxStaggerBuildup; // offset 0x1138, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStaggerDuration; // offset 0x113C, size 0x4, align 4
    float32 m_flStaggerMeleeMult; // offset 0x1140, size 0x4, align 4
    float32 m_flStaggerDamageMult; // offset 0x1144, size 0x4, align 4
    float32 m_flAoeWaveHealthThreshold; // offset 0x1148, size 0x4, align 4
    char _pad_114C[0x4]; // offset 0x114C
};
