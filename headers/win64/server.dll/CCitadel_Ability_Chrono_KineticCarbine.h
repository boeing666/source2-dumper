#pragma once

class CCitadel_Ability_Chrono_KineticCarbine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bWantsSlow; // offset 0xF70, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F71[0x3]; // offset 0xF71
    GameTime_t m_flLatchedTimeScaleFracChangeTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flLatchedTimeScaleFrac; // offset 0xF78, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSpeedBoostEndTime; // offset 0xF7C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flShotTimeScaleEndTime; // offset 0xF80, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_0F84[0x8]; // offset 0xF84
    float32 m_flStoredPowerPct; // offset 0xF8C, size 0x4, align 4
    char _pad_0F90[0x500]; // offset 0xF90
};
