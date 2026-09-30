#pragma once

class CItemXP : public C_BaseModelEntity /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    GameTime_t m_timeLaunch; // offset 0xC10, size 0x4, align 255 | MNotSaved
    GameTime_t m_flAttackableTime; // offset 0xC14, size 0x4, align 255 | MNotSaved
    GameTime_t m_flEndAttackableTime; // offset 0xC18, size 0x4, align 255 | MNotSaved
    int32 m_nLaunchNum; // offset 0xC1C, size 0x4, align 4 | MNotSaved
    char _pad_0C20[0x30]; // offset 0xC20
};
