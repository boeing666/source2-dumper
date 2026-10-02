#pragma once

class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CPiecewiseCurve m_CrashSpeedScaleCurve; // offset 0x13E8, size 0x40, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x1458, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // offset 0x1468, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // offset 0x1478, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // offset 0x1488, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1568, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1648, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x1728, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DivingPreviewParticle; // offset 0x1808, size 0xE0, align 8
    CSoundEventName m_strCrashingSound; // offset 0x18E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x18F8, size 0x10, align 8
    float32 m_flStartupTime; // offset 0x1908, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flForwardBoostSpeed; // offset 0x190C, size 0x4, align 4
    float32 m_flUpBoostSpeed; // offset 0x1910, size 0x4, align 4
    float32 m_flBoostTurnRate; // offset 0x1914, size 0x4, align 4
    float32 m_flHoverTime; // offset 0x1918, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x191C, size 0x4, align 4
    float32 m_flBoostGain; // offset 0x1920, size 0x4, align 4
    float32 m_flBoostTime; // offset 0x1924, size 0x4, align 4
    float32 m_flLandingTime; // offset 0x1928, size 0x4, align 4
    float32 m_flCrashSpeed; // offset 0x192C, size 0x4, align 4
    float32 m_flCrashBraceAnimTime; // offset 0x1930, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1934, size 0x4, align 4
    float32 m_flHoverInputSpeedMax; // offset 0x1938, size 0x4, align 4
    float32 m_flHoverInputAcceleration; // offset 0x193C, size 0x4, align 4
    float32 m_flHoverSpeedDecay; // offset 0x1940, size 0x4, align 4
    float32 m_flCrashDownInputBuffer; // offset 0x1944, size 0x4, align 4
};
