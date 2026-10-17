#pragma once

class CDOTA_Modifier_Leshrac_Pulse_Nova : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bFirst; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x17]; // offset 0x1AA9
    int32 damage_resistance; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
