#pragma once

class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 max_dmg_pct; // offset 0x1A58, size 0x4, align 4
    float32 max_vision_pct; // offset 0x1A5C, size 0x4, align 4
    bool heal_amp; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    float32 m_flDaytimeStart; // offset 0x1A64, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0x1A68, size 0x4, align 4
    bool m_bDaytimeNormal; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    float32 day_threshold; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
