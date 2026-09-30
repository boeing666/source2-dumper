#pragma once

class CCitadel_Ability_Jump : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1988, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_flLastTimeOnZipLine; // offset 0x14A0, size 0x4, align 255
    GameTime_t m_flLastOnGroundTime; // offset 0x14A4, size 0x4, align 255
    GameTime_t m_flPhaseStartTime; // offset 0x14A8, size 0x4, align 255
    GameTime_t m_flJumpTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_flWallJumpFatigueStartTime; // offset 0x14B0, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0x14B4, size 0x4, align 255
    Vector m_vCurrentWallNormal; // offset 0x14B8, size 0xC, align 4
    Vector m_vLastWallCollidedWithNormal; // offset 0x14C4, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal; // offset 0x14D0, size 0xC, align 4
    VectorWS m_vLastValidWallJumpNormal_PlayerPosition; // offset 0x14DC, size 0xC, align 4
    GameTime_t m_flLastWallJumpTime; // offset 0x14E8, size 0x4, align 255
    Vector m_vWallJumpFacingDir; // offset 0x14EC, size 0xC, align 4
    EWallJumpFacing m_eWallJumpFacing; // offset 0x14F8, size 0x2, align 2
    char _pad_14FA[0x2]; // offset 0x14FA
    float32 m_flLastWallJumpFatigueStrength; // offset 0x14FC, size 0x4, align 4
    EJumpType_t m_LastJumpType; // offset 0x1500, size 0x1, align 1
    bool m_bShouldCreateAirJumpEffects; // offset 0x1501, size 0x1, align 1
    char _pad_1502[0x2]; // offset 0x1502
    GameTime_t m_flDoubleJumpFailTime; // offset 0x1504, size 0x4, align 255
    ECitadelAbilityOrders m_eDoubleJumpFailReason; // offset 0x1508, size 0x4, align 4
    Vector m_vWallJumpNormalUsed; // offset 0x150C, size 0xC, align 4
    bool m_bResolvingAirJump; // offset 0x1518, size 0x1, align 1
    char _pad_1519[0x427]; // offset 0x1519
    CCitadelAutoScaledTime m_flDashJumpStartTime; // offset 0x1940, size 0x18, align 255
    CCitadelAutoScaledTime m_flDashJumpEndTime; // offset 0x1958, size 0x18, align 255
    bool m_bJumped; // offset 0x1970, size 0x1, align 1
    bool m_bCanDashJump; // offset 0x1971, size 0x1, align 1
    char _pad_1972[0x2]; // offset 0x1972
    int32 m_nDesiredAirJumpCount; // offset 0x1974, size 0x4, align 4
    int32 m_nExecutedAirJumpCount; // offset 0x1978, size 0x4, align 4
    bool m_bInSlideJump; // offset 0x197C, size 0x1, align 1
    int8 m_nConsecutiveAirJumps; // offset 0x197D, size 0x1, align 1
    int8 m_nConsecutiveWallJumps; // offset 0x197E, size 0x1, align 1
    char _pad_197F[0x1]; // offset 0x197F
    GameTime_t m_flLateralInputSuppressEndTime; // offset 0x1980, size 0x4, align 255
    char _pad_1984[0x4]; // offset 0x1984
};
