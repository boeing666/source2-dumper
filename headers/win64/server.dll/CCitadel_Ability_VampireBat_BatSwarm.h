#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_iBonusBats; // offset 0xF70, size 0x4, align 4 | MNetworkEnable
    int32 m_iBatCountOnCast; // offset 0xF74, size 0x4, align 4 | MNetworkEnable
    float32 m_flChannelTime; // offset 0xF78, size 0x4, align 4 | MNetworkEnable
    bool m_bPauseChannel; // offset 0xF7C, size 0x1, align 1 | MNetworkEnable
    char _pad_0F7D[0x3]; // offset 0xF7D
    float32 m_flLastRemainingChannelTime; // offset 0xF80, size 0x4, align 4 | MNetworkEnable
    char _pad_0F84[0xC]; // offset 0xF84
    GameTime_t m_flNextBatTime; // offset 0xF90, size 0x4, align 255
    char _pad_0F94[0xB0C]; // offset 0xF94
};
