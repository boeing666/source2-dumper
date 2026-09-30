#pragma once

class CCitadel_Ability_Familiar_SpotlightVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExposedAuraModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x13C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishSound; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_AirSpeedMax; // offset 0x14C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x14C4, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x14C8, size 0x4, align 4
    float32 m_AirDrag; // offset 0x14CC, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x14D0, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x14D4, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x14D8, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x14DC, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x14E0, size 0x4, align 4
    Color aimColorDesat; // offset 0x14E4, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x14E8, size 0x4, align 4
    Color aimColorOutline; // offset 0x14EC, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x14F0, size 0x4, align 4
    char _pad_14F4[0x4]; // offset 0x14F4
};
