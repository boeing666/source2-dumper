#pragma once

class CCitadel_Ability_Familiar_SpotlightVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExposedAuraModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EffectModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EyeGlowParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishSound; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_AirSpeedMax; // offset 0x1508, size 0x4, align 4 | MPropertyStartGroup
    float32 m_FallSpeedMax; // offset 0x150C, size 0x4, align 4
    float32 m_VerticalDrag; // offset 0x1510, size 0x4, align 4
    float32 m_AirDrag; // offset 0x1514, size 0x4, align 4
    float32 m_CameraTurnRateMax; // offset 0x1518, size 0x4, align 4
    float32 m_flShotCosmeticVarianceMagnitude; // offset 0x151C, size 0x4, align 4
    float32 m_JumpCeilingCheckDistance; // offset 0x1520, size 0x4, align 4
    float32 m_JumpSpeed; // offset 0x1524, size 0x4, align 4
    float32 m_JumpPitch; // offset 0x1528, size 0x4, align 4
    Color aimColorDesat; // offset 0x152C, size 0x4, align 4 | MPropertyStartGroup
    Color aimColorSat; // offset 0x1530, size 0x4, align 4
    Color aimColorOutline; // offset 0x1534, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1538, size 0x4, align 4
    char _pad_153C[0x4]; // offset 0x153C
};
