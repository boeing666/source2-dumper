#pragma once

class CDOTA_Modifier_Clinkz_Strafe : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 attack_speed_bonus; // offset 0x1A78, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A7C, size 0x4, align 4
    int32 archer_attack_speed_pct; // offset 0x1A80, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A84, size 0x4, align 4
};
