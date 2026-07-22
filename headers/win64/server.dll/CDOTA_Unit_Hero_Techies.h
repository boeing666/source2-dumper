#pragma once

class CDOTA_Unit_Hero_Techies : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    bool m_bLastDeathFromSuicide; // offset 0x1F00, size 0x1, align 1
    char _pad_1F01[0x7]; // offset 0x1F01
};
