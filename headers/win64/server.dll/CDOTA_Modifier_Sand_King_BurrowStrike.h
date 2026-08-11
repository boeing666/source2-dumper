#pragma once

class CDOTA_Modifier_Sand_King_BurrowStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vPopupLocation; // offset 0x1A78, size 0xC, align 4
    bool m_bTeleported; // offset 0x1A84, size 0x1, align 1
    bool m_bPreviouslyBurrowed; // offset 0x1A85, size 0x1, align 1
    char _pad_1A86[0x2]; // offset 0x1A86
};
