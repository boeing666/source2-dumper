#pragma once

class CCitadel_Ability_Familiar_Ability01VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B70, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaringModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileChannelingModifier; // offset 0x13D0, size 0x10, align 8
    float32 m_AirSpeedMax; // offset 0x13E0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x13E4, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x13E8, size 0x4, align 4
    float32 m_AirDrag; // offset 0x13EC, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x13F0, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x13F4, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x13F8, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x13FC, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x1400, size 0x4, align 4
    float32 m_JumpUpDownSpeed; // offset 0x1404, size 0x4, align 4
    float32 m_ConeSpacingMeters; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
    CPiecewiseCurve m_RadiusGrowthCurve; // offset 0x1410, size 0x40, align 8
    Color aimColorDesat; // offset 0x1450, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x1454, size 0x4, align 4
    Color aimColorOutline; // offset 0x1458, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x145C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1460, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x1540, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDebuffParticle; // offset 0x1620, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x1700, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorParticle; // offset 0x17E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusIndicatorClientParticle; // offset 0x18C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x19A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WakeUpDamageParticle; // offset 0x1A80, size 0xE0, align 8
    CSoundEventName m_SleepHitSound; // offset 0x1B60, size 0x10, align 8 | MPropertyStartGroup
};
