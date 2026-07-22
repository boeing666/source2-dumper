#pragma once

class CDOTA_Modifier_Sniper_TakeAim_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 slow; // offset 0x1A58, size 0x4, align 4
    int32 active_attack_range_bonus; // offset 0x1A5C, size 0x4, align 4
    int32 does_root; // offset 0x1A60, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A64, size 0x4, align 4
    int32 attack_speed; // offset 0x1A68, size 0x4, align 4
    float32 bonus_vision; // offset 0x1A6C, size 0x4, align 4
    float32 view_restrict; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x14]; // offset 0x1A74
};
