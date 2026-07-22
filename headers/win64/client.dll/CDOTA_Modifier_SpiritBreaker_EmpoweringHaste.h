#pragma once

class CDOTA_Modifier_SpiritBreaker_EmpoweringHaste : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_movespeed_pct_self; // offset 0x1A58, size 0x4, align 4
    int32 bonus_movespeed_pct_allies; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_movespeed_pct_extra; // offset 0x1A60, size 0x4, align 4
    int32 duration; // offset 0x1A64, size 0x4, align 4
};
