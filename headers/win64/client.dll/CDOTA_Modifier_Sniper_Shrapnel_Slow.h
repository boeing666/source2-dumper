#pragma once

class CDOTA_Modifier_Sniper_Shrapnel_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 slow_movement_speed; // offset 0x1A58, size 0x4, align 4
    float32 shrapnel_damage; // offset 0x1A5C, size 0x4, align 4
    int32 fast_tick; // offset 0x1A60, size 0x4, align 4
    int32 m_nTracker; // offset 0x1A64, size 0x4, align 4
    bool bFirst; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
