#pragma once

class CAbilitySlideVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1758, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMinAngleToConsiderASlope; // offset 0x13E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeMaxAccSpeed; // offset 0x13EC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeMaxAccSpeed; // offset 0x13F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flButtonPressWindow; // offset 0x13F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnSpeed; // offset 0x13F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeAcceleration; // offset 0x13FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeAcceleration; // offset 0x1400, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMinAngDiff; // offset 0x1404, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMaxAngDiff; // offset 0x1408, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandedFlatGroundFrictionGraceTime; // offset 0x140C, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlatGroundFrictionGraceTime; // offset 0x1410, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGroundGrace; // offset 0x1414, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGround; // offset 0x1418, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMinSlope; // offset 0x141C, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMaxSlope; // offset 0x1420, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMinSlope; // offset 0x1424, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMaxSlope; // offset 0x1428, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandingSlopeScaleBias; // offset 0x142C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinTriggerSpeed; // offset 0x1430, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxTriggerSpeed; // offset 0x1434, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinSpeed; // offset 0x1438, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxSpeed; // offset 0x143C, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinActivationSpeed; // offset 0x1440, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinSustainSpeed; // offset 0x1444, size 0x4, align 4 | MPropertyDescription
    float32 m_flSprintBoostSpeed; // offset 0x1448, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideStartTime; // offset 0x144C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideSpeed; // offset 0x1450, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFailSpeed; // offset 0x1454, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashSlideActivate; // offset 0x1458, size 0x10, align 8 | MPropertyDescription
    float32 m_flDashSlideFrictionTime; // offset 0x1468, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFriction; // offset 0x146C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashMinActivationSpeed; // offset 0x1470, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeDeg; // offset 0x1474, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMaxSlopeDeg; // offset 0x1478, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeScale; // offset 0x147C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideProbeForwardOffset; // offset 0x1480, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideActivationProbeForwardOffset; // offset 0x1484, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxDistanceBetweenProbeSamples; // offset 0x1488, size 0x4, align 4 | MPropertyDescription
    float32 m_flInitialSlideUseForwardProbeTime; // offset 0x148C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCurrentSlopeSampleDistance; // offset 0x1490, size 0x4, align 4 | MPropertyDescription
    float32 m_flSampleVelDiffStdDevScaleCutoff; // offset 0x1494, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlopeFacingAngleToActivate; // offset 0x1498, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJump; // offset 0x149C, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJumpTime; // offset 0x14A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragMaxAngle; // offset 0x14A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragResetTime; // offset 0x14A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flLateSlideJumpWindow; // offset 0x14AC, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_SlideEffectRemap; // offset 0x14B0, size 0x10, align 255 | MPropertyDescription
    CPiecewiseCurve m_GetupSpeedCurve; // offset 0x14C0, size 0x40, align 8 | MPropertyDescription
    float32 m_flGetupBusyDuration; // offset 0x1500, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlidingRecoilReduction; // offset 0x1504, size 0x4, align 4 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // offset 0x1508, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // offset 0x15A8, size 0xA0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // offset 0x1648, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartSound; // offset 0x1728, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLoopingSound; // offset 0x1738, size 0x10, align 8
    CSoundEventName m_strStopSound; // offset 0x1748, size 0x10, align 8
};
