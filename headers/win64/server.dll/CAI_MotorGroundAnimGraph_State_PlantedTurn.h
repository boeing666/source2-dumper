#pragma once

class CAI_MotorGroundAnimGraph_State_PlantedTurn : public CAI_MotorGroundAnimGraph_State /*0x0*/  // sizeof 0x28, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool m_bRepathed; // offset 0x20, size 0x1, align 1
    bool m_bPathChanged; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x6]; // offset 0x22
};
