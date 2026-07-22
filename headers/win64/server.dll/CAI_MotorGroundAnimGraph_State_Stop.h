#pragma once

class CAI_MotorGroundAnimGraph_State_Stop : public CAI_MotorGroundAnimGraph_State /*0x0*/  // sizeof 0x80, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CRelativeTransform m_target; // offset 0x20, size 0x30, align 16
    char _pad_0050[0x20]; // offset 0x50
    bool m_bPathChanged; // offset 0x70, size 0x1, align 1
    bool m_bStoppingAtEntry; // offset 0x71, size 0x1, align 1
    char _pad_0072[0xE]; // offset 0x72
};
