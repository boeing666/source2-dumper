#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC88]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xC88, size 0x4, align 255
    char _pad_0C8C[0x4]; // offset 0xC8C
};
