#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xA98, size 0x4, align 255
    char _pad_0A9C[0x4]; // offset 0xA9C
};
