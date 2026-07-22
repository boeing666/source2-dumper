#pragma once

class CCitadel_Ability_VampireBat_BatSwarmVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GainedBatParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatSwarmChannelParticle; // offset 0x19E8, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1AC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGainedBatSound; // offset 0x1AD8, size 0x10, align 8
    CSoundEventName m_strChannelEndSound; // offset 0x1AE8, size 0x10, align 8
    bool m_bAllowLockOn; // offset 0x1AF8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowSatVolume; // offset 0x1AF9, size 0x1, align 1
    bool m_bAllowRetarget; // offset 0x1AFA, size 0x1, align 1
    char _pad_1AFB[0x1]; // offset 0x1AFB
    float32 m_flBatTickRate; // offset 0x1AFC, size 0x4, align 4
    float32 m_flBatLifetime; // offset 0x1B00, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMin; // offset 0x1B04, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMax; // offset 0x1B08, size 0x4, align 4
    float32 m_flBatRetargetRadius; // offset 0x1B0C, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1B10, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x1B14, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CPiecewiseCurve m_DistanceToAccuracyCurve; // offset 0x1B20, size 0x40, align 8
    CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // offset 0x1B60, size 0x40, align 8
    Color aimColorDesat; // offset 0x1BA0, size 0x4, align 1
    Color aimColorSat; // offset 0x1BA4, size 0x4, align 1
    Color aimColorOutline; // offset 0x1BA8, size 0x4, align 1
    float32 m_flSatVolumePulsePerBat; // offset 0x1BAC, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1BB0, size 0x4, align 4
    float32 m_flLowTickRateDistCheck; // offset 0x1BB4, size 0x4, align 4
};
