#pragma once

class CDOTA_Modifier_Venomancer_WardCounter : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nTotalWards; // offset 0x1AA8, size 0x4, align 4
    float32 m_fTotalDamage; // offset 0x1AAC, size 0x4, align 4
    char _pad_1AB0[0x18]; // offset 0x1AB0
};
