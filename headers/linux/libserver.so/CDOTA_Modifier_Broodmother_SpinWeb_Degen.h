#pragma once

class CDOTA_Modifier_Broodmother_SpinWeb_Degen : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 degen; // offset 0x1A78, size 0x4, align 4
    bool m_bActive; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
