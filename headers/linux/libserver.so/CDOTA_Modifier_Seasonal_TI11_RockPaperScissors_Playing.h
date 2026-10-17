#pragma once

class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors_Playing : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 input_duration; // offset 0x1AA8, size 0x4, align 4
    float32 think_interval; // offset 0x1AAC, size 0x4, align 4
    bool m_bChoseOption; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x7]; // offset 0x1AB1
};
