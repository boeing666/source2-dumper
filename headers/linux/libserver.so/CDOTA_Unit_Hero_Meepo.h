#pragma once

class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2320, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    bool m_bRecursionGuard; // offset 0x22F8, size 0x1, align 1
    char _pad_22F9[0x1F]; // offset 0x22F9
    int32 m_nWhichMeepo; // offset 0x2318, size 0x4, align 4
    char _pad_231C[0x4]; // offset 0x231C
};
