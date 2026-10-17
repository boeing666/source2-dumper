#pragma once

class CDOTAPlayerPawn : public C_BasePlayerPawn /*0x0*/  // sizeof 0xDD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDC8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xDC8, size 0x4, align 255
    char _pad_0DCC[0x4]; // offset 0xDCC
};
