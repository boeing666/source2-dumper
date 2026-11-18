#pragma once

class CDOTA_Modifier_NightStalker_Void : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movespeed_slow; // offset 0x1AF8, size 0x4, align 4
    int32 attackspeed_slow; // offset 0x1AFC, size 0x4, align 4
    float32 invisible_damage_pers; // offset 0x1B00, size 0x4, align 4
    float32 invisible_damage_tickrate; // offset 0x1B04, size 0x4, align 4
};
