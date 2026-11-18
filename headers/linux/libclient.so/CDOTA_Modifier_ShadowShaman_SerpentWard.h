#pragma once

class CDOTA_Modifier_ShadowShaman_SerpentWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_attack_range; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_attack_targets; // offset 0x1B00, size 0x4, align 4
    bool is_mega_ward; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
};
