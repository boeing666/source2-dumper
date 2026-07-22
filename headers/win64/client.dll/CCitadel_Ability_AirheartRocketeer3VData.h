#pragma once

class CCitadel_Ability_AirheartRocketeer3VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JetpackFireFX; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLExplosionFX; // offset 0x18F8, size 0xE0, align 8
    float32 m_flAirDashDistancePct; // offset 0x19D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x19DC, size 0x4, align 4
    float32 m_flAirSpeed; // offset 0x19E0, size 0x4, align 4
    float32 m_flBeginJetpackingVelocityMultiplier; // offset 0x19E4, size 0x4, align 4
    float32 m_flTimeToHoldBeforeBeginJetpack; // offset 0x19E8, size 0x4, align 4
    float32 m_flVerticalDampening_FallingBelowNeutral; // offset 0x19EC, size 0x4, align 4
    float32 m_flVerticalDampening_FallingAboveNeutral; // offset 0x19F0, size 0x4, align 4
    float32 m_flVerticalDampening_RisingBelowNeutral; // offset 0x19F4, size 0x4, align 4
    float32 m_flVerticalDampening_RisingAboveNeutral; // offset 0x19F8, size 0x4, align 4
    float32 m_flVerticalDeadzoneSoft; // offset 0x19FC, size 0x4, align 4
    float32 m_flVerticalDeadzoneHard; // offset 0x1A00, size 0x4, align 4
    float32 m_flPreservedVelocityDecaySpeed; // offset 0x1A04, size 0x4, align 4
    float32 m_flIntentMultiplierApproachSpeed; // offset 0x1A08, size 0x4, align 4
    float32 m_flMPCOriginCoeff; // offset 0x1A0C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMPCVelocityCoeff; // offset 0x1A10, size 0x4, align 4
    float32 m_flMPCScale; // offset 0x1A14, size 0x4, align 4
    float32 m_flMPCMaxAccel; // offset 0x1A18, size 0x4, align 4
    float32 m_flMoveSpaceSpeed_ZUp; // offset 0x1A1C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMoveSpaceSpeed_ZDown; // offset 0x1A20, size 0x4, align 4
    float32 m_flMoveSpaceSpeed_Lateral; // offset 0x1A24, size 0x4, align 4
    float32 m_flMoveSpaceSpeed_LateralZUp; // offset 0x1A28, size 0x4, align 4
    float32 m_flMoveSpaceSpeed_Forward; // offset 0x1A2C, size 0x4, align 4
    float32 m_flMoveSpaceSpeed_Backward; // offset 0x1A30, size 0x4, align 4
    float32 m_flIntentSpaceSoftZone; // offset 0x1A34, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flIntentSpaceHardZone; // offset 0x1A38, size 0x4, align 4
    float32 m_flHardZoneCoeffFrac; // offset 0x1A3C, size 0x4, align 4
    float32 m_flSoftZoneCoeffFrac; // offset 0x1A40, size 0x4, align 4
    char _pad_1A44[0x4]; // offset 0x1A44
    CPiecewiseCurve m_OverdriveLateral; // offset 0x1A48, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flOverdriveCooldown; // offset 0x1A88, size 0x4, align 4
    float32 m_flConsumedBySideThrusting; // offset 0x1A8C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flConsumedWhileActive; // offset 0x1A90, size 0x4, align 4
    float32 m_flHoverVelocityDecaySpeed; // offset 0x1A94, size 0x4, align 4 | MPropertyStartGroup
    CPiecewiseCurve m_VTOLSpeedByTime; // offset 0x1A98, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flVTOLCamTurnRate; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
    CEmbeddedSubclass< CCitadelModifier > m_VTOLModifier; // offset 0x1AE0, size 0x10, align 8
    float32 m_flMaxVTOLBounceSpeed; // offset 0x1AF0, size 0x4, align 4
    float32 m_flVTOLFloorBounceZSpeed; // offset 0x1AF4, size 0x4, align 4
    float32 m_flWallAttachCooldown; // offset 0x1AF8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallJumpSpeed; // offset 0x1AFC, size 0x4, align 4
    float32 m_flWallAttachMinDuration; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CSoundEventName m_strOutOfFuelSound; // offset 0x1B08, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strOverdriveActivatedSound; // offset 0x1B18, size 0x10, align 8
    CSoundEventName m_strJetpackingLoop; // offset 0x1B28, size 0x10, align 8
    CSoundEventName m_strJetpackingThrustingLoop; // offset 0x1B38, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceVTOL; // offset 0x1B48, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHover; // offset 0x1BD0, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceWallAttach; // offset 0x1C58, size 0x88, align 8
    float32 flScreenShake_VTOL_Amplitude; // offset 0x1CE0, size 0x4, align 4
    float32 flScreenShake_VTOL_Frequency; // offset 0x1CE4, size 0x4, align 4
};
