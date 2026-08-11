#pragma once

class CItemXP : public CBaseModelEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7DC]; // offset 0x0
    GameTime_t m_timeLaunch; // offset 0x7DC, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flAttackableTime; // offset 0x7E0, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flEndAttackableTime; // offset 0x7E4, size 0x4, align 255 | MNetworkEnable MNotSaved
    int32 m_nLaunchNum; // offset 0x7E8, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_07EC[0x2C]; // offset 0x7EC
};
