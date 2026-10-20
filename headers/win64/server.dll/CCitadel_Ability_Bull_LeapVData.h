#pragma once

class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CPiecewiseCurve m_CrashSpeedScaleCurve; // offset 0x1070, size 0x40, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x10B0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // offset 0x10C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // offset 0x10D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x10E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x10F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x1100, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // offset 0x1110, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x11F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x12D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x13B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DivingPreviewParticle; // offset 0x1490, size 0xE0, align 8
    CSoundEventName m_strCrashingSound; // offset 0x1570, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x1580, size 0x10, align 8
    float32 m_flStartupTime; // offset 0x1590, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flForwardBoostSpeed; // offset 0x1594, size 0x4, align 4
    float32 m_flUpBoostSpeed; // offset 0x1598, size 0x4, align 4
    float32 m_flBoostTurnRate; // offset 0x159C, size 0x4, align 4
    float32 m_flHoverTime; // offset 0x15A0, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x15A4, size 0x4, align 4
    float32 m_flBoostGain; // offset 0x15A8, size 0x4, align 4
    float32 m_flBoostTime; // offset 0x15AC, size 0x4, align 4
    float32 m_flLandingTime; // offset 0x15B0, size 0x4, align 4
    float32 m_flCrashSpeed; // offset 0x15B4, size 0x4, align 4
    float32 m_flCrashBraceAnimTime; // offset 0x15B8, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x15BC, size 0x4, align 4
    float32 m_flHoverInputSpeedMax; // offset 0x15C0, size 0x4, align 4
    float32 m_flHoverInputAcceleration; // offset 0x15C4, size 0x4, align 4
    float32 m_flHoverSpeedDecay; // offset 0x15C8, size 0x4, align 4
    float32 m_flCrashDownInputBuffer; // offset 0x15CC, size 0x4, align 4
};
