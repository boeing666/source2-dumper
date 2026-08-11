#pragma once

class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1238, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_nIntervalsElapsed; // offset 0xF70, size 0x4, align 4
    GameTime_t m_NextShotTime; // offset 0xF74, size 0x4, align 255
    float32 m_flDissipationRate; // offset 0xF78, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDissipationTime; // offset 0xF7C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flHeatTime; // offset 0xF80, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flOverheatSoundTime; // offset 0xF84, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bOverheating; // offset 0xF88, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F89[0x2AF]; // offset 0xF89
};
