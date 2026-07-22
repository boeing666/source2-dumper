#pragma once

class CCitadel_Ability_Familiar_Ability01VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1FE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaringModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x1848, size 0x10, align 8
    float32 m_AirSpeedMax; // offset 0x1858, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x185C, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x1860, size 0x4, align 4
    float32 m_AirDrag; // offset 0x1864, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x1868, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x186C, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x1870, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x1874, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x1878, size 0x4, align 4
    float32 m_JumpUpDownSpeed; // offset 0x187C, size 0x4, align 4
    float32 m_ConeSpacingMeters; // offset 0x1880, size 0x4, align 4
    char _pad_1884[0x4]; // offset 0x1884
    CPiecewiseCurve m_RadiusGrowthCurve; // offset 0x1888, size 0x40, align 8
    Color aimColorDesat; // offset 0x18C8, size 0x4, align 1 | MPropertyStartGroup
    Color aimColorSat; // offset 0x18CC, size 0x4, align 1
    Color aimColorOutline; // offset 0x18D0, size 0x4, align 1
    float32 m_flSatVolumeInnerConeSize; // offset 0x18D4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x18D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x19B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDebuffParticle; // offset 0x1A98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1B78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorParticle; // offset 0x1C58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorClientParticle; // offset 0x1D38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1E18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WakeUpDamageParticle; // offset 0x1EF8, size 0xE0, align 8
    CSoundEventName m_SleepHitSound; // offset 0x1FD8, size 0x10, align 8 | MPropertyStartGroup
};
