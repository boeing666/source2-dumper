#pragma once

class CCitadel_Ability_Dash : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1220, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    float32 m_flDashAngle; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_GroundDashExecuteTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_GroundDashCancelExecuteTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nLastGroundDashTick; // offset 0x11E4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bTagCanActivateGroundDash; // offset 0x11E8, size 0x1, align 1
    char _pad_11E9[0x3]; // offset 0x11E9
    GameTime_t m_flAirDashCastTime; // offset 0x11EC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_flAirDashStartPos; // offset 0x11F0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAirDashDragStartTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveAirDashes; // offset 0x1200, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveDownDashes; // offset 0x1201, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bDownAirDash; // offset 0x1202, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1203[0x15]; // offset 0x1203
    CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // offset 0x1218, size 0x4, align 4
    GameTime_t m_flAirDashDelayedEffectsTime; // offset 0x121C, size 0x4, align 255
};
