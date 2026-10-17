#pragma once

class CDOTA_Modifier_GnollAssassin_EnvenomedWeapon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage_per_second; // offset 0x1AA8, size 0x4, align 4
    float32 non_hero_duration; // offset 0x1AAC, size 0x4, align 4
    float32 hero_duration; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
