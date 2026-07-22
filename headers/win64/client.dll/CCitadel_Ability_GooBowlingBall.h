#pragma once

class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18D8]; // offset 0x0
    int32 m_nAirJumpsLeft; // offset 0x18D8, size 0x4, align 4
    bool m_bIsRolling; // offset 0x18DC, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
    char _pad_18DD[0x3]; // offset 0x18DD
    CHandle< C_CitadelViscousBall > m_hBall; // offset 0x18E0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    EViscousBowlingBallState_t m_eRollingState; // offset 0x18E4, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_18E5[0x3]; // offset 0x18E5
    GameTime_t m_flNextStateTime; // offset 0x18E8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flNextWallCheck; // offset 0x18EC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flRollStartTime; // offset 0x18F0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flWallExitTime; // offset 0x18F4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vecWallExitVelocity; // offset 0x18F8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1904[0x8]; // offset 0x1904
    ParticleIndex_t m_nDirectionParticleIndex; // offset 0x190C, size 0x4, align 255
    char _pad_1910[0x280]; // offset 0x1910
};
