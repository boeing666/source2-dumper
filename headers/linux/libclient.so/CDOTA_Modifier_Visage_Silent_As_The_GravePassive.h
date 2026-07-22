#pragma once

class CDOTA_Modifier_Visage_Silent_As_The_GravePassive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 movespeed_bonus; // offset 0x1A58, size 0x4, align 4
    float32 fly_timer; // offset 0x1A5C, size 0x4, align 4
    bool m_bFlying; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    GameTime_t m_FlyAvailableTime; // offset 0x1A64, size 0x4, align 255
};
