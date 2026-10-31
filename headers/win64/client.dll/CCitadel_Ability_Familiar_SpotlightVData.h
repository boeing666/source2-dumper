#pragma once

class CCitadel_Ability_Familiar_SpotlightVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExposedAuraModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    float32 m_AirSpeedMax; // offset 0x11A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x11A4, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x11A8, size 0x4, align 4
    float32 m_AirDrag; // offset 0x11AC, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x11B0, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x11B4, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x11B8, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x11BC, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x11C0, size 0x4, align 4
    Color aimColorDesat; // offset 0x11C4, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x11C8, size 0x4, align 4
    Color aimColorOutline; // offset 0x11CC, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x11D0, size 0x4, align 4
    char _pad_11D4[0x4]; // offset 0x11D4
};
