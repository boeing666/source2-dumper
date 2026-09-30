#pragma once

class CCitadel_Ability_Climb_Rope : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CNetworkOriginQuantizedVectorWS m_vTop; // offset 0x14A0, size 0x28, align 255
    char _pad_14C8[0x8]; // offset 0x14C8
    CNetworkOriginQuantizedVectorWS m_vBottom; // offset 0x14D0, size 0x28, align 255
    char _pad_14F8[0x8]; // offset 0x14F8
    GameTime_t m_flActivatePressTime; // offset 0x1500, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0x1504, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0x1508, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0x150C, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x150D, size 0x1, align 1
    char _pad_150E[0x2]; // offset 0x150E
    VectorWS m_vLastPos; // offset 0x1510, size 0xC, align 4
    char _pad_151C[0x14]; // offset 0x151C
    bool m_bRequestStopClimbing; // offset 0x1530, size 0x1, align 1
    bool m_bRequestJumpToRoof; // offset 0x1531, size 0x1, align 1
    char _pad_1532[0x2]; // offset 0x1532
    GameTime_t m_flMoveDownStartTime; // offset 0x1534, size 0x4, align 255
    EClimbRopeState_t m_eClimbState; // offset 0x1538, size 0x4, align 4
    char _pad_153C[0x4]; // offset 0x153C
};
