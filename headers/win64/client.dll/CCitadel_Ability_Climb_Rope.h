#pragma once

class CCitadel_Ability_Climb_Rope : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CNetworkOriginQuantizedVector m_vTop; // offset 0x11D8, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1200[0x8]; // offset 0x1200
    CNetworkOriginQuantizedVector m_vBottom; // offset 0x1208, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1230[0x8]; // offset 0x1230
    GameTime_t m_flActivatePressTime; // offset 0x1238, size 0x4, align 255
    GameTime_t m_flDisconnectTime; // offset 0x123C, size 0x4, align 255
    GameTime_t m_flClimbStartTime; // offset 0x1240, size 0x4, align 255
    bool m_bNoDelayNeeded; // offset 0x1244, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x1245, size 0x1, align 1
    char _pad_1246[0x2]; // offset 0x1246
    Vector m_vLastPos; // offset 0x1248, size 0xC, align 4
    char _pad_1254[0x14]; // offset 0x1254
    bool m_bRequestStopClimbing; // offset 0x1268, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bRequestJumpToRoof; // offset 0x1269, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_126A[0x2]; // offset 0x126A
    GameTime_t m_flMoveDownStartTime; // offset 0x126C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EClimbRopeState_t m_eClimbState; // offset 0x1270, size 0x4, align 4 | MNetworkEnable
    char _pad_1274[0x1C]; // offset 0x1274
};
