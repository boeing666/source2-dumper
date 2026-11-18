#pragma once

class CDOTA_Modifier_Techies_LandMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    float32 radius; // offset 0x1B08, size 0x4, align 4
    float32 proximity_threshold; // offset 0x1B0C, size 0x4, align 4
    float32 damage; // offset 0x1B10, size 0x4, align 4
    float32 activation_delay; // offset 0x1B14, size 0x4, align 4
    float32 outer_damage; // offset 0x1B18, size 0x4, align 4
    int32 min_distance; // offset 0x1B1C, size 0x4, align 4
    bool bActivated; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
    CountdownTimer m_Timer; // offset 0x1B28, size 0x18, align 8
};
