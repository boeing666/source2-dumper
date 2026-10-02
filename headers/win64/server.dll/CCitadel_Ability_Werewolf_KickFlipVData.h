#pragma once

class CCitadel_Ability_Werewolf_KickFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CPiecewiseCurve m_LeapingSpeedCurve; // offset 0x13E8, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flVelocityCarryoverOnMiss; // offset 0x1428, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x142C, size 0x4, align 4
    float32 m_flGroundBreakOffAngle; // offset 0x1430, size 0x4, align 4
    char _pad_1434[0x4]; // offset 0x1434
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KickHitImpact; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PushOffImpact; // offset 0x1518, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BootKickCast; // offset 0x15F8, size 0xE0, align 8
    CSoundEventName m_KickHitSound; // offset 0x16D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPushOffSound; // offset 0x16E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SuccessSelfModifier; // offset 0x16F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SuccessEnemyModifier; // offset 0x1708, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x1718, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1728, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1738, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1748, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MarkModifier; // offset 0x1758, size 0x10, align 8
};
