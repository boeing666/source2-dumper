#pragma once

class CCitadel_Ability_Climb_Rope : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1548, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkOriginQuantizedVectorWS m_vTop; // offset 0x14A8, size 0x28, align 255
    char _pad_14D0[0x8]; // offset 0x14D0
    CNetworkOriginQuantizedVectorWS m_vBottom; // offset 0x14D8, size 0x28, align 255
    char _pad_1500[0x8]; // offset 0x1500
    GameTime_t m_flActivatePressTime; // offset 0x1508, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0x150C, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0x1510, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0x1514, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x1515, size 0x1, align 1
    char _pad_1516[0x2]; // offset 0x1516
    VectorWS m_vLastPos; // offset 0x1518, size 0xC, align 4
    char _pad_1524[0x14]; // offset 0x1524
    bool m_bRequestStopClimbing; // offset 0x1538, size 0x1, align 1
    bool m_bRequestJumpToRoof; // offset 0x1539, size 0x1, align 1
    char _pad_153A[0x2]; // offset 0x153A
    GameTime_t m_flMoveDownStartTime; // offset 0x153C, size 0x4, align 255
    EClimbRopeState_t m_eClimbState; // offset 0x1540, size 0x4, align 4
    char _pad_1544[0x4]; // offset 0x1544
};
