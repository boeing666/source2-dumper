#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0x9B0, size 0x4, align 255
    char _pad_09B4[0x4]; // offset 0x9B4
};
