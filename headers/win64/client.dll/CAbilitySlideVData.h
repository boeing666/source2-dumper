#pragma once

class CAbilitySlideVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flMinAngleToConsiderASlope; // offset 0x1818, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeMaxAccSpeed; // offset 0x181C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeMaxAccSpeed; // offset 0x1820, size 0x4, align 4 | MPropertyDescription
    float32 m_flButtonPressWindow; // offset 0x1824, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnSpeed; // offset 0x1828, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMinSlopeAcceleration; // offset 0x182C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideMaxSlopeAcceleration; // offset 0x1830, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMinAngDiff; // offset 0x1834, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnMaxAngDiff; // offset 0x1838, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandedFlatGroundFrictionGraceTime; // offset 0x183C, size 0x4, align 4 | MPropertyDescription
    float32 m_flFlatGroundFrictionGraceTime; // offset 0x1840, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGroundGrace; // offset 0x1844, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionFlatGround; // offset 0x1848, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMinSlope; // offset 0x184C, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionMaxSlope; // offset 0x1850, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMinSlope; // offset 0x1854, size 0x4, align 4 | MPropertyDescription
    float32 m_flFrictionUphillMaxSlope; // offset 0x1858, size 0x4, align 4 | MPropertyDescription
    float32 m_flLandingSlopeScaleBias; // offset 0x185C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinTriggerSpeed; // offset 0x1860, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxTriggerSpeed; // offset 0x1864, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMinSpeed; // offset 0x1868, size 0x4, align 4 | MPropertyDescription
    float32 m_flBoostMaxSpeed; // offset 0x186C, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinActivationSpeed; // offset 0x1870, size 0x4, align 4 | MPropertyDescription
    float32 m_flMinSustainSpeed; // offset 0x1874, size 0x4, align 4 | MPropertyDescription
    float32 m_flSprintBoostSpeed; // offset 0x1878, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideStartTime; // offset 0x187C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideSpeed; // offset 0x1880, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFailSpeed; // offset 0x1884, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strDashSlideActivate; // offset 0x1888, size 0x10, align 8 | MPropertyDescription
    float32 m_flDashSlideFrictionTime; // offset 0x1898, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashSlideFriction; // offset 0x189C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDashMinActivationSpeed; // offset 0x18A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeDeg; // offset 0x18A4, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMaxSlopeDeg; // offset 0x18A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flAccMinSlopeScale; // offset 0x18AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideProbeForwardOffset; // offset 0x18B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlideActivationProbeForwardOffset; // offset 0x18B4, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxDistanceBetweenProbeSamples; // offset 0x18B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flInitialSlideUseForwardProbeTime; // offset 0x18BC, size 0x4, align 4 | MPropertyDescription
    float32 m_flCurrentSlopeSampleDistance; // offset 0x18C0, size 0x4, align 4 | MPropertyDescription
    float32 m_flSampleVelDiffStdDevScaleCutoff; // offset 0x18C4, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlopeFacingAngleToActivate; // offset 0x18C8, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJump; // offset 0x18CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragAfterJumpTime; // offset 0x18D0, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragMaxAngle; // offset 0x18D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flAirDragResetTime; // offset 0x18D8, size 0x4, align 4 | MPropertyDescription
    float32 m_flLateSlideJumpWindow; // offset 0x18DC, size 0x4, align 4 | MPropertyDescription
    CRemapFloat m_SlideEffectRemap; // offset 0x18E0, size 0x10, align 255 | MPropertyDescription
    CPiecewiseCurve m_GetupSpeedCurve; // offset 0x18F0, size 0x40, align 8 | MPropertyDescription
    float32 m_flGetupBusyDuration; // offset 0x1930, size 0x4, align 4 | MPropertyDescription
    float32 m_flSlidingRecoilReduction; // offset 0x1934, size 0x4, align 4 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // offset 0x1938, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // offset 0x19C0, size 0x88, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // offset 0x1A48, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartSound; // offset 0x1B28, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLoopingSound; // offset 0x1B38, size 0x10, align 8
    CSoundEventName m_strStopSound; // offset 0x1B48, size 0x10, align 8
};
