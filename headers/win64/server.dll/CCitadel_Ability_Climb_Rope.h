#pragma once

class CCitadel_Ability_Climb_Rope : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CNetworkOriginQuantizedVector m_vTop; // offset 0xF70, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F98[0x8]; // offset 0xF98
    CNetworkOriginQuantizedVector m_vBottom; // offset 0xFA0, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0FC8[0x8]; // offset 0xFC8
    GameTime_t m_flActivatePressTime; // offset 0xFD0, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0xFD4, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0xFD8, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0xFDC, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0xFDD, size 0x1, align 1
    char _pad_0FDE[0x2]; // offset 0xFDE
    Vector m_vLastPos; // offset 0xFE0, size 0xC, align 4
    char _pad_0FEC[0x14]; // offset 0xFEC
    bool m_bRequestStopClimbing; // offset 0x1000, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bRequestJumpToRoof; // offset 0x1001, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1002[0x2]; // offset 0x1002
    GameTime_t m_flMoveDownStartTime; // offset 0x1004, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EClimbRopeState_t m_eClimbState; // offset 0x1008, size 0x4, align 4 | MNetworkEnable
    char _pad_100C[0x4]; // offset 0x100C
};
