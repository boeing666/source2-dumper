#pragma once

class CDOTA_Modifier_Light_Collector : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bActive; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 health_regen; // offset 0x1A5C, size 0x4, align 4
    int32 mana_regen; // offset 0x1A60, size 0x4, align 4
    int32 radius; // offset 0x1A64, size 0x4, align 4
    int32 movespeed_pct; // offset 0x1A68, size 0x4, align 4
    int32 penalty; // offset 0x1A6C, size 0x4, align 4
};
