#pragma once

class CCitadel_Ability_VampireBat_BatSwarm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    int32 m_iBonusBats; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable
    int32 m_iBatCountOnCast; // offset 0x11DC, size 0x4, align 4 | MNetworkEnable
    float32 m_flChannelTime; // offset 0x11E0, size 0x4, align 4 | MNetworkEnable
    bool m_bPauseChannel; // offset 0x11E4, size 0x1, align 1 | MNetworkEnable
    char _pad_11E5[0x3]; // offset 0x11E5
    float32 m_flLastRemainingChannelTime; // offset 0x11E8, size 0x4, align 4 | MNetworkEnable
    char _pad_11EC[0xC]; // offset 0x11EC
    GameTime_t m_flNextBatTime; // offset 0x11F8, size 0x4, align 255
    char _pad_11FC[0xB0C]; // offset 0x11FC
};
