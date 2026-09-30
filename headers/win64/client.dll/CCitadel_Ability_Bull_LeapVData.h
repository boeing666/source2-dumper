#pragma once

class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CPiecewiseCurve m_CrashSpeedScaleCurve; // offset 0x13A0, size 0x40, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x13E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // offset 0x13F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x1430, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // offset 0x1440, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1520, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1600, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x16E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DivingPreviewParticle; // offset 0x17C0, size 0xE0, align 8
    CSoundEventName m_strCrashingSound; // offset 0x18A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x18B0, size 0x10, align 8
    float32 m_flStartupTime; // offset 0x18C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flForwardBoostSpeed; // offset 0x18C4, size 0x4, align 4
    float32 m_flUpBoostSpeed; // offset 0x18C8, size 0x4, align 4
    float32 m_flBoostTurnRate; // offset 0x18CC, size 0x4, align 4
    float32 m_flHoverTime; // offset 0x18D0, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x18D4, size 0x4, align 4
    float32 m_flBoostGain; // offset 0x18D8, size 0x4, align 4
    float32 m_flBoostTime; // offset 0x18DC, size 0x4, align 4
    float32 m_flLandingTime; // offset 0x18E0, size 0x4, align 4
    float32 m_flCrashSpeed; // offset 0x18E4, size 0x4, align 4
    float32 m_flCrashBraceAnimTime; // offset 0x18E8, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x18EC, size 0x4, align 4
    float32 m_flHoverInputSpeedMax; // offset 0x18F0, size 0x4, align 4
    float32 m_flHoverInputAcceleration; // offset 0x18F4, size 0x4, align 4
    float32 m_flHoverSpeedDecay; // offset 0x18F8, size 0x4, align 4
    float32 m_flCrashDownInputBuffer; // offset 0x18FC, size 0x4, align 4
};
