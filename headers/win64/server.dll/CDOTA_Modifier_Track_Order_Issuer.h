#pragma once

class CDOTA_Modifier_Track_Order_Issuer : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    PlayerID_t m_nIssuerPlayerIndex; // offset 0x1AA8, size 0x4, align 255
    bool m_bTeamFirstCourier; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    GameTime_t[24] m_nPlayerCommandTime; // offset 0x1AB0, size 0x60, align 4
};
