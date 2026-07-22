#pragma once

class CAI_MotorGroundAnimGraph_State_Custom : public CAI_MotorGroundAnimGraph_State /*0x0*/  // sizeof 0x78, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool m_bFromMovement; // offset 0x20, size 0x1, align 1
    bool m_bWasMovingOffPath; // offset 0x21, size 0x1, align 1
    bool m_bRepathed; // offset 0x22, size 0x1, align 1
    char _pad_0023[0x5]; // offset 0x23
    AI_CustomMoveRequest m_request; // offset 0x28, size 0x50, align 255
};
