#pragma once

class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    bool m_bRecursionGuard; // offset 0x1F00, size 0x1, align 1
    char _pad_1F01[0x1F]; // offset 0x1F01
    int32 m_nWhichMeepo; // offset 0x1F20, size 0x4, align 4
    char _pad_1F24[0x4]; // offset 0x1F24
};
