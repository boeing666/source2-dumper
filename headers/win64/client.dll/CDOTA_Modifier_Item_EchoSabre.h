#pragma once

class CDOTA_Modifier_Item_EchoSabre : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_intellect; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AB0, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_strength; // offset 0x1AB8, size 0x4, align 4
    float32 slow_duration; // offset 0x1ABC, size 0x4, align 4
    bool bonus_speed; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
