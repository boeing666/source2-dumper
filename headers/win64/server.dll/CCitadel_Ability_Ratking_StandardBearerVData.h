#pragma once

class CCitadel_Ability_Ratking_StandardBearerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1598, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_PlantedModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyFlagAuraModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyFlagAuraModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x10B0, size 0x10, align 8
    CSoundEventName m_FlagPlantSound; // offset 0x10C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ChargeImpactSound; // offset 0x10D0, size 0x10, align 8
    CSoundEventName m_strChargeLoopSound; // offset 0x10E0, size 0x10, align 8
    float32 m_flPlantFlagZStart; // offset 0x10F0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flDownTraceDistance; // offset 0x10F4, size 0x4, align 4
    float32 m_flExplodeTimer; // offset 0x10F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flChargeAccelerationMeters; // offset 0x10FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flChargeFallGravityScale; // offset 0x1100, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnRateMax; // offset 0x1104, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnRateMin; // offset 0x1108, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlagForwardDistance; // offset 0x110C, size 0x4, align 4
    float32 m_flNearGroundDistance; // offset 0x1110, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantAnticipationDistance; // offset 0x1114, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapUpSpeed; // offset 0x1118, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapRiseDuration; // offset 0x111C, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_PlantLeapSpeedCurve; // offset 0x1120, size 0x40, align 8 | MPropertyDescription
    CPiecewiseCurve m_PlantLeapHorizontalCurve; // offset 0x1160, size 0x40, align 8 | MPropertyDescription
    float32 m_flPlantLeapHoverDuration; // offset 0x11A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantLeapSlamSpeed; // offset 0x11A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantPopUpSpeed; // offset 0x11A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flPlantPopBackSpeed; // offset 0x11AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoveryDelay; // offset 0x11B0, size 0x4, align 4 | MPropertyDescription
    char _pad_11B4[0x4]; // offset 0x11B4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FlagModel; // offset 0x11B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1298, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnticipationParticle; // offset 0x1378, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_ChargingCameraSequence; // offset 0x1458, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_PlantLeapCameraSequence; // offset 0x14F8, size 0xA0, align 8 | MPropertyDescription
};
