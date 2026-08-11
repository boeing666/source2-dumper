#pragma once

class CCitadel_Ability_Jump : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_flLastTimeOnZipLine; // offset 0xF70, size 0x4, align 255
    GameTime_t m_flLastOnGroundTime; // offset 0xF74, size 0x4, align 255
    GameTime_t m_flPhaseStartTime; // offset 0xF78, size 0x4, align 255
    GameTime_t m_flJumpTime; // offset 0xF7C, size 0x4, align 255
    GameTime_t m_flWallJumpFatigueStartTime; // offset 0xF80, size 0x4, align 255
    GameTime_t m_flLastThinkTime; // offset 0xF84, size 0x4, align 255
    Vector m_vCurrentWallNormal; // offset 0xF88, size 0xC, align 4
    Vector m_vLastWallCollidedWithNormal; // offset 0xF94, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal; // offset 0xFA0, size 0xC, align 4
    Vector m_vLastValidWallJumpNormal_PlayerPosition; // offset 0xFAC, size 0xC, align 4
    GameTime_t m_flLastWallJumpTime; // offset 0xFB8, size 0x4, align 255
    Vector m_vWallJumpFacingDir; // offset 0xFBC, size 0xC, align 4
    EWallJumpFacing m_eWallJumpFacing; // offset 0xFC8, size 0x2, align 2
    char _pad_0FCA[0x2]; // offset 0xFCA
    float32 m_flLastWallJumpFatigueStrength; // offset 0xFCC, size 0x4, align 4
    EJumpType_t m_LastJumpType; // offset 0xFD0, size 0x1, align 1
    bool m_bShouldCreateAirJumpEffects; // offset 0xFD1, size 0x1, align 1
    char _pad_0FD2[0x2]; // offset 0xFD2
    GameTime_t m_flDoubleJumpFailTime; // offset 0xFD4, size 0x4, align 255
    ECitadelAbilityOrders m_eDoubleJumpFailReason; // offset 0xFD8, size 0x4, align 4
    Vector m_vWallJumpNormalUsed; // offset 0xFDC, size 0xC, align 4
    char _pad_0FE8[0x300]; // offset 0xFE8
    CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // offset 0x12E8, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // offset 0x1300, size 0x18, align 255 | MNetworkEnable
    bool m_bJumped; // offset 0x1318, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bCanDashJump; // offset 0x1319, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_131A[0x2]; // offset 0x131A
    int32 m_nDesiredAirJumpCount; // offset 0x131C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nExecutedAirJumpCount; // offset 0x1320, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bInSlideJump; // offset 0x1324, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveAirJumps; // offset 0x1325, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveWallJumps; // offset 0x1326, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1327[0x1]; // offset 0x1327
    GameTime_t m_flLateralInputSuppressEndTime; // offset 0x1328, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_132C[0x4]; // offset 0x132C
};
