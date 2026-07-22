#pragma once

class CDOTA_Unit_Hero_Legion_Commander : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x21E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21D8]; // offset 0x0
    uint32 m_unDuelsWon; // offset 0x21D8, size 0x4, align 4
    char _pad_21DC[0x4]; // offset 0x21DC
};
