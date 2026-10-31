#pragma once

class CCitadel_Ability_Werewolf_KickFlipVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CPiecewiseCurve m_LeapingSpeedCurve; // offset 0x1080, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flVelocityCarryoverOnMiss; // offset 0x10C0, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x10C4, size 0x4, align 4
    float32 m_flGroundBreakOffAngle; // offset 0x10C8, size 0x4, align 4
    char _pad_10CC[0x4]; // offset 0x10CC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KickHitImpact; // offset 0x10D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PushOffImpact; // offset 0x11B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BootKickCast; // offset 0x1290, size 0xE0, align 8
    CSoundEventName m_KickHitSound; // offset 0x1370, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPushOffSound; // offset 0x1380, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SuccessSelfModifier; // offset 0x1390, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SuccessEnemyModifier; // offset 0x13A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MarkModifier; // offset 0x13F0, size 0x10, align 8
};
