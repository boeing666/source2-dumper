#pragma once

class CDOTA_Modifier_Track_Order_Issuer : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    PlayerID_t m_nIssuerPlayerIndex; // offset 0x1A78, size 0x4, align 255
    bool m_bTeamFirstCourier; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    GameTime_t[24] m_nPlayerCommandTime; // offset 0x1A80, size 0x60, align 4
};
