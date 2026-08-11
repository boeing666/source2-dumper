#pragma once

class CDOTA_Modifier_DarkSeer_Surge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 speed_boost; // offset 0x1A78, size 0x4, align 4
    float32 trail_radius; // offset 0x1A7C, size 0x4, align 4
    float32 trail_duration; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x1A84, size 0xC, align 4
    bool m_bTrailStarted; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x7]; // offset 0x1A91
};
