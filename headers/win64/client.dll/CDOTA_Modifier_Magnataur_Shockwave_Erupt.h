#pragma once

class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 scepter_width; // offset 0x1AF8, size 0x4, align 4
    float32 scepter_duration; // offset 0x1AFC, size 0x4, align 4
    bool play_particle; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    VectorWS m_vStart; // offset 0x1B04, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1B10, size 0xC, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
