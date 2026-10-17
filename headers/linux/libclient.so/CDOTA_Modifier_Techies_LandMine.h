#pragma once

class CDOTA_Modifier_Techies_LandMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB4]; // offset 0x0
    float32 radius; // offset 0x1AB4, size 0x4, align 4
    float32 proximity_threshold; // offset 0x1AB8, size 0x4, align 4
    float32 damage; // offset 0x1ABC, size 0x4, align 4
    float32 activation_delay; // offset 0x1AC0, size 0x4, align 4
    float32 outer_damage; // offset 0x1AC4, size 0x4, align 4
    int32 min_distance; // offset 0x1AC8, size 0x4, align 4
    bool bActivated; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
    CountdownTimer m_Timer; // offset 0x1AD0, size 0x18, align 8
};
