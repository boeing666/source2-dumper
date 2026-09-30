#pragma once

class CAI_MotorGroundAnimGraph::CState_PoseTransition : public CAI_MotorGroundAnimGraph::CState /*0x0*/  // sizeof 0x40, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    StanceType_t m_nDesiredStance; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CGlobalSymbol m_sDesiredGaitSet; // offset 0x30, size 0x8, align 8
    CGlobalSymbol m_sPoseTransitionName; // offset 0x38, size 0x8, align 8
};
