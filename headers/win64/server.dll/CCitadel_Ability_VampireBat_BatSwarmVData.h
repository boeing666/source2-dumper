#pragma once

class CCitadel_Ability_VampireBat_BatSwarmVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GainedBatParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatSwarmChannelParticle; // offset 0x15B8, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGainedBatSound; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strChannelEndSound; // offset 0x16B8, size 0x10, align 8
    bool m_bAllowLockOn; // offset 0x16C8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowSatVolume; // offset 0x16C9, size 0x1, align 1
    bool m_bAllowRetarget; // offset 0x16CA, size 0x1, align 1
    char _pad_16CB[0x1]; // offset 0x16CB
    float32 m_flBatTickRate; // offset 0x16CC, size 0x4, align 4
    float32 m_flBatLifetime; // offset 0x16D0, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMin; // offset 0x16D4, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMax; // offset 0x16D8, size 0x4, align 4
    float32 m_flBatRetargetRadius; // offset 0x16DC, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x16E0, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x16E4, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0x4]; // offset 0x16EC
    CPiecewiseCurve m_DistanceToAccuracyCurve; // offset 0x16F0, size 0x40, align 8
    CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // offset 0x1730, size 0x40, align 8
    Color aimColorDesat; // offset 0x1770, size 0x4, align 4
    Color aimColorSat; // offset 0x1774, size 0x4, align 4
    Color aimColorOutline; // offset 0x1778, size 0x4, align 4
    float32 m_flSatVolumePulsePerBat; // offset 0x177C, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1780, size 0x4, align 4
    float32 m_flLowTickRateDistCheck; // offset 0x1784, size 0x4, align 4
};
