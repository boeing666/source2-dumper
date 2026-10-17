#pragma once

class CDOTA_Modifier_Sand_King_BurrowStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vPopupLocation; // offset 0x1AA8, size 0xC, align 4
    bool m_bTeleported; // offset 0x1AB4, size 0x1, align 1
    bool m_bPreviouslyBurrowed; // offset 0x1AB5, size 0x1, align 1
    char _pad_1AB6[0x2]; // offset 0x1AB6
};
