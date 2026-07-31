#pragma once

class CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 armor_reduction_pct; // offset 0x1A78, size 0x4, align 4
    float32 m_flArmorReduction; // offset 0x1A7C, size 0x4, align 4
    float32 armor_per_tick; // offset 0x1A80, size 0x4, align 4
    float32 tick_rate; // offset 0x1A84, size 0x4, align 4
    int32 max_stacks; // offset 0x1A88, size 0x4, align 4
    int32 m_nTickCount; // offset 0x1A8C, size 0x4, align 4
};
