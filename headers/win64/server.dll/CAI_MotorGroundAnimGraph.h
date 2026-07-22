#pragma once

class CAI_MotorGroundAnimGraph  // sizeof 0x720, align 0xFF (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // offset 0x8, size 0x20, align 255
    CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // offset 0x28, size 0x48, align 255
    CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // offset 0x70, size 0x28, align 255
    CAI_MotorGroundAnimGraph_State_Start m_stateStart; // offset 0x98, size 0x28, align 255
    CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // offset 0xC0, size 0x80, align 255
    CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // offset 0x140, size 0x80, align 255
    CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // offset 0x1C0, size 0x80, align 255
    CAI_MotorGroundAnimGraph_State_Custom m_stateCustom; // offset 0x240, size 0x78, align 255
    CAI_MotorGroundAnimGraph_State_CustomMantle m_stateCustomMantle; // offset 0x2B8, size 0x30, align 255
    CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // offset 0x2E8, size 0x28, align 255
    CAI_MotorGroundAnimGraph_State_Other m_stateOther; // offset 0x310, size 0x28, align 255
    char _pad_0338[0x18]; // offset 0x338
    int32 m_nCurrentState; // offset 0x350, size 0x4, align 4
    float32 m_flDistanceCoveredInCurrentState; // offset 0x354, size 0x4, align 4
    bool m_bEnableStop; // offset 0x358, size 0x1, align 1
    bool m_bEnableStart; // offset 0x359, size 0x1, align 1
    bool m_bHadPath; // offset 0x35A, size 0x1, align 1
    bool m_bEnableAdvancedFeatures; // offset 0x35B, size 0x1, align 1
    bool m_bTeleported; // offset 0x35C, size 0x1, align 1
    bool m_bAllTransitionsBlocked; // offset 0x35D, size 0x1, align 1
    bool m_bIsAG2; // offset 0x35E, size 0x1, align 1
    char _pad_035F[0x1]; // offset 0x35F
    AI_MotorGroundAnimGraph_Flags_t m_eFlags; // offset 0x360, size 0x4, align 4
    VectorWS m_vPreviousPosition; // offset 0x364, size 0xC, align 4
    Vector m_vPreviousMoveDirection; // offset 0x370, size 0xC, align 4
    char _pad_037C[0x4]; // offset 0x37C
    float32 m_flCurrentLean; // offset 0x380, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x384, size 0x4, align 4
    float32 m_flMovementDesiredHeading; // offset 0x388, size 0x4, align 4
    RotationVector m_vDesiredMovementHeadingChangeVelocity; // offset 0x38C, size 0xC, align 4
    CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // offset 0x398, size 0x14, align 255
    char _pad_03AC[0x2DC]; // offset 0x3AC
    CMotionTransform m_proceduralRootMotion; // offset 0x688, size 0x10, align 4
    CAI_GroundLocomotion_GraphController* m_pGraphController; // offset 0x698, size 0x8, align 8 | MSaveOpsForField
    CAI_GroundLocomotion_AG1_GraphController* m_pAG1GraphController; // offset 0x6A0, size 0x8, align 8 | MSaveOpsForField
    char _pad_06A8[0x78]; // offset 0x6A8
};
