#pragma once

class CCitadel_Ability_Jump : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1990, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_flLastTimeOnZipLine; // offset 0x14A8, size 0x4, align 255
    GameTime_t m_flLastOnGroundTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_flPhaseStartTime; // offset 0x14B0, size 0x4, align 255
    GameTime_t m_flJumpTime; // offset 0x14B4, size 0x4, align 255
    GameTime_t m_flWallJumpFatigueStartTime; // offset 0x14B8, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0x14BC, size 0x4, align 255
    Vector m_vCurrentWallNormal; // offset 0x14C0, size 0xC, align 4
    Vector m_vLastWallCollidedWithNormal; // offset 0x14CC, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal; // offset 0x14D8, size 0xC, align 4
    VectorWS m_vLastValidWallJumpNormal_PlayerPosition; // offset 0x14E4, size 0xC, align 4
    GameTime_t m_flLastWallJumpTime; // offset 0x14F0, size 0x4, align 255
    Vector m_vWallJumpFacingDir; // offset 0x14F4, size 0xC, align 4
    EWallJumpFacing m_eWallJumpFacing; // offset 0x1500, size 0x2, align 2
    char _pad_1502[0x2]; // offset 0x1502
    float32 m_flLastWallJumpFatigueStrength; // offset 0x1504, size 0x4, align 4
    EJumpType_t m_LastJumpType; // offset 0x1508, size 0x1, align 1
    bool m_bShouldCreateAirJumpEffects; // offset 0x1509, size 0x1, align 1
    char _pad_150A[0x2]; // offset 0x150A
    GameTime_t m_flDoubleJumpFailTime; // offset 0x150C, size 0x4, align 255
    ECitadelAbilityOrders m_eDoubleJumpFailReason; // offset 0x1510, size 0x4, align 4
    Vector m_vWallJumpNormalUsed; // offset 0x1514, size 0xC, align 4
    bool m_bResolvingAirJump; // offset 0x1520, size 0x1, align 1
    char _pad_1521[0x427]; // offset 0x1521
    CCitadelAutoScaledTime m_flDashJumpStartTime; // offset 0x1948, size 0x18, align 255
    CCitadelAutoScaledTime m_flDashJumpEndTime; // offset 0x1960, size 0x18, align 255
    bool m_bJumped; // offset 0x1978, size 0x1, align 1
    bool m_bCanDashJump; // offset 0x1979, size 0x1, align 1
    char _pad_197A[0x2]; // offset 0x197A
    int32 m_nDesiredAirJumpCount; // offset 0x197C, size 0x4, align 4
    int32 m_nExecutedAirJumpCount; // offset 0x1980, size 0x4, align 4
    bool m_bInSlideJump; // offset 0x1984, size 0x1, align 1
    int8 m_nConsecutiveAirJumps; // offset 0x1985, size 0x1, align 1
    int8 m_nConsecutiveWallJumps; // offset 0x1986, size 0x1, align 1
    char _pad_1987[0x1]; // offset 0x1987
    GameTime_t m_flLateralInputSuppressEndTime; // offset 0x1988, size 0x4, align 255
    char _pad_198C[0x4]; // offset 0x198C
};
