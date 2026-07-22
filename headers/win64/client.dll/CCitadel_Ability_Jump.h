#pragma once

class CCitadel_Ability_Jump : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1598, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    GameTime_t m_flLastTimeOnZipLine; // offset 0x11D8, size 0x4, align 255
    GameTime_t m_flLastOnGroundTime; // offset 0x11DC, size 0x4, align 255
    GameTime_t m_flPhaseStartTime; // offset 0x11E0, size 0x4, align 255
    GameTime_t m_flJumpTime; // offset 0x11E4, size 0x4, align 255
    GameTime_t m_flWallJumpFatigueStartTime; // offset 0x11E8, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0x11EC, size 0x4, align 255
    Vector m_vCurrentWallNormal; // offset 0x11F0, size 0xC, align 4
    Vector m_vLastWallCollidedWithNormal; // offset 0x11FC, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal; // offset 0x1208, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal_PlayerPosition; // offset 0x1214, size 0xC, align 4
    GameTime_t m_flLastWallJumpTime; // offset 0x1220, size 0x4, align 255
    Vector m_vWallJumpFacingDir; // offset 0x1224, size 0xC, align 4
    EWallJumpFacing m_eWallJumpFacing; // offset 0x1230, size 0x2, align 2
    char _pad_1232[0x2]; // offset 0x1232
    float32 m_flLastWallJumpFatigueStrength; // offset 0x1234, size 0x4, align 4
    EJumpType_t m_LastJumpType; // offset 0x1238, size 0x1, align 1
    bool m_bShouldCreateAirJumpEffects; // offset 0x1239, size 0x1, align 1
    char _pad_123A[0x2]; // offset 0x123A
    GameTime_t m_flDoubleJumpFailTime; // offset 0x123C, size 0x4, align 255
    ECitadelAbilityOrders m_eDoubleJumpFailReason; // offset 0x1240, size 0x4, align 4
    Vector m_vWallJumpNormalUsed; // offset 0x1244, size 0xC, align 4
    char _pad_1250[0x300]; // offset 0x1250
    CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // offset 0x1550, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // offset 0x1568, size 0x18, align 255 | MNetworkEnable
    bool m_bJumped; // offset 0x1580, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bCanDashJump; // offset 0x1581, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1582[0x2]; // offset 0x1582
    int32 m_nDesiredAirJumpCount; // offset 0x1584, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nExecutedAirJumpCount; // offset 0x1588, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInSlideJump; // offset 0x158C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveAirJumps; // offset 0x158D, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveWallJumps; // offset 0x158E, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_158F[0x1]; // offset 0x158F
    GameTime_t m_flLateralInputSuppressEndTime; // offset 0x1590, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1594[0x4]; // offset 0x1594
};
