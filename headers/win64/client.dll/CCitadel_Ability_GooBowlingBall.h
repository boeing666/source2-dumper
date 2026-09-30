#pragma once

class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2330, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2078]; // offset 0x0
    int32 m_nAirJumpsLeft; // offset 0x2078, size 0x4, align 4
    bool m_bIsRolling; // offset 0x207C, size 0x1, align 1
    char _pad_207D[0x3]; // offset 0x207D
    CHandle< C_CitadelViscousBall > m_hBall; // offset 0x2080, size 0x4, align 4
    EViscousBowlingBallState_t m_eRollingState; // offset 0x2084, size 0x1, align 1
    char _pad_2085[0x3]; // offset 0x2085
    GameTime_t m_flNextStateTime; // offset 0x2088, size 0x4, align 255
    GameTime_t m_flNextWallCheck; // offset 0x208C, size 0x4, align 255
    GameTime_t m_flRollStartTime; // offset 0x2090, size 0x4, align 255
    GameTime_t m_flWallExitTime; // offset 0x2094, size 0x4, align 255
    Vector m_vecWallExitVelocity; // offset 0x2098, size 0xC, align 4
    char _pad_20A4[0x8]; // offset 0x20A4
    ParticleIndex_t m_nDirectionParticleIndex; // offset 0x20AC, size 0x4, align 255
    char _pad_20B0[0x280]; // offset 0x20B0
};
