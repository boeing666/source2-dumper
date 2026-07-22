#pragma once

class CCitadel_Ability_Werewolf_KickFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CPiecewiseCurve m_LeapingSpeedCurve; // offset 0x1818, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flVelocityCarryoverOnMiss; // offset 0x1858, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x185C, size 0x4, align 4
    float32 m_flGroundBreakOffAngle; // offset 0x1860, size 0x4, align 4
    char _pad_1864[0x4]; // offset 0x1864
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KickHitImpact; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PushOffImpact; // offset 0x1948, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BootKickCast; // offset 0x1A28, size 0xE0, align 8
    CSoundEventName m_KickHitSound; // offset 0x1B08, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPushOffSound; // offset 0x1B18, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SuccessSelfModifier; // offset 0x1B28, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SuccessEnemyModifier; // offset 0x1B38, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x1B48, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1B58, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1B68, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1B78, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MarkModifier; // offset 0x1B88, size 0x10, align 8
};
