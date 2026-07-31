#pragma once

class CDOTA_Modifier_Dazzle_Poison_Touch : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow; // offset 0x1A78, size 0x4, align 4
    float32 bonus_slow; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A80, size 0x4, align 4
    float32 flAccummulatedBonusSlow; // offset 0x1A84, size 0x4, align 4
    int32 iAccummulatedBonusDamage; // offset 0x1A88, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A8C, size 0x4, align 4
};
