#pragma once

class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Visuals : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 model_scale_per_stack; // offset 0x1A78, size 0x4, align 4
    bool m_bIsRadiant; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
