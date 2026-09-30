#pragma once

class CCitadel_Ability_Climb_Rope : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1790, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CNetworkOriginQuantizedVectorWS m_vTop; // offset 0x16D8, size 0x28, align 255
    char _pad_1700[0x8]; // offset 0x1700
    CNetworkOriginQuantizedVectorWS m_vBottom; // offset 0x1708, size 0x28, align 255
    char _pad_1730[0x8]; // offset 0x1730
    GameTime_t m_flActivatePressTime; // offset 0x1738, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0x173C, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0x1740, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0x1744, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x1745, size 0x1, align 1
    char _pad_1746[0x2]; // offset 0x1746
    VectorWS m_vLastPos; // offset 0x1748, size 0xC, align 4
    char _pad_1754[0x14]; // offset 0x1754
    bool m_bRequestStopClimbing; // offset 0x1768, size 0x1, align 1
    bool m_bRequestJumpToRoof; // offset 0x1769, size 0x1, align 1
    char _pad_176A[0x2]; // offset 0x176A
    GameTime_t m_flMoveDownStartTime; // offset 0x176C, size 0x4, align 255
    EClimbRopeState_t m_eClimbState; // offset 0x1770, size 0x4, align 4
    char _pad_1774[0x1C]; // offset 0x1774
};
