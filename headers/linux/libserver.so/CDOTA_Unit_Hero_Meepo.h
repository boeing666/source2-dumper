#pragma once

class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    bool m_bRecursionGuard; // offset 0x2390, size 0x1, align 1
    char _pad_2391[0x1F]; // offset 0x2391
    int32 m_nWhichMeepo; // offset 0x23B0, size 0x4, align 4
    char _pad_23B4[0x4]; // offset 0x23B4
};
