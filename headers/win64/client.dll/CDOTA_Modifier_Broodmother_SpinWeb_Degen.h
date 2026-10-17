#pragma once

class CDOTA_Modifier_Broodmother_SpinWeb_Degen : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 degen; // offset 0x1AA8, size 0x4, align 4
    bool m_bActive; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
};
