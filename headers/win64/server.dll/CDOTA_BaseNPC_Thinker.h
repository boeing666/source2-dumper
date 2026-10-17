#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x1998, size 0x1, align 1
    bool m_bSendToClients; // offset 0x1999, size 0x1, align 1
    char _pad_199A[0x6]; // offset 0x199A
};
