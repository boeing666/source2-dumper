#pragma once

class CDOTA_Modifier_Snapfire_Scatterblast_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bIsPointBlank; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 movement_slow_pct; // offset 0x1A5C, size 0x4, align 4
    int32 attack_slow_pct; // offset 0x1A60, size 0x4, align 4
    int32 point_blank_debuff_duration_pct; // offset 0x1A64, size 0x4, align 4
};
