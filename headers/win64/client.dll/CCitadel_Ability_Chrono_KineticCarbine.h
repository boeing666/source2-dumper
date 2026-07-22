#pragma once

class CCitadel_Ability_Chrono_KineticCarbine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bWantsSlow; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11D9[0x3]; // offset 0x11D9
    GameTime_t m_flLatchedTimeScaleFracChangeTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flLatchedTimeScaleFrac; // offset 0x11E0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSpeedBoostEndTime; // offset 0x11E4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flShotTimeScaleEndTime; // offset 0x11E8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_11EC[0x4]; // offset 0x11EC
    float32 m_flStoredPowerPct; // offset 0x11F0, size 0x4, align 4
    char _pad_11F4[0x504]; // offset 0x11F4
};
