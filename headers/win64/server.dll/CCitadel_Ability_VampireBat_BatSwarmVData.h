#pragma once

class CCitadel_Ability_VampireBat_BatSwarmVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GainedBatParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1170, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatSwarmChannelParticle; // offset 0x1250, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1330, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGainedBatSound; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strChannelEndSound; // offset 0x1350, size 0x10, align 8
    bool m_bAllowLockOn; // offset 0x1360, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowSatVolume; // offset 0x1361, size 0x1, align 1
    bool m_bAllowRetarget; // offset 0x1362, size 0x1, align 1
    char _pad_1363[0x1]; // offset 0x1363
    float32 m_flBatTickRate; // offset 0x1364, size 0x4, align 4
    float32 m_flBatLifetime; // offset 0x1368, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMin; // offset 0x136C, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMax; // offset 0x1370, size 0x4, align 4
    float32 m_flBatRetargetRadius; // offset 0x1374, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1378, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x137C, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x1380, size 0x4, align 4
    char _pad_1384[0x4]; // offset 0x1384
    CPiecewiseCurve m_DistanceToAccuracyCurve; // offset 0x1388, size 0x40, align 8
    CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // offset 0x13C8, size 0x40, align 8
    Color aimColorDesat; // offset 0x1408, size 0x4, align 4
    Color aimColorSat; // offset 0x140C, size 0x4, align 4
    Color aimColorOutline; // offset 0x1410, size 0x4, align 4
    float32 m_flSatVolumePulsePerBat; // offset 0x1414, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1418, size 0x4, align 4
    float32 m_flLowTickRateDistCheck; // offset 0x141C, size 0x4, align 4
};
