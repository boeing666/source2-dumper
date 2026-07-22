#pragma once

class CDOTA_Modifier_Magnataur_Shockwave_Erupt : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 scepter_width; // offset 0x1A58, size 0x4, align 4
    float32 scepter_duration; // offset 0x1A5C, size 0x4, align 4
    bool play_particle; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    VectorWS m_vStart; // offset 0x1A64, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1A70, size 0xC, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
