#pragma once

class CDOTA_Ability_DarkCarnival_Pie : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6BC]; // offset 0x0
    int32 projectile_speed; // offset 0x6BC, size 0x4, align 4
    int32 golden_pie; // offset 0x6C0, size 0x4, align 4
    bool bounce; // offset 0x6C4, size 0x1, align 1
    char _pad_06C5[0x3]; // offset 0x6C5
};
