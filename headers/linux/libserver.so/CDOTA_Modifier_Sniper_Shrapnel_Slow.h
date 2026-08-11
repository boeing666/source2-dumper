#pragma once

class CDOTA_Modifier_Sniper_Shrapnel_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow_movement_speed; // offset 0x1A78, size 0x4, align 4
    float32 shrapnel_damage; // offset 0x1A7C, size 0x4, align 4
    int32 fast_tick; // offset 0x1A80, size 0x4, align 4
    int32 m_nTracker; // offset 0x1A84, size 0x4, align 4
    bool bFirst; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
