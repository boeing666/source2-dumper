#pragma once

class CDOTA_Modifier_Visage_Silent_As_The_GravePassive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movespeed_bonus; // offset 0x1AF8, size 0x4, align 4
    float32 fly_timer; // offset 0x1AFC, size 0x4, align 4
    bool m_bFlying; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    GameTime_t m_FlyAvailableTime; // offset 0x1B04, size 0x4, align 255
};
