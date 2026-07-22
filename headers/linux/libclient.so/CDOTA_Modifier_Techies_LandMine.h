#pragma once

class CDOTA_Modifier_Techies_LandMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    float32 radius; // offset 0x1A64, size 0x4, align 4
    float32 proximity_threshold; // offset 0x1A68, size 0x4, align 4
    float32 damage; // offset 0x1A6C, size 0x4, align 4
    float32 activation_delay; // offset 0x1A70, size 0x4, align 4
    float32 outer_damage; // offset 0x1A74, size 0x4, align 4
    int32 min_distance; // offset 0x1A78, size 0x4, align 4
    bool bActivated; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    CountdownTimer m_Timer; // offset 0x1A80, size 0x18, align 8
};
