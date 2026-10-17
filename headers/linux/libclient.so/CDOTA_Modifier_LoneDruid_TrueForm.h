#pragma once

class CDOTA_Modifier_LoneDruid_TrueForm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_armor; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_hp; // offset 0x1AAC, size 0x4, align 4
    float32 attack_speed_pct; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_slow_resistance; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
