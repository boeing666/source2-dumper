#pragma once

class CDOTAPlayerPawn : public C_BasePlayerPawn /*0x0*/  // sizeof 0xFB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB4]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xFB4, size 0x4, align 255
};
