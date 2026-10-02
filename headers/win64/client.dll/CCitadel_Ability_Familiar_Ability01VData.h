#pragma once

class CCitadel_Ability_Familiar_Ability01VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaringModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x1418, size 0x10, align 8
    float32 m_AirSpeedMax; // offset 0x1428, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x142C, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x1430, size 0x4, align 4
    float32 m_AirDrag; // offset 0x1434, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x1438, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x143C, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x1440, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x1444, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x1448, size 0x4, align 4
    float32 m_JumpUpDownSpeed; // offset 0x144C, size 0x4, align 4
    float32 m_ConeSpacingMeters; // offset 0x1450, size 0x4, align 4
    char _pad_1454[0x4]; // offset 0x1454
    CPiecewiseCurve m_RadiusGrowthCurve; // offset 0x1458, size 0x40, align 8
    Color aimColorDesat; // offset 0x1498, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x149C, size 0x4, align 4
    Color aimColorOutline; // offset 0x14A0, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x14A4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x14A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x1588, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDebuffParticle; // offset 0x1668, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1748, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorParticle; // offset 0x1828, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorClientParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x19E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WakeUpDamageParticle; // offset 0x1AC8, size 0xE0, align 8
    CSoundEventName m_SleepHitSound; // offset 0x1BA8, size 0x10, align 8 | MPropertyStartGroup
};
