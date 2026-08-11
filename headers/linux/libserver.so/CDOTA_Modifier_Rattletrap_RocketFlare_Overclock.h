#pragma once

class CDOTA_Modifier_Rattletrap_RocketFlare_Overclock : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 rocket_flare_interval; // offset 0x1A78, size 0x4, align 4
    int32 rocket_flare_offset_pct; // offset 0x1A7C, size 0x4, align 4
    int32 rocket_flare_rockets; // offset 0x1A80, size 0x4, align 4
    int32 m_nRocketsFired; // offset 0x1A84, size 0x4, align 4
    float32 radius; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vOriginalTarget; // offset 0x1A8C, size 0xC, align 4
};
