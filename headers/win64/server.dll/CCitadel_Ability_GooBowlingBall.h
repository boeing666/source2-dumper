#pragma once

class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x20F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E40]; // offset 0x0
    int32 m_nAirJumpsLeft; // offset 0x1E40, size 0x4, align 4
    bool m_bIsRolling; // offset 0x1E44, size 0x1, align 1
    char _pad_1E45[0x3]; // offset 0x1E45
    CHandle< CCitadelViscousBall > m_hBall; // offset 0x1E48, size 0x4, align 4
    EViscousBowlingBallState_t m_eRollingState; // offset 0x1E4C, size 0x1, align 1
    char _pad_1E4D[0x3]; // offset 0x1E4D
    GameTime_t m_flNextStateTime; // offset 0x1E50, size 0x4, align 255
    GameTime_t m_flNextWallCheck; // offset 0x1E54, size 0x4, align 255
    GameTime_t m_flRollStartTime; // offset 0x1E58, size 0x4, align 255
    GameTime_t m_flWallExitTime; // offset 0x1E5C, size 0x4, align 255
    Vector m_vecWallExitVelocity; // offset 0x1E60, size 0xC, align 4
    char _pad_1E6C[0x28C]; // offset 0x1E6C
};
