#pragma once

class CDOTA_Modifier_Item_Overwhelming_Blink_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 caster_strength; // offset 0x1AA8, size 0x4, align 4
    int32 movement_slow; // offset 0x1AAC, size 0x4, align 4
    int32 attack_slow; // offset 0x1AB0, size 0x4, align 4
    float32 damage_pct_over_time; // offset 0x1AB4, size 0x4, align 4
};
