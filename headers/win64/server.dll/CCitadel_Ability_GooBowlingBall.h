#pragma once

class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1670]; // offset 0x0
    int32 m_nAirJumpsLeft; // offset 0x1670, size 0x4, align 4
    bool m_bIsRolling; // offset 0x1674, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    char _pad_1675[0x3]; // offset 0x1675
    CHandle< CCitadelViscousBall > m_hBall; // offset 0x1678, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    EViscousBowlingBallState_t m_eRollingState; // offset 0x167C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_167D[0x3]; // offset 0x167D
    GameTime_t m_flNextStateTime; // offset 0x1680, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextWallCheck; // offset 0x1684, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flRollStartTime; // offset 0x1688, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flWallExitTime; // offset 0x168C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vecWallExitVelocity; // offset 0x1690, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_169C[0x28C]; // offset 0x169C
};
