#pragma once

class CAbilitySlideVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flMinAngleToConsiderASlope; // offset 0x13A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeMaxAccSpeed; // offset 0x13A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeMaxAccSpeed; // offset 0x13A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flButtonPressWindow; // offset 0x13AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnSpeed; // offset 0x13B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeAcceleration; // offset 0x13B4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeAcceleration; // offset 0x13B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMinAngDiff; // offset 0x13BC, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMaxAngDiff; // offset 0x13C0, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandedFlatGroundFrictionGraceTime; // offset 0x13C4, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlatGroundFrictionGraceTime; // offset 0x13C8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGroundGrace; // offset 0x13CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGround; // offset 0x13D0, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMinSlope; // offset 0x13D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMaxSlope; // offset 0x13D8, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMinSlope; // offset 0x13DC, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMaxSlope; // offset 0x13E0, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandingSlopeScaleBias; // offset 0x13E4, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinTriggerSpeed; // offset 0x13E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxTriggerSpeed; // offset 0x13EC, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinSpeed; // offset 0x13F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxSpeed; // offset 0x13F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinActivationSpeed; // offset 0x13F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinSustainSpeed; // offset 0x13FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSprintBoostSpeed; // offset 0x1400, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideStartTime; // offset 0x1404, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideSpeed; // offset 0x1408, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFailSpeed; // offset 0x140C, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashSlideActivate; // offset 0x1410, size 0x10, align 8 | MPropertyDescription
    float32 m_flDashSlideFrictionTime; // offset 0x1420, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFriction; // offset 0x1424, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashMinActivationSpeed; // offset 0x1428, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeDeg; // offset 0x142C, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMaxSlopeDeg; // offset 0x1430, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeScale; // offset 0x1434, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideProbeForwardOffset; // offset 0x1438, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideActivationProbeForwardOffset; // offset 0x143C, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxDistanceBetweenProbeSamples; // offset 0x1440, size 0x4, align 4 | MPropertyDescription
    float32 m_flInitialSlideUseForwardProbeTime; // offset 0x1444, size 0x4, align 4 | MPropertyDescription
    float32 m_flCurrentSlopeSampleDistance; // offset 0x1448, size 0x4, align 4 | MPropertyDescription
    float32 m_flSampleVelDiffStdDevScaleCutoff; // offset 0x144C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlopeFacingAngleToActivate; // offset 0x1450, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJump; // offset 0x1454, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJumpTime; // offset 0x1458, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragMaxAngle; // offset 0x145C, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragResetTime; // offset 0x1460, size 0x4, align 4 | MPropertyDescription
    float32 m_flLateSlideJumpWindow; // offset 0x1464, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_SlideEffectRemap; // offset 0x1468, size 0x10, align 255 | MPropertyDescription
    CPiecewiseCurve m_GetupSpeedCurve; // offset 0x1478, size 0x40, align 8 | MPropertyDescription
    float32 m_flGetupBusyDuration; // offset 0x14B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlidingRecoilReduction; // offset 0x14BC, size 0x4, align 4 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // offset 0x14C0, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // offset 0x1548, size 0x88, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // offset 0x15D0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartSound; // offset 0x16B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLoopingSound; // offset 0x16C0, size 0x10, align 8
    CSoundEventName m_strStopSound; // offset 0x16D0, size 0x10, align 8
};
