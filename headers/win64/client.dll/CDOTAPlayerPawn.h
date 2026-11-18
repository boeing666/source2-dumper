#pragma once

class CDOTAPlayerPawn : public C_BasePlayerPawn /*0x0*/  // sizeof 0xE30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE28]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xE28, size 0x4, align 255
    char _pad_0E2C[0x4]; // offset 0xE2C
};
