#pragma once

class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    bool m_bExploded; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x1B]; // offset 0x1AAD
};
