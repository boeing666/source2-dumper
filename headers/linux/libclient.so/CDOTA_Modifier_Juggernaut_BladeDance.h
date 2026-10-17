#pragma once

class CDOTA_Modifier_Juggernaut_BladeDance : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 blade_dance_crit_mult; // offset 0x1AA8, size 0x4, align 4
    int32 blade_dance_crit_chance; // offset 0x1AAC, size 0x4, align 4
    int32 blade_dance_lifesteal; // offset 0x1AB0, size 0x4, align 4
    bool m_bHasCrit; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
};
