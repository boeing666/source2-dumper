#pragma once

class CDOTA_Modifier_Tiny_Insurmountable : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 str_to_slow_resist_pct; // offset 0x1A58, size 0x4, align 4
    int32 str_to_status_resist_pct; // offset 0x1A5C, size 0x4, align 4
};
