#pragma once

class CCitadel_Ability_Ratking_StandardBearerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_PlantedModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyFlagAuraModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyFlagAuraModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1418, size 0x10, align 8
    CSoundEventName m_FlagPlantSound; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ChargeImpactSound; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_strChargeLoopSound; // offset 0x1448, size 0x10, align 8
    float32 m_flPlantFlagZStart; // offset 0x1458, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flDownTraceDistance; // offset 0x145C, size 0x4, align 4
    float32 m_flExplodeTimer; // offset 0x1460, size 0x4, align 4 | MPropertyDescription
    float32 m_flChargeAccelerationMeters; // offset 0x1464, size 0x4, align 4 | MPropertyDescription
    float32 m_flChargeFallGravityScale; // offset 0x1468, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnRateMax; // offset 0x146C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnRateMin; // offset 0x1470, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlagForwardDistance; // offset 0x1474, size 0x4, align 4
    float32 m_flNearGroundDistance; // offset 0x1478, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantAnticipationDistance; // offset 0x147C, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapUpSpeed; // offset 0x1480, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapRiseDuration; // offset 0x1484, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_PlantLeapSpeedCurve; // offset 0x1488, size 0x40, align 8 | MPropertyDescription
    CPiecewiseCurve m_PlantLeapHorizontalCurve; // offset 0x14C8, size 0x40, align 8 | MPropertyDescription
    float32 m_flPlantLeapHoverDuration; // offset 0x1508, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapSlamSpeed; // offset 0x150C, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantPopUpSpeed; // offset 0x1510, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantPopBackSpeed; // offset 0x1514, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoveryDelay; // offset 0x1518, size 0x4, align 4 | MPropertyDescription
    char _pad_151C[0x4]; // offset 0x151C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FlagModel; // offset 0x1520, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1600, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnticipationParticle; // offset 0x16E0, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_ChargingCameraSequence; // offset 0x17C0, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_PlantLeapCameraSequence; // offset 0x1860, size 0xA0, align 8 | MPropertyDescription
};
