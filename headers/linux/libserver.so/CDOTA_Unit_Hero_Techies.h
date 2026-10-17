#pragma once

class CDOTA_Unit_Hero_Techies : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2300, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    bool m_bLastDeathFromSuicide; // offset 0x22F8, size 0x1, align 1
    char _pad_22F9[0x7]; // offset 0x22F9
};
