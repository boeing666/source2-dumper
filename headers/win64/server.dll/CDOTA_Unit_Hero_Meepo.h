#pragma once

class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2048, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    bool m_bRecursionGuard; // offset 0x2020, size 0x1, align 1
    char _pad_2021[0x1F]; // offset 0x2021
    int32 m_nWhichMeepo; // offset 0x2040, size 0x4, align 4
    char _pad_2044[0x4]; // offset 0x2044
};
