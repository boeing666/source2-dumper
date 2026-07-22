#pragma once

class CDOTA_Modifier_Enchantress_Enchant_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 attack_range_bonus; // offset 0x1A58, size 0x4, align 4
    int32 bonus_health; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_attackspeed; // offset 0x1A60, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A64, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
