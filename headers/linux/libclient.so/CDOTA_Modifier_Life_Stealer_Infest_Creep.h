#pragma once

class CDOTA_Modifier_Life_Stealer_Infest_Creep : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bChangedTeams; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 creep_max_hp_drain_pct_per_second; // offset 0x1A5C, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
