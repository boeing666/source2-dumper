#pragma once

class CDOTA_Modifier_Nemesis_Curse : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 debuff_self; // offset 0x1AF8, size 0x4, align 4
    float32 debuff_enemy; // offset 0x1AFC, size 0x4, align 4
    int32 debuff_enemy_duration; // offset 0x1B00, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B04, size 0x4, align 4
};
