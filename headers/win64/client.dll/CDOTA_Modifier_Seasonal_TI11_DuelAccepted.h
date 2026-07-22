#pragma once

class CDOTA_Modifier_Seasonal_TI11_DuelAccepted : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    PlayerID_t m_nDuelOpponent; // offset 0x1A58, size 0x4, align 255
    char _pad_1A5C[0x4]; // offset 0x1A5C
};
