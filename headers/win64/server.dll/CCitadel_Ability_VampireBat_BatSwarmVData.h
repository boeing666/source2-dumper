#pragma once

class CCitadel_Ability_VampireBat_BatSwarmVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1740, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GainedBatParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BatSwarmChannelParticle; // offset 0x1570, size 0xE0, align 8
    CSoundEventName m_strFireBatSound; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGainedBatSound; // offset 0x1660, size 0x10, align 8
    CSoundEventName m_strChannelEndSound; // offset 0x1670, size 0x10, align 8
    bool m_bAllowLockOn; // offset 0x1680, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAllowSatVolume; // offset 0x1681, size 0x1, align 1
    bool m_bAllowRetarget; // offset 0x1682, size 0x1, align 1
    char _pad_1683[0x1]; // offset 0x1683
    float32 m_flBatTickRate; // offset 0x1684, size 0x4, align 4
    float32 m_flBatLifetime; // offset 0x1688, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMin; // offset 0x168C, size 0x4, align 4
    float32 m_flTrackingAngularStrengthMax; // offset 0x1690, size 0x4, align 4
    float32 m_flBatRetargetRadius; // offset 0x1694, size 0x4, align 4
    float32 m_flCurlNoiseStrength; // offset 0x1698, size 0x4, align 4
    float32 m_flCurlNoiseMinFrequency; // offset 0x169C, size 0x4, align 4
    float32 m_flCurlNoiseMaxFrequency; // offset 0x16A0, size 0x4, align 4
    char _pad_16A4[0x4]; // offset 0x16A4
    CPiecewiseCurve m_DistanceToAccuracyCurve; // offset 0x16A8, size 0x40, align 8
    CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // offset 0x16E8, size 0x40, align 8
    Color aimColorDesat; // offset 0x1728, size 0x4, align 4
    Color aimColorSat; // offset 0x172C, size 0x4, align 4
    Color aimColorOutline; // offset 0x1730, size 0x4, align 4
    float32 m_flSatVolumePulsePerBat; // offset 0x1734, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1738, size 0x4, align 4
    float32 m_flLowTickRateDistCheck; // offset 0x173C, size 0x4, align 4
};
