#pragma once

class CAI_MotorGroundAnimGraph_State_IdleTurn : public CAI_MotorGroundAnimGraph_State /*0x0*/  // sizeof 0x48, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_eType; // offset 0x20, size 0x4, align 4
    VectorWS m_vOriginalTargetFacingPosition; // offset 0x24, size 0xC, align 4
    VectorWS m_vTargetFacingPosition; // offset 0x30, size 0xC, align 4
    float32 m_flOriginalAngleDelta; // offset 0x3C, size 0x4, align 4
    float32 m_flTurnSpeed; // offset 0x40, size 0x4, align 4
    bool m_bWasBlockIdleTurnTagActive; // offset 0x44, size 0x1, align 1
    bool m_bWasBlockIdleTagActive; // offset 0x45, size 0x1, align 1
    char _pad_0046[0x2]; // offset 0x46
};
