#pragma once

class CCitadel_Ability_Deadpack_UltimateVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoingUpModifier; // offset 0x1170, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GoingDownModifier; // offset 0x1180, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LowHealthGlowModifier; // offset 0x11A0, size 0x10, align 8
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_strGoingUpSounds; // offset 0x11B0, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_strGoingDownSounds; // offset 0x11D8, size 0x28, align 8
    CSoundEventName m_strImpactSound; // offset 0x1200, size 0x10, align 8
    float32 m_flShakeAmp; // offset 0x1210, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeFreq; // offset 0x1214, size 0x4, align 4
    CPiecewiseCurve m_flGoingUpSpeedOverTime; // offset 0x1218, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_flGoingDownSpeedOverTime; // offset 0x1258, size 0x40, align 8
    CPiecewiseCurve m_flApexSpeedByDistance; // offset 0x1298, size 0x40, align 8
    float32 m_flLateralSpeedGoingUp; // offset 0x12D8, size 0x4, align 4
    float32 m_flLateralSpeedGoingDown; // offset 0x12DC, size 0x4, align 4
    float32 m_flChargeTime; // offset 0x12E0, size 0x4, align 4
    float32 m_flGrabDistance; // offset 0x12E4, size 0x4, align 4
    float32 m_flCameraTurnRateMax; // offset 0x12E8, size 0x4, align 4
    float32 m_flSpinRateGoingDownDegreesPerSec; // offset 0x12EC, size 0x4, align 4
    float32 m_flMaxPossibleFlyHeight; // offset 0x12F0, size 0x4, align 4
    char _pad_12F4[0x4]; // offset 0x12F4
};
