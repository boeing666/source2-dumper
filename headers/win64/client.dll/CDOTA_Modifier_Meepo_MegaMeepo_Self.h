#pragma once

class CDOTA_Modifier_Meepo_MegaMeepo_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 base_strength; // offset 0x1A58, size 0x4, align 4
    int32 base_int; // offset 0x1A5C, size 0x4, align 4
    int32 base_agi; // offset 0x1A60, size 0x4, align 4
    int32 stats_pct; // offset 0x1A64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hMegameepoFrame; // offset 0x1A68, size 0x4, align 4
    bool m_bWasOutOfGame; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
};
