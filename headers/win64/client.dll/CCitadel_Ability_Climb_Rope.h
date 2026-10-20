#pragma once

class CCitadel_Ability_Climb_Rope : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CNetworkOriginQuantizedVectorWS m_vTop; // offset 0x16E0, size 0x28, align 255
    char _pad_1708[0x8]; // offset 0x1708
    CNetworkOriginQuantizedVectorWS m_vBottom; // offset 0x1710, size 0x28, align 255
    char _pad_1738[0x8]; // offset 0x1738
    GameTime_t m_flActivatePressTime; // offset 0x1740, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0x1744, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0x1748, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0x174C, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x174D, size 0x1, align 1
    char _pad_174E[0x2]; // offset 0x174E
    VectorWS m_vLastPos; // offset 0x1750, size 0xC, align 4
    char _pad_175C[0x14]; // offset 0x175C
    bool m_bRequestStopClimbing; // offset 0x1770, size 0x1, align 1
    bool m_bRequestJumpToRoof; // offset 0x1771, size 0x1, align 1
    char _pad_1772[0x2]; // offset 0x1772
    GameTime_t m_flMoveDownStartTime; // offset 0x1774, size 0x4, align 255
    EClimbRopeState_t m_eClimbState; // offset 0x1778, size 0x4, align 4
    char _pad_177C[0x1C]; // offset 0x177C
};
