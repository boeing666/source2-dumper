#pragma once

class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 max_dmg_pct; // offset 0x1AA8, size 0x4, align 4
    float32 max_vision_pct; // offset 0x1AAC, size 0x4, align 4
    bool heal_amp; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 m_flDaytimeStart; // offset 0x1AB4, size 0x4, align 4
    float32 m_flNighttimeStart; // offset 0x1AB8, size 0x4, align 4
    bool m_bDaytimeNormal; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 day_threshold; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
