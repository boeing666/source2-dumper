#pragma once

class C_DOTA_BaseNPC_Creature : public C_DOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1B50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B48]; // offset 0x0
    bool m_bIsCurrentlyChanneling; // offset 0x1B48, size 0x1, align 1
    char _pad_1B49[0x3]; // offset 0x1B49
    float32 m_flChannelCycle; // offset 0x1B4C, size 0x4, align 4
};
