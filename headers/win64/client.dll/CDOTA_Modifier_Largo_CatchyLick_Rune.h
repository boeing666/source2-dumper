#pragma once

class CDOTA_Modifier_Largo_CatchyLick_Rune : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 pull_duration; // offset 0x1AA8, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x1AAC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRune; // offset 0x1AB0, size 0x4, align 4
    VectorWS m_vOriginalPos; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vDestination; // offset 0x1AC0, size 0xC, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
