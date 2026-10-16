#pragma once

class CCitadel_Ability_Deadpack_UltimateVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1650, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundImpactParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoingUpModifier; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GoingDownModifier; // offset 0x14E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x14F8, size 0x10, align 8
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_strGoingUpSounds; // offset 0x1508, size 0x28, align 8 | MPropertyStartGroup
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_strGoingDownSounds; // offset 0x1530, size 0x28, align 8
    CSoundEventName m_strImpactSound; // offset 0x1558, size 0x10, align 8
    float32 m_flShakeAmp; // offset 0x1568, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShakeFreq; // offset 0x156C, size 0x4, align 4
    CPiecewiseCurve m_flGoingUpSpeedOverTime; // offset 0x1570, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_flGoingDownSpeedOverTime; // offset 0x15B0, size 0x40, align 8
    CPiecewiseCurve m_flApexSpeedByDistance; // offset 0x15F0, size 0x40, align 8
    float32 m_flLateralSpeedGoingUp; // offset 0x1630, size 0x4, align 4
    float32 m_flLateralSpeedGoingDown; // offset 0x1634, size 0x4, align 4
    float32 m_flChargeTime; // offset 0x1638, size 0x4, align 4
    float32 m_flGrabDistance; // offset 0x163C, size 0x4, align 4
    float32 m_flCameraTurnRateMax; // offset 0x1640, size 0x4, align 4
    float32 m_flSpinRateGoingDownDegreesPerSec; // offset 0x1644, size 0x4, align 4
    float32 m_flMaxPossibleFlyHeight; // offset 0x1648, size 0x4, align 4
    char _pad_164C[0x4]; // offset 0x164C
};
