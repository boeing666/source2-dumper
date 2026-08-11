#pragma once

class CDOTA_Modifier_Silencer_BrainDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 permanent_int_steal_range; // offset 0x1A78, size 0x4, align 4
    int32 permanent_int_steal_amount; // offset 0x1A7C, size 0x4, align 4
    int32 silenced_bonus_int_steal_amount; // offset 0x1A80, size 0x4, align 4
    float32 damage_pct; // offset 0x1A84, size 0x4, align 4
};
