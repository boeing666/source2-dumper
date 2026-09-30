#pragma once

struct CAI_MotorGroundAnimGraph::MovementGaitAndSpeed_t  // sizeof 0xC, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    SharedMovementGait_t m_eMovementGait; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flSpeed; // offset 0x4, size 0x4, align 4
    AI_MovementGaitRequestSource_t m_eSource; // offset 0x8, size 0x4, align 4
};
