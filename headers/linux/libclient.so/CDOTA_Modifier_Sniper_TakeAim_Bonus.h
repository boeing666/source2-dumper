#pragma once

class CDOTA_Modifier_Sniper_TakeAim_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow; // offset 0x1A78, size 0x4, align 4
    int32 active_attack_range_bonus; // offset 0x1A7C, size 0x4, align 4
    int32 does_root; // offset 0x1A80, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A84, size 0x4, align 4
    int32 attack_speed; // offset 0x1A88, size 0x4, align 4
    float32 bonus_vision; // offset 0x1A8C, size 0x4, align 4
    float32 view_restrict; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x14]; // offset 0x1A94
};
