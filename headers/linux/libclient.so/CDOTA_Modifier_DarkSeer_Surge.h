#pragma once

class CDOTA_Modifier_DarkSeer_Surge : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 speed_boost; // offset 0x1AA8, size 0x4, align 4
    float32 trail_radius; // offset 0x1AAC, size 0x4, align 4
    float32 trail_duration; // offset 0x1AB0, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x1AB4, size 0xC, align 4
    bool m_bTrailStarted; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
