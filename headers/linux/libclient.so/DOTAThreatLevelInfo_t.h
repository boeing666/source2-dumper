#pragma once

struct DOTAThreatLevelInfo_t  // sizeof 0x38, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flKillability; // offset 0x30, size 0x4, align 4
    int32 m_nEntIndex; // offset 0x34, size 0x4, align 4
};
