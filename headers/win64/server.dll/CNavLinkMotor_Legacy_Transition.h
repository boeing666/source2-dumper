#pragma once

class CNavLinkMotor_Legacy_Transition  // sizeof 0x30, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    AIMotorTransitionState_t m_nTransitionState; // offset 0x8, size 0x4, align 4
    VectorWS m_vNavLinkStartPos; // offset 0xC, size 0xC, align 4
    GameTime_t m_flNavLinkFaceStartTime; // offset 0x18, size 0x4, align 255
    bool m_bTransitionAnimgraphHasTicked; // offset 0x1C, size 0x1, align 1
    bool m_bIsTurning; // offset 0x1D, size 0x1, align 1
    bool m_bIsFromMovement; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
    CGlobalSymbol m_strMovementName; // offset 0x20, size 0x8, align 8
    CHandle< CAI_BaseNPC > m_hNPC; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
