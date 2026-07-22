#pragma once

class CDOTA_Modifier_Largo_CatchyLick_Rune : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 pull_duration; // offset 0x1A58, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x1A5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRune; // offset 0x1A60, size 0x4, align 4
    VectorWS m_vOriginalPos; // offset 0x1A64, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x1A70, size 0xC, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
