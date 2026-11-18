#pragma once

class CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 hp_leech_percent; // offset 0x1AF8, size 0x4, align 4
    int32 secondary_attack_damage; // offset 0x1AFC, size 0x4, align 4
    float32 crit_mult; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
