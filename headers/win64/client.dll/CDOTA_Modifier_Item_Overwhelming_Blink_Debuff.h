#pragma once

class CDOTA_Modifier_Item_Overwhelming_Blink_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 caster_strength; // offset 0x1A58, size 0x4, align 4
    int32 movement_slow; // offset 0x1A5C, size 0x4, align 4
    int32 attack_slow; // offset 0x1A60, size 0x4, align 4
    float32 damage_pct_over_time; // offset 0x1A64, size 0x4, align 4
};
