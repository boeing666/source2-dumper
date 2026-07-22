#pragma once

class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    int32 m_nIntervalsElapsed; // offset 0x11D8, size 0x4, align 4
    GameTime_t m_NextShotTime; // offset 0x11DC, size 0x4, align 255
    float32 m_flDissipationRate; // offset 0x11E0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDissipationTime; // offset 0x11E4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flHeatTime; // offset 0x11E8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flOverheatSoundTime; // offset 0x11EC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bOverheating; // offset 0x11F0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11F1[0x2AF]; // offset 0x11F1
};
