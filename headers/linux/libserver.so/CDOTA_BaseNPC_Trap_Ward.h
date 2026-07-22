#pragma once

class CDOTA_BaseNPC_Trap_Ward : public CDOTA_BaseNPC_Creature /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D00]; // offset 0x0
    CUtlSymbolLarge m_iszDefaultAnim; // offset 0x1D00, size 0x8, align 8
    Vector m_vTrapTargetLocal; // offset 0x1D08, size 0xC, align 4
    char _pad_1D14[0x4]; // offset 0x1D14
};
