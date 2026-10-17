#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0xD78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD70]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xD70, size 0x4, align 255
    char _pad_0D74[0x4]; // offset 0xD74
};
