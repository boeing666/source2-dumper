#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1D10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x1D0C, size 0x1, align 1
    bool m_bSendToClients; // offset 0x1D0D, size 0x1, align 1
    char _pad_1D0E[0x2]; // offset 0x1D0E
};
