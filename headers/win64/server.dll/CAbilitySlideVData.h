#pragma once

class CAbilitySlideVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flMinAngleToConsiderASlope; // offset 0x1080, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeMaxAccSpeed; // offset 0x1084, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeMaxAccSpeed; // offset 0x1088, size 0x4, align 4 | MPropertyDescription
    float32 m_flButtonPressWindow; // offset 0x108C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnSpeed; // offset 0x1090, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeAcceleration; // offset 0x1094, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeAcceleration; // offset 0x1098, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMinAngDiff; // offset 0x109C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMaxAngDiff; // offset 0x10A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandedFlatGroundFrictionGraceTime; // offset 0x10A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlatGroundFrictionGraceTime; // offset 0x10A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGroundGrace; // offset 0x10AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGround; // offset 0x10B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMinSlope; // offset 0x10B4, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMaxSlope; // offset 0x10B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMinSlope; // offset 0x10BC, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMaxSlope; // offset 0x10C0, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandingSlopeScaleBias; // offset 0x10C4, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinTriggerSpeed; // offset 0x10C8, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxTriggerSpeed; // offset 0x10CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinSpeed; // offset 0x10D0, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxSpeed; // offset 0x10D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinActivationSpeed; // offset 0x10D8, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinSustainSpeed; // offset 0x10DC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSprintBoostSpeed; // offset 0x10E0, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideStartTime; // offset 0x10E4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideSpeed; // offset 0x10E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFailSpeed; // offset 0x10EC, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashSlideActivate; // offset 0x10F0, size 0x10, align 8 | MPropertyDescription
    float32 m_flDashSlideFrictionTime; // offset 0x1100, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFriction; // offset 0x1104, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashMinActivationSpeed; // offset 0x1108, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeDeg; // offset 0x110C, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMaxSlopeDeg; // offset 0x1110, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeScale; // offset 0x1114, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideProbeForwardOffset; // offset 0x1118, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideActivationProbeForwardOffset; // offset 0x111C, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxDistanceBetweenProbeSamples; // offset 0x1120, size 0x4, align 4 | MPropertyDescription
    float32 m_flInitialSlideUseForwardProbeTime; // offset 0x1124, size 0x4, align 4 | MPropertyDescription
    float32 m_flCurrentSlopeSampleDistance; // offset 0x1128, size 0x4, align 4 | MPropertyDescription
    float32 m_flSampleVelDiffStdDevScaleCutoff; // offset 0x112C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlopeFacingAngleToActivate; // offset 0x1130, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJump; // offset 0x1134, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJumpTime; // offset 0x1138, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragMaxAngle; // offset 0x113C, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragResetTime; // offset 0x1140, size 0x4, align 4 | MPropertyDescription
    float32 m_flLateSlideJumpWindow; // offset 0x1144, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_SlideEffectRemap; // offset 0x1148, size 0x10, align 255 | MPropertyDescription
    CPiecewiseCurve m_GetupSpeedCurve; // offset 0x1158, size 0x40, align 8 | MPropertyDescription
    float32 m_flGetupBusyDuration; // offset 0x1198, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlidingRecoilReduction; // offset 0x119C, size 0x4, align 4 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // offset 0x11A0, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // offset 0x1240, size 0xA0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // offset 0x12E0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartSound; // offset 0x13C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLoopingSound; // offset 0x13D0, size 0x10, align 8
    CSoundEventName m_strStopSound; // offset 0x13E0, size 0x10, align 8
};
