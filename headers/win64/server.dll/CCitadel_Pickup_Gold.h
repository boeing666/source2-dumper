#pragma once

class CCitadel_Pickup_Gold : public CCitadel_Pickup /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    int32 m_iGoldReward; // offset 0xB70, size 0x4, align 4
    char _pad_0B74[0xC]; // offset 0xB74
};
