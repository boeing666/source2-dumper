#pragma once

class CDOTA_Modifier_Juggernaut_BladeDance : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 blade_dance_crit_mult; // offset 0x1A78, size 0x4, align 4
    int32 blade_dance_crit_chance; // offset 0x1A7C, size 0x4, align 4
    int32 blade_dance_lifesteal; // offset 0x1A80, size 0x4, align 4
    bool m_bHasCrit; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
