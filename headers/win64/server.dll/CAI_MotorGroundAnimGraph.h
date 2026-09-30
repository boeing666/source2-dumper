#pragma once

class CAI_MotorGroundAnimGraph : public IAI_Motor /*0x0*/  // sizeof 0xDA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x38]; // offset 0x0
    GameTime_t m_flStartWaitingForFacingTime; // offset 0x38, size 0x4, align 255
    char _pad_003C[0x674]; // offset 0x3C
    CGlobalSymbol m_sDesiredMovementGaitSetId; // offset 0x6B0, size 0x8, align 8
    CGlobalSymbol m_sDesiredMovementSettingsId; // offset 0x6B8, size 0x8, align 8
    CAI_MotorGroundAnimGraph::MovementGaitAndSpeed_t m_desiredMovementGait; // offset 0x6C0, size 0xC, align 4
    char _pad_06CC[0x4]; // offset 0x6CC
    CGlobalSymbol m_sCurrentMovementGaitSetId; // offset 0x6D0, size 0x8, align 8
    CGlobalSymbol m_sCurrentMovementSettingsId; // offset 0x6D8, size 0x8, align 8
    CAI_MotorGroundAnimGraph::MovementGaitAndSpeed_t m_currentMovementGait; // offset 0x6E0, size 0xC, align 4
    StanceType_t m_nDesiredStance; // offset 0x6EC, size 0x4, align 4
    StanceType_t m_nCurrentStance; // offset 0x6F0, size 0x4, align 4
    char _pad_06F4[0x4]; // offset 0x6F4
    CAI_MotorGroundAnimGraph::CState_Idle m_stateIdle; // offset 0x6F8, size 0x28, align 8
    CAI_MotorGroundAnimGraph::CState_IdleTurn m_stateIdleTurn; // offset 0x720, size 0x48, align 8
    CAI_MotorGroundAnimGraph::CState_Loop m_stateLoop; // offset 0x768, size 0x30, align 8
    CAI_MotorGroundAnimGraph::CState_Start m_stateStart; // offset 0x798, size 0x30, align 8
    char _pad_07C8[0x8]; // offset 0x7C8
    CAI_MotorGroundAnimGraph::CState_Stop m_stateStop; // offset 0x7D0, size 0xE0, align 16
    CAI_MotorGroundAnimGraph::CState_InstantStop m_stateInstantStop; // offset 0x8B0, size 0xE0, align 16
    CAI_MotorGroundAnimGraph::CState_Hop m_stateHop; // offset 0x990, size 0xE0, align 16
    CAI_MotorGroundAnimGraph::CState_Custom m_stateCustom; // offset 0xA70, size 0x88, align 8
    CAI_MotorGroundAnimGraph::CState_CustomMantle m_stateCustomMantle; // offset 0xAF8, size 0x38, align 8
    CAI_MotorGroundAnimGraph::CState_PlantedTurn m_statePlantedTurn; // offset 0xB30, size 0x30, align 8
    CAI_MotorGroundAnimGraph::CState_StrafeTransition m_stateStrafeTransition; // offset 0xB60, size 0x28, align 8
    CAI_MotorGroundAnimGraph::CState_PoseTransition m_statePoseTransition; // offset 0xB88, size 0x40, align 8
    CAI_MotorGroundAnimGraph::CState_Other m_stateOther; // offset 0xBC8, size 0x28, align 8
    char _pad_0BF0[0x18]; // offset 0xBF0
    int32 m_nCurrentState; // offset 0xC08, size 0x4, align 4
    float32 m_flDistanceCoveredInCurrentState; // offset 0xC0C, size 0x4, align 4
    bool m_bEnableAdvancedFeatures; // offset 0xC10, size 0x1, align 1
    bool m_bTeleported; // offset 0xC11, size 0x1, align 1
    bool m_bAllTransitionsBlocked; // offset 0xC12, size 0x1, align 1
    bool m_bIsAG2; // offset 0xC13, size 0x1, align 1
    bool m_bPathIsTooShort; // offset 0xC14, size 0x1, align 1
    char _pad_0C15[0x3]; // offset 0xC15
    AI_MotorGroundAnimGraph_Flags_t m_eFlags; // offset 0xC18, size 0x4, align 4
    VectorWS m_vPreviousPosition; // offset 0xC1C, size 0xC, align 4
    float32 m_flCurrentLean; // offset 0xC28, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0xC2C, size 0x4, align 4
    Vector m_vPathDirectionLS; // offset 0xC30, size 0xC, align 4
    float32 m_flCommittedStrafeAngle; // offset 0xC3C, size 0x4, align 4
    float32 m_flAvoidanceSpeedScale; // offset 0xC40, size 0x4, align 4
    CAI_MotorGroundAnimGraph::MovementGaitAndSpeed_t m_avoidanceMovementGait; // offset 0xC44, size 0xC, align 4
    char _pad_0C50[0x34]; // offset 0xC50
    CMotionTransform m_proceduralRootMotion; // offset 0xC84, size 0x10, align 4
    char _pad_0C94[0x4]; // offset 0xC94
    CAnimGraphControllerPtr m_pGraphController; // offset 0xC98, size 0x8, align 255
    CAnimGraphControllerPtr m_pAG1GraphController; // offset 0xCA0, size 0x8, align 255
    char _pad_0CA8[0xD0]; // offset 0xCA8
    Vector m_vPhysicsVelocity; // offset 0xD78, size 0xC, align 4
    char _pad_0D84[0x1C]; // offset 0xD84
};
