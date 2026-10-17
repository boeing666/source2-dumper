#pragma once

class CDOTA_Modifier_Tutorial_ForceAnimation : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nActivity; // offset 0x1AA8, size 0x4, align 4
    bool m_bLoop; // offset 0x1AAC, size 0x1, align 1
    bool m_bFacePlayer; // offset 0x1AAD, size 0x1, align 1
    char _pad_1AAE[0x2]; // offset 0x1AAE
};
