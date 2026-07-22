#pragma once

class CDOTA_Modifier_Leshrac_Pulse_Nova : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bFirst; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x17]; // offset 0x1A59
    int32 damage_resistance; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
