#pragma once

class CDOTA_Modifier_Clinkz_Strafe : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 attack_speed_bonus; // offset 0x1AA8, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1AAC, size 0x4, align 4
    int32 archer_attack_speed_pct; // offset 0x1AB0, size 0x4, align 4
    float32 debuff_duration; // offset 0x1AB4, size 0x4, align 4
};
