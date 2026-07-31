#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x1B88, size 0x1, align 1
    bool m_bSendToClients; // offset 0x1B89, size 0x1, align 1
    char _pad_1B8A[0x6]; // offset 0x1B8A
};
