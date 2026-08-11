#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors_Playing : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 input_duration; // offset 0x1A78, size 0x4, align 4
    float32 think_interval; // offset 0x1A7C, size 0x4, align 4
    bool m_bChoseOption; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
