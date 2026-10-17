#pragma once

class CDOTA_Modifier_Weaver_TimeLapse : public CDOTA_Buff /*0x0*/  // sizeof 0x1B88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS[11] m_PositionIndex; // offset 0x1AA8, size 0x84, align 4
    float32[11] m_flLife; // offset 0x1B2C, size 0x2C, align 4
    float32[11] m_flMana; // offset 0x1B58, size 0x2C, align 4
    bool m_bHasValidHistory; // offset 0x1B84, size 0x1, align 1
    char _pad_1B85[0x3]; // offset 0x1B85
};
