#pragma once

class CDOTA_Modifier_Dazzle_Poison_Touch : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 slow; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_slow; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B00, size 0x4, align 4
    float32 flAccummulatedBonusSlow; // offset 0x1B04, size 0x4, align 4
    int32 iAccummulatedBonusDamage; // offset 0x1B08, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1B0C, size 0x4, align 4
    int32 undispellable; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
