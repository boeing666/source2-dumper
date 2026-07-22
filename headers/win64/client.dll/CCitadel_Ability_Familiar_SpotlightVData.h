#pragma once

class CCitadel_Ability_Familiar_SpotlightVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1970, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExposedAuraModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishSound; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
    float32 m_AirSpeedMax; // offset 0x1938, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x193C, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x1940, size 0x4, align 4
    float32 m_AirDrag; // offset 0x1944, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x1948, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x194C, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x1950, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x1954, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x1958, size 0x4, align 4
    Color aimColorDesat; // offset 0x195C, size 0x4, align 1 | MPropertyStartGroup
    Color aimColorSat; // offset 0x1960, size 0x4, align 1
    Color aimColorOutline; // offset 0x1964, size 0x4, align 1
    float32 m_flSatVolumeInnerConeSize; // offset 0x1968, size 0x4, align 4
    char _pad_196C[0x4]; // offset 0x196C
};
