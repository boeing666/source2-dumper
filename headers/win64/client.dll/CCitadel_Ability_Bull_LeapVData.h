#pragma once

class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CPiecewiseCurve m_CrashSpeedScaleCurve; // offset 0x1818, size 0x40, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1858, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // offset 0x1868, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // offset 0x1878, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x1888, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x1898, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x18A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1998, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1A78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x1B58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DivingPreviewParticle; // offset 0x1C38, size 0xE0, align 8
    CSoundEventName m_strCrashingSound; // offset 0x1D18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x1D28, size 0x10, align 8
    float32 m_flStartupTime; // offset 0x1D38, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flForwardBoostSpeed; // offset 0x1D3C, size 0x4, align 4
    float32 m_flUpBoostSpeed; // offset 0x1D40, size 0x4, align 4
    float32 m_flBoostTurnRate; // offset 0x1D44, size 0x4, align 4
    float32 m_flHoverTime; // offset 0x1D48, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x1D4C, size 0x4, align 4
    float32 m_flBoostGain; // offset 0x1D50, size 0x4, align 4
    float32 m_flBoostTime; // offset 0x1D54, size 0x4, align 4
    float32 m_flLandingTime; // offset 0x1D58, size 0x4, align 4
    float32 m_flCrashSpeed; // offset 0x1D5C, size 0x4, align 4
    float32 m_flCrashBraceAnimTime; // offset 0x1D60, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1D64, size 0x4, align 4
    float32 m_flHoverInputSpeedMax; // offset 0x1D68, size 0x4, align 4
    float32 m_flHoverInputAcceleration; // offset 0x1D6C, size 0x4, align 4
    float32 m_flHoverSpeedDecay; // offset 0x1D70, size 0x4, align 4
    float32 m_flCrashDownInputBuffer; // offset 0x1D74, size 0x4, align 4
};
