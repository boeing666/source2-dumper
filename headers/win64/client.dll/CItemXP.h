#pragma once

class CItemXP : public C_BaseModelEntity /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA08]; // offset 0x0
    GameTime_t m_timeLaunch; // offset 0xA08, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flAttackableTime; // offset 0xA0C, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flEndAttackableTime; // offset 0xA10, size 0x4, align 255 | MNetworkEnable MNotSaved
    int32 m_nLaunchNum; // offset 0xA14, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0A18[0x30]; // offset 0xA18
};
