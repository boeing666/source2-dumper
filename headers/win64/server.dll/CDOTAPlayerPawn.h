#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAF8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xAF8, size 0x4, align 255
    char _pad_0AFC[0x4]; // offset 0xAFC
};
