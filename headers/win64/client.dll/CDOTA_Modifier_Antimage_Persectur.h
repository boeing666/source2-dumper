#pragma once

class CDOTA_Modifier_Antimage_Persectur : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mana_threshold; // offset 0x1A78, size 0x4, align 4
    float32 move_slow_min; // offset 0x1A7C, size 0x4, align 4
    float32 move_slow_max; // offset 0x1A80, size 0x4, align 4
    float32 slow_duration; // offset 0x1A84, size 0x4, align 4
};
