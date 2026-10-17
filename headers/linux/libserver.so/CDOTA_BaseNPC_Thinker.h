#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x1C78, size 0x1, align 1
    bool m_bSendToClients; // offset 0x1C79, size 0x1, align 1
    char _pad_1C7A[0x6]; // offset 0x1C7A
};
