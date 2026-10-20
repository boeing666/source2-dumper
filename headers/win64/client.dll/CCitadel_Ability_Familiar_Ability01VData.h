#pragma once

class CCitadel_Ability_Familiar_Ability01VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaringModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x10A0, size 0x10, align 8
    float32 m_AirSpeedMax; // offset 0x10B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x10B4, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x10B8, size 0x4, align 4
    float32 m_AirDrag; // offset 0x10BC, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x10C0, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x10C4, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x10C8, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x10CC, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x10D0, size 0x4, align 4
    float32 m_JumpUpDownSpeed; // offset 0x10D4, size 0x4, align 4
    float32 m_ConeSpacingMeters; // offset 0x10D8, size 0x4, align 4
    char _pad_10DC[0x4]; // offset 0x10DC
    CPiecewiseCurve m_RadiusGrowthCurve; // offset 0x10E0, size 0x40, align 8
    Color aimColorDesat; // offset 0x1120, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x1124, size 0x4, align 4
    Color aimColorOutline; // offset 0x1128, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x112C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1130, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x1210, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDebuffParticle; // offset 0x12F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x13D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorParticle; // offset 0x14B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorClientParticle; // offset 0x1590, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1670, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WakeUpDamageParticle; // offset 0x1750, size 0xE0, align 8
    CSoundEventName m_SleepHitSound; // offset 0x1830, size 0x10, align 8 | MPropertyStartGroup
};
