#pragma once

class CDOTAPlayerPawn : public C_BasePlayerPawn /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF4C]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xF4C, size 0x4, align 255
};
