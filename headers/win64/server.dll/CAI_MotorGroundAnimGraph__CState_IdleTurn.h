#pragma once

class CAI_MotorGroundAnimGraph::CState_IdleTurn : public CAI_MotorGroundAnimGraph::CState /*0x0*/  // sizeof 0x48, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CAI_MotorGroundAnimGraph::CState_IdleTurn::Type_t m_eType; // offset 0x28, size 0x4, align 4
    CAI_MotorGroundAnimGraph::CState_IdleTurn::Target_t m_target; // offset 0x2C, size 0x10, align 4
    float32 m_flOriginalAngleDelta; // offset 0x3C, size 0x4, align 4
    float32 m_flTurnSpeed; // offset 0x40, size 0x4, align 4
    bool m_bWasBlockIdleTagActive; // offset 0x44, size 0x1, align 1
    bool m_bHasExplicitTarget; // offset 0x45, size 0x1, align 1
    char _pad_0046[0x2]; // offset 0x46
};
