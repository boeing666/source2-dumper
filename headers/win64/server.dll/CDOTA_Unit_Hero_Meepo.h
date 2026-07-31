#pragma once

class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F08]; // offset 0x0
    bool m_bRecursionGuard; // offset 0x1F08, size 0x1, align 1
    char _pad_1F09[0x1F]; // offset 0x1F09
    int32 m_nWhichMeepo; // offset 0x1F28, size 0x4, align 4
    char _pad_1F2C[0x4]; // offset 0x1F2C
};
