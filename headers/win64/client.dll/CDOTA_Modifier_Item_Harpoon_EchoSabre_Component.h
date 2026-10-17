#pragma once

class CDOTA_Modifier_Item_Harpoon_EchoSabre_Component : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 slow_duration; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AAC, size 0x4, align 4
    bool bonus_speed; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 passive_cooldown; // offset 0x1AB4, size 0x4, align 4
};
