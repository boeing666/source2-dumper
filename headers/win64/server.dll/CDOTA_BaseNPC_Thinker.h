#pragma once

class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x18A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    bool m_bSendToAllPlayers; // offset 0x18A0, size 0x1, align 1
    bool m_bSendToClients; // offset 0x18A1, size 0x1, align 1
    char _pad_18A2[0x6]; // offset 0x18A2
};
