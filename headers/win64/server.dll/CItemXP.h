#pragma once

class CItemXP : public CBaseModelEntity /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D4]; // offset 0x0
    GameTime_t m_timeLaunch; // offset 0x8D4, size 0x4, align 255 | MNotSaved
    GameTime_t m_flAttackableTime; // offset 0x8D8, size 0x4, align 255 | MNotSaved
    GameTime_t m_flEndAttackableTime; // offset 0x8DC, size 0x4, align 255 | MNotSaved
    int32 m_nLaunchNum; // offset 0x8E0, size 0x4, align 4 | MNotSaved
    char _pad_08E4[0x2C]; // offset 0x8E4
};
