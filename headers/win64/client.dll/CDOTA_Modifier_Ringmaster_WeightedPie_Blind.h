#pragma once

class CDOTA_Modifier_Ringmaster_WeightedPie_Blind : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 vision_radius; // offset 0x1AA8, size 0x4, align 4
    float32 max_slow_pct; // offset 0x1AAC, size 0x4, align 4
    float32 m_flBaseVision; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
