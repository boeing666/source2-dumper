#pragma once

class CDOTA_Modifier_Venomancer_WardCounter : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nTotalWards; // offset 0x1A78, size 0x4, align 4
    float32 m_fTotalDamage; // offset 0x1A7C, size 0x4, align 4
    char _pad_1A80[0x18]; // offset 0x1A80
};
