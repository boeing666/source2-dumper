#pragma once

class CAI_MotorGroundAnimGraph::CState_Stop : public CAI_MotorGroundAnimGraph::CState /*0x0*/  // sizeof 0xE0, align 0x10 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CRelativeTransform m_target; // offset 0x30, size 0x60, align 16
    char _pad_0090[0x20]; // offset 0x90
    bool m_bPathChanged; // offset 0xB0, size 0x1, align 1
    bool m_bStoppingAtEntry; // offset 0xB1, size 0x1, align 1
    char _pad_00B2[0x2E]; // offset 0xB2
};
