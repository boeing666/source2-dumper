#pragma once

class CAI_MotorGroundAnimGraph::CState_Custom : public CAI_MotorGroundAnimGraph::CState /*0x0*/  // sizeof 0x88, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bFromMovement; // offset 0x28, size 0x1, align 1
    bool m_bWasMovingOffPath; // offset 0x29, size 0x1, align 1
    bool m_bRepathed; // offset 0x2A, size 0x1, align 1
    char _pad_002B[0x5]; // offset 0x2B
    AI_CustomMoveRequest m_request; // offset 0x30, size 0x58, align 8
};
