#pragma once

class CDOTAPlayerPawn : public CBasePlayerPawn /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    PlayerID_t m_nPlayerID; // offset 0xDD8, size 0x4, align 255
    char _pad_0DDC[0x4]; // offset 0xDDC
};
