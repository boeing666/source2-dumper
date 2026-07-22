#pragma once

class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    float32 m_flSightRange; // offset 0x1348, size 0x4, align 4
    float32 m_flPlayerInitialSightRange; // offset 0x134C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // offset 0x1350, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamHitSound; // offset 0x1430, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamAnnounceSound; // offset 0x1440, size 0x10, align 8
    CSoundEventName m_BarrageAnnounceSound; // offset 0x1450, size 0x10, align 8
    CSoundEventName m_MeleeAnnounceSound; // offset 0x1460, size 0x10, align 8
    bool m_bBeamTurnToFire; // offset 0x1470, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1471[0x7]; // offset 0x1471
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // offset 0x1478, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompWarningEffect; // offset 0x1558, size 0xE0, align 8
    float32 m_flTossSpeed; // offset 0x1638, size 0x4, align 4
    float32 m_flStompDamage; // offset 0x163C, size 0x4, align 4
    float32 m_flStompDamageMaxHealthPercent; // offset 0x1640, size 0x4, align 4
    float32 m_flStompDamageTrooperRate; // offset 0x1644, size 0x4, align 4
    float32 m_flStompTossUpMagnitude; // offset 0x1648, size 0x4, align 4
    float32 m_flStunDuration; // offset 0x164C, size 0x4, align 4
    float32 m_flStompAttemptRadius; // offset 0x1650, size 0x4, align 4
    float32 m_flStompImpactRadius; // offset 0x1654, size 0x4, align 4
    float32 m_flStompImpactHeight; // offset 0x1658, size 0x4, align 4
    float32 m_flStompParryRadius; // offset 0x165C, size 0x4, align 4
    float32 m_flStompParryImpulse; // offset 0x1660, size 0x4, align 4
    float32 m_flStompParryImpulseInAir; // offset 0x1664, size 0x4, align 4
    float32 m_flStompParryDamageMult; // offset 0x1668, size 0x4, align 4
    float32 m_flSweepRadius; // offset 0x166C, size 0x4, align 4
    float32 m_flSweepSpeed; // offset 0x1670, size 0x4, align 4
    float32 m_flSweepZScale; // offset 0x1674, size 0x4, align 4
    float32 m_flSweepMaxAngle; // offset 0x1678, size 0x4, align 4
    float32 m_flSweepMaxRange; // offset 0x167C, size 0x4, align 4
    float32 m_flSweepAdjustSpeed; // offset 0x1680, size 0x4, align 4
    char _pad_1684[0x4]; // offset 0x1684
    CSoundEventName m_StompAnnounceSound; // offset 0x1688, size 0x10, align 8
    CSoundEventName m_StompParriedSound; // offset 0x1698, size 0x10, align 8
    CSoundEventName m_StompImpactSound; // offset 0x16A8, size 0x10, align 8
    float32 m_flBurstDuration; // offset 0x16B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstCooldown; // offset 0x16BC, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0x16C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMeleeHitTime; // offset 0x16C4, size 0x4, align 4
    float32 m_flMeleeAttackRadius; // offset 0x16C8, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x16CC, size 0x4, align 4
    float32 m_flMeleeDamageHealthPct; // offset 0x16D0, size 0x4, align 4
    float32 m_flMeleeTrooperStunTime; // offset 0x16D4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0x16D8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flBackDoorProtectionRange; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0x4]; // offset 0x16EC
    CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // offset 0x16F0, size 0x10, align 8
    float32 m_flInvulModifierRange; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x4]; // offset 0x1704
    CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // offset 0x1708, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // offset 0x1718, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearbyEnemyResist; // offset 0x1728, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StatTrackerAuraModifier; // offset 0x1738, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel1; // offset 0x1748, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EmpoweredModifierLevel2; // offset 0x1758, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StaggerWatcherModifier; // offset 0x1768, size 0x10, align 8
    float32 m_flMaxStaggerBuildup; // offset 0x1778, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flStaggerDuration; // offset 0x177C, size 0x4, align 4
    float32 m_flStaggerMeleeMult; // offset 0x1780, size 0x4, align 4
    float32 m_flStaggerDamageMult; // offset 0x1784, size 0x4, align 4
    float32 m_flAoeWaveHealthThreshold; // offset 0x1788, size 0x4, align 4
    char _pad_178C[0x4]; // offset 0x178C
};
