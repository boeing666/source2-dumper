#pragma once

class CAI_MotorGroundAnimGraph_State  // sizeof 0x20, align 0xFF [vtable abstract trivial_dtor] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    bool m_bIsActive; // offset 0x18, size 0x1, align 1
    bool m_bIsUpdating; // offset 0x19, size 0x1, align 1
    bool m_bIsTransitionAllowed; // offset 0x1A, size 0x1, align 1
    bool m_bIsSupported; // offset 0x1B, size 0x1, align 1
    int32 m_nTickActivated; // offset 0x1C, size 0x4, align 4
};
