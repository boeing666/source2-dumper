#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1B88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x1B80, size 0x1, align 1
    bool m_bSendToClients; // offset 0x1B81, size 0x1, align 1
    char _pad_1B82[0x6]; // offset 0x1B82
};
