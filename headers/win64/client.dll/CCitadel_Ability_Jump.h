#pragma once

class CCitadel_Ability_Jump : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BC0, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    GameTime_t m_flLastTimeOnZipLine; // offset 0x16D8, size 0x4, align 255
    GameTime_t m_flLastOnGroundTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_flPhaseStartTime; // offset 0x16E0, size 0x4, align 255
    GameTime_t m_flJumpTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_flWallJumpFatigueStartTime; // offset 0x16E8, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0x16EC, size 0x4, align 255
    Vector m_vCurrentWallNormal; // offset 0x16F0, size 0xC, align 4
    Vector m_vLastWallCollidedWithNormal; // offset 0x16FC, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal; // offset 0x1708, size 0xC, align 4
    VectorWS m_vLastValidWallJumpNormal_PlayerPosition; // offset 0x1714, size 0xC, align 4
    GameTime_t m_flLastWallJumpTime; // offset 0x1720, size 0x4, align 255
    Vector m_vWallJumpFacingDir; // offset 0x1724, size 0xC, align 4
    EWallJumpFacing m_eWallJumpFacing; // offset 0x1730, size 0x2, align 2
    char _pad_1732[0x2]; // offset 0x1732
    float32 m_flLastWallJumpFatigueStrength; // offset 0x1734, size 0x4, align 4
    EJumpType_t m_LastJumpType; // offset 0x1738, size 0x1, align 1
    bool m_bShouldCreateAirJumpEffects; // offset 0x1739, size 0x1, align 1
    char _pad_173A[0x2]; // offset 0x173A
    GameTime_t m_flDoubleJumpFailTime; // offset 0x173C, size 0x4, align 255
    ECitadelAbilityOrders m_eDoubleJumpFailReason; // offset 0x1740, size 0x4, align 4
    Vector m_vWallJumpNormalUsed; // offset 0x1744, size 0xC, align 4
    bool m_bResolvingAirJump; // offset 0x1750, size 0x1, align 1
    char _pad_1751[0x427]; // offset 0x1751
    CCitadelAutoScaledTime m_flDashJumpStartTime; // offset 0x1B78, size 0x18, align 255
    CCitadelAutoScaledTime m_flDashJumpEndTime; // offset 0x1B90, size 0x18, align 255
    bool m_bJumped; // offset 0x1BA8, size 0x1, align 1
    bool m_bCanDashJump; // offset 0x1BA9, size 0x1, align 1
    char _pad_1BAA[0x2]; // offset 0x1BAA
    int32 m_nDesiredAirJumpCount; // offset 0x1BAC, size 0x4, align 4
    int32 m_nExecutedAirJumpCount; // offset 0x1BB0, size 0x4, align 4
    bool m_bInSlideJump; // offset 0x1BB4, size 0x1, align 1
    int8 m_nConsecutiveAirJumps; // offset 0x1BB5, size 0x1, align 1
    int8 m_nConsecutiveWallJumps; // offset 0x1BB6, size 0x1, align 1
    char _pad_1BB7[0x1]; // offset 0x1BB7
    GameTime_t m_flLateralInputSuppressEndTime; // offset 0x1BB8, size 0x4, align 255
    char _pad_1BBC[0x4]; // offset 0x1BBC
};
