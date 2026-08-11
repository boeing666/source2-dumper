#pragma once

class CCitadel_Ability_Dash : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFA0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    float32 m_flDashAngle; // offset 0xF70, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_GroundDashExecuteTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_GroundDashCancelExecuteTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nLastGroundDashTick; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    bool m_bTagCanActivateGroundDash; // offset 0xF80, size 0x1, align 1
    char _pad_0F81[0x3]; // offset 0xF81
    GameTime_t m_flAirDashCastTime; // offset 0xF84, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_flAirDashStartPos; // offset 0xF88, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAirDashDragStartTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveAirDashes; // offset 0xF98, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    int8 m_nConsecutiveDownDashes; // offset 0xF99, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bDownAirDash; // offset 0xF9A, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F9B[0x1]; // offset 0xF9B
    GameTime_t m_flAirDashDelayedEffectsTime; // offset 0xF9C, size 0x4, align 255
};
